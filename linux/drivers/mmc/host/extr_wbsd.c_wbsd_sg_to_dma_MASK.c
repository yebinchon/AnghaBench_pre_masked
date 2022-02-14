
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wbsd_host {int dma_buffer; } ;
struct mmc_data {int sg_len; TYPE_1__* sg; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int FUNC_0 (TYPE_1__*,int,int ,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct wbsd_host *VAR_0, struct mmc_data *VAR_1)
{
 size_t VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->sg_len; VAR_3++)
  VAR_2 += VAR_1->sg[VAR_3].length;
 FUNC_0(VAR_1->sg, VAR_1->sg_len, VAR_0->dma_buffer, VAR_2);
}

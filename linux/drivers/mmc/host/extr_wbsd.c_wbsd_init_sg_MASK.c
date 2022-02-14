
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wbsd_host {TYPE_1__* cur_sg; int remain; scalar_t__ offset; int num_sg; } ;
struct mmc_data {int sg_len; TYPE_1__* sg; } ;
struct TYPE_2__ {int length; } ;



__attribute__((used)) static inline void FUNC_0(struct wbsd_host *VAR_0, struct mmc_data *VAR_1)
{



 VAR_0->cur_sg = VAR_1->sg;
 VAR_0->num_sg = VAR_1->sg_len;

 VAR_0->offset = 0;
 VAR_0->remain = VAR_0->cur_sg->length;
}

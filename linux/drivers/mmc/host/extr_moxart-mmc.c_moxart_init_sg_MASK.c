
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moxart_host {scalar_t__ data_remain; scalar_t__ data_len; TYPE_1__* cur_sg; int num_sg; } ;
struct mmc_data {int sg_len; TYPE_1__* sg; } ;
struct TYPE_2__ {scalar_t__ length; } ;



__attribute__((used)) static inline void FUNC_0(struct moxart_host *VAR_0,
      struct mmc_data *VAR_1)
{
 VAR_0->cur_sg = VAR_1->sg;
 VAR_0->num_sg = VAR_1->sg_len;
 VAR_0->data_remain = VAR_0->cur_sg->length;

 if (VAR_0->data_remain > VAR_0->data_len)
  VAR_0->data_remain = VAR_0->data_len;
}

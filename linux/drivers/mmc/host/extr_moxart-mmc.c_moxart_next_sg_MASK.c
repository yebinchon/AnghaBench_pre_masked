
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct moxart_host {scalar_t__ num_sg; int data_remain; int data_len; TYPE_3__* cur_sg; TYPE_2__* mrq; } ;
struct mmc_data {int bytes_xfered; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {TYPE_1__* cmd; } ;
struct TYPE_4__ {struct mmc_data* data; } ;



__attribute__((used)) static inline int FUNC_0(struct moxart_host *VAR_0)
{
 int VAR_1;
 struct mmc_data *VAR_2 = VAR_0->mrq->cmd->data;

 VAR_0->cur_sg++;
 VAR_0->num_sg--;

 if (VAR_0->num_sg > 0) {
  VAR_0->data_remain = VAR_0->cur_sg->length;
  VAR_1 = VAR_0->data_len - VAR_2->bytes_xfered;
  if (VAR_1 > 0 && VAR_1 < VAR_0->data_remain)
   VAR_0->data_remain = VAR_1;
 }

 return VAR_0->num_sg;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tifm_sd {int cmd_flags; TYPE_2__* req; } ;
struct tifm_dev {int lock; scalar_t__ addr; int dev; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {struct mmc_data* data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int,int ) ;
 struct tifm_sd* FUNC_1 (struct mmc_host*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct tifm_dev*) ;
 int FUNC_6 (struct tifm_sd*) ;
 scalar_t__ FUNC_7 (struct tifm_sd*,struct mmc_data*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct tifm_dev *VAR_3)
{
 struct tifm_sd *VAR_4;
 unsigned int VAR_5 = 0;
 struct mmc_data *VAR_6 = ((void*)0);

 FUNC_3(&VAR_3->lock);
 VAR_4 = FUNC_1((struct mmc_host*)FUNC_5(VAR_3));
 VAR_5 = FUNC_2(VAR_3->addr + VAR_1);
 FUNC_0(&VAR_3->dev, "data event: fifo_status %x, flags %x\n",
  VAR_5, VAR_4->cmd_flags);

 if (VAR_4->req) {
  VAR_6 = VAR_4->req->cmd->data;

  if (VAR_6 && (VAR_5 & VAR_2)) {
   if (FUNC_7(VAR_4, VAR_6)) {
    VAR_4->cmd_flags |= VAR_0;
    FUNC_6(VAR_4);
   }
  }
 }

 FUNC_8(VAR_5, VAR_3->addr + VAR_1);
 FUNC_4(&VAR_3->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_command {TYPE_1__* data; } ;
struct meson_mx_mmc_host {int mmc; int cmd_timeout; struct mmc_command* cmd; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int bytes_xfered; int blksz; int blocks; int sg_len; int sg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct mmc_command* FUNC_3 (struct mmc_command*) ;
 int FUNC_4 (struct meson_mx_mmc_host*) ;
 int FUNC_5 (int ,struct mmc_command*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct meson_mx_mmc_host *VAR_3 = (void *) VAR_2;
 struct mmc_command *VAR_4 = VAR_3->cmd, *VAR_5;

 if (FUNC_0(!VAR_4))
  return VAR_0;

 FUNC_1(&VAR_3->cmd_timeout);

 if (VAR_4->data) {
  FUNC_2(FUNC_6(VAR_3->mmc), VAR_4->data->sg,
    VAR_4->data->sg_len,
    FUNC_7(VAR_4->data));

  VAR_4->data->bytes_xfered = VAR_4->data->blksz * VAR_4->data->blocks;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_5(VAR_3->mmc, VAR_5);
 else
  FUNC_4(VAR_3);

 return VAR_0;
}

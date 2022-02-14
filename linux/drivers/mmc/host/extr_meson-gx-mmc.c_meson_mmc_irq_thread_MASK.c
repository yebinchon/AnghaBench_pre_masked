
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {unsigned int blksz; unsigned int blocks; int sg_len; int sg; } ;
struct mmc_command {int mrq; struct mmc_data* data; scalar_t__ error; } ;
struct meson_host {unsigned int bounce_buf_size; int mmc; int bounce_buf; struct mmc_command* cmd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mmc_data*) ;
 struct mmc_command* FUNC_2 (struct mmc_command*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct mmc_command*) ;
 int FUNC_5 (struct meson_host*) ;
 int FUNC_6 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct meson_host *VAR_4 = VAR_3;
 struct mmc_command *VAR_5, *VAR_6 = VAR_4->cmd;
 struct mmc_data *VAR_7;
 unsigned int VAR_8;

 if (FUNC_0(!VAR_6))
  return VAR_1;

 if (VAR_6->error) {
  FUNC_5(VAR_4);
  FUNC_3(VAR_4->mmc, VAR_6->mrq);

  return VAR_0;
 }

 VAR_7 = VAR_6->data;
 if (FUNC_1(VAR_7)) {
  VAR_8 = VAR_7->blksz * VAR_7->blocks;
  FUNC_0(VAR_8 > VAR_4->bounce_buf_size);
  FUNC_6(VAR_7->sg, VAR_7->sg_len,
        VAR_4->bounce_buf, VAR_8);
 }

 VAR_5 = FUNC_2(VAR_6);
 if (VAR_5)
  FUNC_4(VAR_4->mmc, VAR_5);
 else
  FUNC_3(VAR_4->mmc, VAR_6->mrq);

 return VAR_0;
}

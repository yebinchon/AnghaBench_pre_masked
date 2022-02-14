
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int flags; int sg_len; int sg; } ;
struct mmc_command {struct mmc_data* data; } ;
struct jz4740_mmc_host {int miter; TYPE_1__* req; } ;
struct TYPE_2__ {struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct jz4740_mmc_host *VAR_3)
{
 struct mmc_command *VAR_4 = VAR_3->req->cmd;
 struct mmc_data *VAR_5 = VAR_4->data;
 int VAR_6;

 if (VAR_5->flags & VAR_0)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 FUNC_0(&VAR_3->miter, VAR_5->sg, VAR_5->sg_len, VAR_6);
}

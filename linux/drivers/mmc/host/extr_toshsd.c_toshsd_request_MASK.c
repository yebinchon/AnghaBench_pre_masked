
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshsd_host {int lock; struct mmc_request* mrq; scalar_t__ ioaddr; } ;
struct mmc_request {TYPE_1__* cmd; int data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct toshsd_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct toshsd_host*,int) ;
 int FUNC_7 (struct toshsd_host*,TYPE_1__*) ;
 int FUNC_8 (struct toshsd_host*,int ) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct toshsd_host *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;


 if (!(FUNC_1(VAR_5->ioaddr + VAR_1) & VAR_2)) {
  VAR_4->cmd->error = -VAR_0;
  FUNC_3(VAR_3, VAR_4);
  return;
 }

 FUNC_4(&VAR_5->lock, VAR_6);

 FUNC_0(VAR_5->mrq != ((void*)0));

 VAR_5->mrq = VAR_4;

 if (VAR_4->data)
  FUNC_8(VAR_5, VAR_4->data);

 FUNC_6(VAR_5, 1);

 FUNC_7(VAR_5, VAR_4->cmd);

 FUNC_5(&VAR_5->lock, VAR_6);
}

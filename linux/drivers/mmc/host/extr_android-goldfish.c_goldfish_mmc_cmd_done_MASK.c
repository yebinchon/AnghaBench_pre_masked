
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; int mrq; scalar_t__ error; void** resp; } ;
struct goldfish_mmc_host {int * mrq; int * data; int * cmd; } ;


 void* FUNC_0 (struct goldfish_mmc_host*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct goldfish_mmc_host*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct goldfish_mmc_host *VAR_6,
      struct mmc_command *VAR_7)
{
 VAR_6->cmd = ((void*)0);
 if (VAR_7->flags & VAR_5) {
  if (VAR_7->flags & VAR_4) {

   VAR_7->resp[3] =
    FUNC_0(VAR_6, VAR_0);
   VAR_7->resp[2] =
    FUNC_0(VAR_6, VAR_1);
   VAR_7->resp[1] =
    FUNC_0(VAR_6, VAR_2);
   VAR_7->resp[0] =
    FUNC_0(VAR_6, VAR_3);
  } else {

   VAR_7->resp[0] =
    FUNC_0(VAR_6, VAR_0);
  }
 }

 if (VAR_6->data == ((void*)0) || VAR_7->error) {
  VAR_6->mrq = ((void*)0);
  FUNC_2(FUNC_1(VAR_6), VAR_7->mrq);
 }
}

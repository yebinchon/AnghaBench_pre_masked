
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {int current_slot; struct mmc_host* mmc; int * mrq; int * data; int cmd_abort_timer; int * cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {int flags; int* resp; int mrq; scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mmc_omap_host*,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct mmc_host*,int ) ;

__attribute__((used)) static void
FUNC_5(struct mmc_omap_host *VAR_10, struct mmc_command *VAR_11)
{
 VAR_10->cmd = ((void*)0);

 FUNC_1(&VAR_10->cmd_abort_timer);

 if (VAR_11->flags & VAR_1) {
  if (VAR_11->flags & VAR_0) {

   VAR_11->resp[3] =
    FUNC_0(VAR_10, VAR_2) |
    (FUNC_0(VAR_10, VAR_3) << 16);
   VAR_11->resp[2] =
    FUNC_0(VAR_10, VAR_4) |
    (FUNC_0(VAR_10, VAR_5) << 16);
   VAR_11->resp[1] =
    FUNC_0(VAR_10, VAR_6) |
    (FUNC_0(VAR_10, VAR_7) << 16);
   VAR_11->resp[0] =
    FUNC_0(VAR_10, VAR_8) |
    (FUNC_0(VAR_10, VAR_9) << 16);
  } else {

   VAR_11->resp[0] =
    FUNC_0(VAR_10, VAR_8) |
    (FUNC_0(VAR_10, VAR_9) << 16);
  }
 }

 if (VAR_10->data == ((void*)0) || VAR_11->error) {
  struct mmc_host *VAR_12;

  if (VAR_10->data != ((void*)0))
   FUNC_2(VAR_10, VAR_10->data);
  VAR_10->mrq = ((void*)0);
  VAR_12 = VAR_10->mmc;
  FUNC_3(VAR_10->current_slot, 1);
  FUNC_4(VAR_12, VAR_11->mrq);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wbsd_host {int flags; int dma; int lock; int fifo_tasklet; int mmc; struct mmc_request* mrq; } ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {int opcode; int error; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ error; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct wbsd_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wbsd_host*,TYPE_1__*) ;
 int FUNC_8 (struct wbsd_host*,struct mmc_request*) ;
 int FUNC_9 (struct wbsd_host*,struct mmc_command*) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct wbsd_host *VAR_5 = FUNC_2(VAR_3);
 struct mmc_command *VAR_6;




 FUNC_4(&VAR_5->lock);

 FUNC_0(VAR_5->mrq != ((void*)0));

 VAR_6 = VAR_4->cmd;

 VAR_5->mrq = VAR_4;




 if (!(VAR_5->flags & VAR_2)) {
  VAR_6->error = -VAR_1;
  goto done;
 }

 if (VAR_6->data) {






  switch (VAR_6->opcode) {
  case 11:
  case 17:
  case 18:
  case 20:
  case 24:
  case 25:
  case 26:
  case 27:
  case 30:
  case 42:
  case 56:
   break;



  case 51:
   break;

  default:
   FUNC_3("%s: Data command %d is not supported by this controller\n",
    FUNC_1(VAR_5->mmc), VAR_6->opcode);
   VAR_6->error = -VAR_0;

   goto done;
  }
 }




 if (VAR_6->data) {
  FUNC_7(VAR_5, VAR_6->data);

  if (VAR_6->data->error)
   goto done;
 }

 FUNC_9(VAR_5, VAR_6);






 if (VAR_6->data && !VAR_6->error) {



  if (VAR_5->dma == -1)
   FUNC_6(&VAR_5->fifo_tasklet);

  FUNC_5(&VAR_5->lock);

  return;
 }

done:
 FUNC_8(VAR_5, VAR_4);

 FUNC_5(&VAR_5->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wbsd_host {int flags; int mmc; int lock; int finish_tasklet; TYPE_2__* mrq; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {int error; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wbsd_host*) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_5)
{
 struct wbsd_host *VAR_6 = (struct wbsd_host *)VAR_5;
 u8 VAR_7;
 int VAR_8 = -1;

 FUNC_7(&VAR_6->lock);

 if (VAR_6->flags & VAR_4) {
  FUNC_8(&VAR_6->lock);
  return;
 }

 VAR_7 = FUNC_2(VAR_6->base + VAR_2);
 FUNC_1(VAR_7 == 0xff);

 if (VAR_7 & VAR_1) {
  if (!(VAR_6->flags & VAR_3)) {
   FUNC_0("Card inserted\n");
   VAR_6->flags |= VAR_3;

   VAR_8 = 500;
  }
 } else if (VAR_6->flags & VAR_3) {
  FUNC_0("Card removed\n");
  VAR_6->flags &= ~VAR_3;

  if (VAR_6->mrq) {
   FUNC_6("%s: Card removed during transfer!\n",
    FUNC_4(VAR_6->mmc));
   FUNC_10(VAR_6);

   VAR_6->mrq->cmd->error = -VAR_0;
   FUNC_9(&VAR_6->finish_tasklet);
  }

  VAR_8 = 0;
 }





 FUNC_8(&VAR_6->lock);

 if (VAR_8 != -1)
  FUNC_3(VAR_6->mmc, FUNC_5(VAR_8));
}

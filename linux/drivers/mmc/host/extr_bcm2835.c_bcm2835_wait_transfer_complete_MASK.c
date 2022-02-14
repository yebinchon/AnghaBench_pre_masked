
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bcm2835_host {TYPE_2__* mrq; TYPE_1__* pdev; scalar_t__ ioaddr; } ;
struct TYPE_6__ {int flags; int error; } ;
struct TYPE_5__ {TYPE_3__* data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bcm2835_host*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct bcm2835_host *VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 VAR_11 = (VAR_9->mrq->data->flags & VAR_1) ?
  VAR_7 : VAR_8;

 VAR_10 = 0;

 while (1) {
  u32 VAR_12, VAR_13;

  VAR_12 = FUNC_3(VAR_9->ioaddr + VAR_2);
  VAR_13 = VAR_12 & VAR_6;

  if ((VAR_13 == VAR_5) ||
      (VAR_13 == VAR_4))
   break;
  if (VAR_13 == VAR_11) {
   FUNC_4(VAR_12 | VAR_3,
          VAR_9->ioaddr + VAR_2);
   break;
  }

  VAR_10++;
  if (VAR_10 == 100000) {
   FUNC_2(&VAR_9->pdev->dev,
    "wait_transfer_complete - still waiting after %d retries\n",
    VAR_10);
   FUNC_0(VAR_9);
   VAR_9->mrq->data->error = -VAR_0;
   return;
  }
  FUNC_1();
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {TYPE_2__* ops; int flags; } ;
struct sixpack {scalar_t__ xleft; int xhead; scalar_t__ tx_enable; TYPE_3__* dev; } ;
struct TYPE_4__ {int tx_packets; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_5__ {int (* write ) (struct tty_struct*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 struct sixpack* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct sixpack*) ;
 int FUNC_4 (struct tty_struct*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct sixpack *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return;
 if (VAR_2->xleft <= 0) {


  VAR_2->dev->stats.tx_packets++;
  FUNC_0(VAR_0, &VAR_1->flags);
  VAR_2->tx_enable = 0;
  FUNC_1(VAR_2->dev);
  goto out;
 }

 if (VAR_2->tx_enable) {
  VAR_3 = VAR_1->ops->write(VAR_1, VAR_2->xhead, VAR_2->xleft);
  VAR_2->xleft -= VAR_3;
  VAR_2->xhead += VAR_3;
 }

out:
 FUNC_3(VAR_2);
}

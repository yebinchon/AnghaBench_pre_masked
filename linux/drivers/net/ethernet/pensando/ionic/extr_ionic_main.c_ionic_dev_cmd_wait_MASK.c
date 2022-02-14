
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_dev {TYPE_3__* dev_cmd_regs; } ;
struct ionic {int dev; struct ionic_dev idev; } ;
struct TYPE_4__ {int opcode; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {int doorbell; int done; TYPE_2__ cmd; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int,int,unsigned long,unsigned long) ;
 int FUNC_2 (int ,char*,int ,int,int ,int) ;
 int FUNC_3 (int ,char*,int ,int,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ionic_dev*) ;
 int FUNC_6 (struct ionic_dev*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int *) ;
 unsigned long VAR_3 ;
 int FUNC_11 (int) ;
 int FUNC_12 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;

int FUNC_14(struct ionic *VAR_4, unsigned long VAR_5)
{
 struct ionic_dev *VAR_6 = &VAR_4->idev;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_0(FUNC_4());




 VAR_8 = VAR_3 + (VAR_5 * VAR_1);
try_again:
 VAR_7 = VAR_3;
 do {
  VAR_11 = FUNC_5(VAR_6);
  if (VAR_11)
   break;
  FUNC_11(20);
 } while (!VAR_11 && FUNC_13(VAR_3, VAR_8));
 VAR_9 = VAR_3 - VAR_7;

 VAR_10 = VAR_6->dev_cmd_regs->cmd.cmd.opcode;
 FUNC_1(VAR_4->dev, "DEVCMD %s (%d) done=%d took %ld secs (%ld jiffies)\n",
  FUNC_9(VAR_10), VAR_10,
  VAR_11, VAR_9 / VAR_1, VAR_9);

 if (!VAR_11 && !FUNC_13(VAR_3, VAR_8)) {
  FUNC_3(VAR_4->dev, "DEVCMD %s (%d) timeout after %ld secs\n",
    FUNC_9(VAR_10), VAR_10, VAR_5);
  return -VAR_0;
 }

 VAR_12 = FUNC_6(&VAR_4->idev);
 if (VAR_12) {
  if (VAR_12 == VAR_2 && !FUNC_12(VAR_3, VAR_8)) {
   FUNC_2(VAR_4->dev, "DEV_CMD %s (%d) error, %s (%d) retrying...\n",
    FUNC_9(VAR_10), VAR_10,
    FUNC_8(VAR_12), VAR_12);

   FUNC_11(1000);
   FUNC_10(0, &VAR_6->dev_cmd_regs->done);
   FUNC_10(1, &VAR_6->dev_cmd_regs->doorbell);
   goto try_again;
  }

  FUNC_2(VAR_4->dev, "DEV_CMD %s (%d) error, %s (%d) failed\n",
   FUNC_9(VAR_10), VAR_10,
   FUNC_8(VAR_12), VAR_12);

  return FUNC_7(VAR_12);
 }

 return 0;
}

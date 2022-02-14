
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int dev; int cmd_complete; scalar_t__ irq_mode; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int * VAR_11 ;
 int FUNC_2 () ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_13;
 int VAR_14 = 0;

 if (VAR_12.irq_mode) {
  if (0 == FUNC_4(
    &VAR_12.cmd_complete, VAR_8 * VAR_3))
   VAR_14 = -VAR_2;
 } else {
  int VAR_15 = VAR_7;

  while ((FUNC_2() & VAR_9) && --VAR_15)
   FUNC_3(1);
  if (VAR_15 == 0)
   VAR_14 = -VAR_2;
 }

 VAR_13 = FUNC_2();
 if (VAR_14 == -VAR_2) {
  FUNC_1(VAR_12.dev,
   "IPC timed out, TS=0x%x, CMD=0x%x\n",
   VAR_13, VAR_12.cmd);
  return VAR_14;
 }

 if (VAR_13 & VAR_10) {
  int VAR_16;

  VAR_14 = -VAR_1;
  VAR_16 = (VAR_13 >> VAR_4) & 0xFF;
  if (VAR_16 < FUNC_0(VAR_11))
   FUNC_1(VAR_12.dev,
    "IPC failed: %s, STS=0x%x, CMD=0x%x\n",
    VAR_11[VAR_16], VAR_13, VAR_12.cmd);
  else
   FUNC_1(VAR_12.dev,
    "IPC failed: unknown, STS=0x%x, CMD=0x%x\n",
    VAR_13, VAR_12.cmd);
  if ((VAR_16 == VAR_6) || (VAR_16 == VAR_5))
   VAR_14 = -VAR_0;
 }

 return VAR_14;
}

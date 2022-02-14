
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct fza_private {scalar_t__ state_chg_flag; int name; TYPE_1__* regs; int state_chg_wait; int lock; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct fza_private*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int ,scalar_t__,...) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 long FUNC_9 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(struct fza_private *VAR_3)
{
 unsigned long VAR_4;
 uint VAR_5, VAR_6;
 long VAR_7;

 FUNC_5("%s: resetting the board...\n", VAR_3->name);

 FUNC_7(&VAR_3->lock, VAR_4);
 VAR_3->state_chg_flag = 0;
 FUNC_2(VAR_3);
 FUNC_8(&VAR_3->lock, VAR_4);





 VAR_7 = FUNC_9(VAR_3->state_chg_wait, VAR_3->state_chg_flag,
          45 * VAR_2);
 VAR_5 = FUNC_6(&VAR_3->regs->status);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_3->state_chg_flag == 0) {
  FUNC_4("%s: RESET timed out!, state %x\n", VAR_3->name, VAR_6);
  return -VAR_0;
 }
 if (VAR_6 != VAR_1) {
  FUNC_4("%s: RESET failed!, state %x, failure ID %x\n",
         VAR_3->name, VAR_6, FUNC_1(VAR_5));
  return -VAR_0;
 }
 FUNC_5("%s: OK\n", VAR_3->name);
 FUNC_3("%s: RESET: %lums elapsed\n", VAR_3->name,
   (45 * VAR_2 - VAR_7) * 1000 / VAR_2);

 return 0;
}

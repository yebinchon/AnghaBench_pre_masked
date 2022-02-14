
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int cmd_flags; int q; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_4__ {TYPE_1__* ctrl; int status; } ;
struct TYPE_3__ {int comp_seen; scalar_t__ kas; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct request*) ;
 TYPE_2__* FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*,scalar_t__) ;
 int FUNC_9 (struct request*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct request *VAR_2)
{
 blk_status_t VAR_3 = FUNC_3(FUNC_5(VAR_2)->status);

 FUNC_9(VAR_2);

 if (FUNC_5(VAR_2)->ctrl->kas)
  FUNC_5(VAR_2)->ctrl->comp_seen = 1;

 if (FUNC_10(VAR_3 != VAR_0 && FUNC_6(VAR_2))) {
  if ((VAR_2->cmd_flags & VAR_1) &&
      FUNC_1(VAR_3)) {
   FUNC_4(VAR_2);
   return;
  }

  if (!FUNC_2(VAR_2->q)) {
   FUNC_7(VAR_2);
   return;
  }
 }

 FUNC_8(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3);
}

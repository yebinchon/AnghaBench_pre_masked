
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
typedef enum bp_state { ____Placeholder_bp_state } bp_state ;
struct TYPE_2__ {int schedule_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 long FUNC_2 () ;
 int FUNC_3 (long,int ) ;
 int FUNC_4 (long) ;
 long FUNC_5 (long,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 () ;
 long VAR_7 ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct work_struct *VAR_8)
{
 enum bp_state VAR_9 = VAR_0;
 long VAR_10;


 do {
  FUNC_6(&VAR_4);

  VAR_10 = FUNC_2();

  if (VAR_10 > 0) {
   if (FUNC_0())
    VAR_9 = FUNC_4(VAR_10);
   else
    VAR_9 = FUNC_8();
  }

  if (VAR_10 < 0) {
   long VAR_11;

   VAR_11 = FUNC_5(-VAR_10, FUNC_10());
   VAR_9 = FUNC_3(VAR_11, VAR_2);
   if (VAR_9 == VAR_0 && VAR_11 != -VAR_10 &&
       VAR_11 < VAR_7)
    VAR_9 = VAR_1;
  }

  VAR_9 = FUNC_11(VAR_9);

  FUNC_7(&VAR_4);

  FUNC_1();

 } while (VAR_10 && VAR_9 == VAR_0);


 if (VAR_9 == VAR_1)
  FUNC_9(&VAR_6, VAR_5.schedule_delay * VAR_3);
}

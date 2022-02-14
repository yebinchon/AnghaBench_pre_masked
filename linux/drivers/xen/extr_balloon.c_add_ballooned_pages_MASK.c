
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bp_state { ____Placeholder_bp_state } bp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_7(int VAR_8)
{
 enum bp_state VAR_9;

 if (VAR_7) {
  VAR_9 = FUNC_4();
  if (VAR_9 != VAR_1) {
   FUNC_3(&VAR_4);
   FUNC_6(VAR_5,
       !FUNC_1(&VAR_6));
   FUNC_2(&VAR_4);
   return 0;
  }
 }

 if (FUNC_5() < VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_8, VAR_3);
 if (VAR_9 != VAR_0)
  return -VAR_2;

 return 0;
}

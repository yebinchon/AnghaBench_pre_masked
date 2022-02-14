
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct pxafb_info {scalar_t__ task_state; int task; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct pxafb_info *VAR_3, u_int VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_5);
 if (VAR_3->task_state == VAR_1 && VAR_4 == VAR_2)
  VAR_4 = (u_int) -1;
 if (VAR_3->task_state == VAR_0 && VAR_4 == VAR_1)
  VAR_4 = VAR_2;

 if (VAR_4 != (u_int)-1) {
  VAR_3->task_state = VAR_4;
  FUNC_2(&VAR_3->task);
 }
 FUNC_0(VAR_5);
}

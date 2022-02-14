
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airo_info {int thr_wait; int expires; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct airo_info *VAR_3)
{
 if (VAR_2 && !FUNC_1(VAR_0, &VAR_3->flags)) {
  VAR_3->expires = FUNC_0(3*VAR_1);
  FUNC_2(&VAR_3->thr_wait);
 }
}

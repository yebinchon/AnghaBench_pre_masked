
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_msg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mon_msg*) ;
 int FUNC_1 (struct mon_msg*) ;
 scalar_t__ FUNC_2 (struct mon_msg*) ;
 scalar_t__ FUNC_3 (struct mon_msg*,int) ;
 scalar_t__ FUNC_4 (struct mon_msg*) ;
 scalar_t__ FUNC_5 (struct mon_msg*) ;

__attribute__((used)) static int FUNC_6(struct mon_msg *VAR_3)
{
 if ((FUNC_4(VAR_3) <= FUNC_5(VAR_3)) ||
     (FUNC_5(VAR_3) < VAR_2) ||
     (FUNC_4(VAR_3) > VAR_1) ||
     (FUNC_3(VAR_3, 0) == 0) ||
     (FUNC_1(VAR_3) % 12 != 0) ||
     (FUNC_0(VAR_3) <= FUNC_2(VAR_3)) ||
     (FUNC_0(VAR_3) > VAR_1) ||
     (FUNC_2(VAR_3) < VAR_2) ||
     ((FUNC_3(VAR_3, 1) == 0) && (FUNC_3(VAR_3, 2) == 0)))
  return -VAR_0;
 return 0;
}

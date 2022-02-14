
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct ci_hdrc*,int ,int ) ;
 int FUNC_4 (struct ci_hdrc*,int ,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ci_hdrc *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_2(VAR_5, VAR_6);


 FUNC_5();

 if (VAR_7 && VAR_6 == VAR_3 && FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_5)))
  return -VAR_0;

 FUNC_4(VAR_4, VAR_1, ~0, FUNC_0(VAR_8));

 while (FUNC_3(VAR_4, VAR_1, FUNC_0(VAR_8)))
  FUNC_1();
 if (VAR_7 && VAR_6 == VAR_3 && FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_5)))
  return -VAR_0;


 return 0;
}

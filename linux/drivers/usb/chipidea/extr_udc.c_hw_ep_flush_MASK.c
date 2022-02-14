
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct ci_hdrc*,int ,int ) ;
 int FUNC_4 (struct ci_hdrc*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ci_hdrc *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3, VAR_4);

 do {

  FUNC_4(VAR_2, VAR_0, ~0, FUNC_0(VAR_5));
  while (FUNC_3(VAR_2, VAR_0, FUNC_0(VAR_5)))
   FUNC_1();
 } while (FUNC_3(VAR_2, VAR_1, FUNC_0(VAR_5)));

 return 0;
}

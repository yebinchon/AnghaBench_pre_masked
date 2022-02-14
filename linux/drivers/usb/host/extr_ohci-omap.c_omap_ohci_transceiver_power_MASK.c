
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_4)
{
 if (VAR_4) {
  if (FUNC_3() && FUNC_2())
   FUNC_1(FUNC_0(VAR_2)
    | ((1 << 5 ) | (1 << 3 )),
          VAR_2);
  else if (FUNC_4())
   FUNC_5(VAR_0, VAR_3);
 } else {
  if (FUNC_3() && FUNC_2())
   FUNC_1(FUNC_0(VAR_2)
    & ~((1 << 5 ) | (1 << 3 )),
          VAR_2);
  else if (FUNC_4())
   FUNC_5(VAR_0, VAR_1);
 }

 return 0;
}

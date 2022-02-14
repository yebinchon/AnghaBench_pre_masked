
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk1160 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct stk1160*,int ,int*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct stk1160 *VAR_6)
{
 unsigned long VAR_7 = VAR_5 + FUNC_0(VAR_4);
 u8 VAR_8;


 while (FUNC_3(VAR_7)) {
  FUNC_2(VAR_6, VAR_1, &VAR_8);

  if (!(VAR_8 & (VAR_2 | VAR_3)))
   return 0;

  FUNC_4(50, 100);
 }

 FUNC_1("AC97 transfer took too long, this should never happen!");
 return -VAR_0;
}

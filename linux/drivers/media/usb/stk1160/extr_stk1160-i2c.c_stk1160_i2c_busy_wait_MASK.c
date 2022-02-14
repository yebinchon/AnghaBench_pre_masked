
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk1160 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct stk1160*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct stk1160 *VAR_5, u8 VAR_6)
{
 unsigned long VAR_7;
 u8 VAR_8;


 VAR_7 = VAR_4 + FUNC_0(VAR_1);
 while (FUNC_2(VAR_7)) {

  FUNC_1(VAR_5, VAR_2+1, &VAR_8);

  if (VAR_8 & VAR_6)
   goto done;

  FUNC_3(10 * VAR_3, 20 * VAR_3);
 }

 return -VAR_0;

done:
 return 0;
}

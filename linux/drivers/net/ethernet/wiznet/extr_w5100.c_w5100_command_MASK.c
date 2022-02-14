
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w5100_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct w5100_priv*) ;
 int FUNC_1 () ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (struct w5100_priv*,int ) ;
 int FUNC_5 (struct w5100_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct w5100_priv *VAR_2, u16 VAR_3)
{
 unsigned long VAR_4;

 FUNC_5(VAR_2, FUNC_0(VAR_2), VAR_3);

 VAR_4 = VAR_1 + FUNC_2(100);

 while (FUNC_4(VAR_2, FUNC_0(VAR_2)) != 0) {
  if (FUNC_3(VAR_1, VAR_4))
   return -VAR_0;
  FUNC_1();
 }

 return 0;
}

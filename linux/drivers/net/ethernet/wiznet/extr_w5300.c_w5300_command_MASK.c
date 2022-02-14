
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w5300_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (struct w5300_priv*,int ) ;
 int FUNC_4 (struct w5300_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct w5300_priv *VAR_3, u16 VAR_4)
{
 unsigned long VAR_5 = VAR_2 + FUNC_1(100);

 FUNC_4(VAR_3, VAR_1, VAR_4);

 while (FUNC_3(VAR_3, VAR_1) != 0) {
  if (FUNC_2(VAR_2, VAR_5))
   return -VAR_0;
  FUNC_0();
 }

 return 0;
}

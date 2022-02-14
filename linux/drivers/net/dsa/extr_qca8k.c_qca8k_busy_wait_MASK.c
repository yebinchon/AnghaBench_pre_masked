
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qca8k_priv {int dummy; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct qca8k_priv*,int) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct qca8k_priv *VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_0 + FUNC_1(20);


 do {
  u32 VAR_5 = FUNC_2(VAR_1, VAR_2);
  int VAR_6 = VAR_5 & VAR_3;

  if (!VAR_6)
   break;
  FUNC_0();
 } while (!FUNC_3(VAR_0, VAR_4));

 return FUNC_3(VAR_0, VAR_4);
}

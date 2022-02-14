
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r820t_priv {int dummy; } ;


 int FUNC_0 (struct r820t_priv*) ;
 int FUNC_1 (struct r820t_priv*,int,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct r820t_priv *VAR_0)
{
 int VAR_1;
 u8 VAR_2;


 for (VAR_2 = 12; VAR_2 < 16; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, 0x0c, VAR_2, 0x0f);
  if (VAR_1 < 0)
   return VAR_1;

  FUNC_2(10000, 11000);

  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 < 0)
   return VAR_1;

  if (VAR_1 > 40 * 4)
   break;
 }

 return 0;
}

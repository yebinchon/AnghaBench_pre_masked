
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max2165_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct max2165_priv*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct max2165_priv *VAR_1, u8 VAR_2 )
{
 u8 VAR_3;

 VAR_3 = (VAR_2 / 2);
 if (VAR_3 == 2)
  VAR_3 = 0x7;
 else
  VAR_3 -= 8;

 FUNC_0(VAR_1, VAR_0, 0x07, VAR_3);

 return 0;
}

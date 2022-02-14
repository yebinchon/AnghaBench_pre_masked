
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w5300_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w5300_priv*,int ,int) ;
 int FUNC_1 (struct w5300_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct w5300_priv *VAR_2, u8 *VAR_3, int VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += 2) {
  VAR_5 = *VAR_3++ << 8;
  VAR_5 |= *VAR_3++;
  FUNC_0(VAR_2, VAR_0, VAR_5);
 }
 FUNC_1(VAR_2, VAR_1, VAR_4);
}

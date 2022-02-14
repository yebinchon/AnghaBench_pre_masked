
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xc5000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xc5000_priv*,int ,int*) ;
 int FUNC_2 (struct xc5000_priv*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct xc5000_priv *VAR_2, u16 VAR_3, u16 VAR_4)
{
 u8 VAR_5[4];
 int VAR_6 = 100;
 int VAR_7;

 VAR_5[0] = (VAR_3 >> 8) & 0xFF;
 VAR_5[1] = VAR_3 & 0xFF;
 VAR_5[2] = (VAR_4 >> 8) & 0xFF;
 VAR_5[3] = VAR_4 & 0xFF;
 VAR_7 = FUNC_2(VAR_2, VAR_5, 4);
 if (VAR_7 == 0) {

  while ((VAR_6 > 0) && (VAR_7 == 0)) {
   VAR_7 = FUNC_1(VAR_2, VAR_1, (u16 *)VAR_5);
   if (VAR_7 == 0) {
    if ((VAR_5[0] == 0) && (VAR_5[1] == 0)) {

     break;
    } else {
     FUNC_0(5);
     VAR_6--;
    }
   }
  }
 }
 if (VAR_6 <= 0)
  VAR_7 = -VAR_0;

 return VAR_7;
}

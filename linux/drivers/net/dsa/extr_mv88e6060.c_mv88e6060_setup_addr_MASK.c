
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6060_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct mv88e6060_priv*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6060_priv *VAR_5)
{
 u8 VAR_6[VAR_0];
 int VAR_7;
 u16 VAR_8;

 FUNC_0(VAR_6);

 VAR_8 = VAR_6[0] << 8 | VAR_6[1];




 VAR_8 &= 0xfeff;

 VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_1, VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_2,
   (VAR_6[2] << 8) | VAR_6[3]);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_5, VAR_4, VAR_3,
    (VAR_6[4] << 8) | VAR_6[5]);
}

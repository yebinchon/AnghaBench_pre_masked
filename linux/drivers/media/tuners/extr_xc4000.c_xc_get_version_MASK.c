
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xc4000_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xc4000_priv*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct xc4000_priv *VAR_1,
 u8 *VAR_2, u8 *VAR_3,
 u8 *VAR_4, u8 *VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0, &VAR_6);
 if (VAR_7 != 0)
  return VAR_7;

 (*VAR_2) = (VAR_6 >> 12) & 0x0F;
 (*VAR_3) = (VAR_6 >> 8) & 0x0F;
 (*VAR_4) = (VAR_6 >> 4) & 0x0F;
 (*VAR_5) = VAR_6 & 0x0F;

 return 0;
}

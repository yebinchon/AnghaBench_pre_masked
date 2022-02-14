
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_sf2_priv*,int) ;
 int FUNC_1 (struct bcm_sf2_priv*,int,int) ;
 int FUNC_2 (struct bcm_sf2_priv*,int ) ;
 int FUNC_3 (struct bcm_sf2_priv*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bcm_sf2_priv *VAR_2, int VAR_3, int VAR_4,
          int VAR_5, u16 VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 VAR_8 |= VAR_0;
 FUNC_3(VAR_2, VAR_8, VAR_1);


 VAR_8 = 0x70;
 VAR_8 <<= 2;
 FUNC_1(VAR_2, VAR_4, VAR_8);


 VAR_8 = 0x80 << 8 | VAR_5 << 1;
 VAR_8 <<= 2;

 if (VAR_3)
  VAR_7 = FUNC_0(VAR_2, VAR_8);
 else
  FUNC_1(VAR_2, VAR_6, VAR_8);

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 VAR_8 &= ~VAR_0;
 FUNC_3(VAR_2, VAR_8, VAR_1);

 return VAR_7 & 0xffff;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_sf2_priv*,int ) ;
 int FUNC_1 (struct bcm_sf2_priv*,int,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct bcm_sf2_priv *VAR_5)
{
 unsigned int VAR_6 = 1000;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0);
 VAR_7 |= VAR_4 | VAR_1 | VAR_2;
 FUNC_1(VAR_5, VAR_7, VAR_0);

 do {
  VAR_7 = FUNC_0(VAR_5, VAR_0);
  if (!(VAR_7 & VAR_4))
   break;

  FUNC_2(1000, 2000);
 } while (VAR_6-- > 0);

 if (VAR_6 == 0)
  return -VAR_3;

 return 0;
}

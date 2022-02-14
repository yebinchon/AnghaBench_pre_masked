
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct bcm_sf2_priv*,int ) ;
 int FUNC_1 (struct bcm_sf2_priv*,unsigned int,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct bcm_sf2_priv *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = 1000;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_0);
 VAR_8 &= ~(VAR_2 | VAR_4);
 VAR_8 |= VAR_3 | VAR_6;
 FUNC_1(VAR_5, VAR_8, VAR_0);

 do {
  VAR_8 = FUNC_0(VAR_5, VAR_0);
  if (!(VAR_8 & VAR_3))
   break;

  FUNC_2();
 } while (VAR_7--);

 if (!VAR_7)
  return -VAR_1;

 return 0;
}

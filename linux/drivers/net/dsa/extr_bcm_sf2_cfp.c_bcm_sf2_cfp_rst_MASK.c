
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_sf2_priv*,int ) ;
 int FUNC_1 (struct bcm_sf2_priv*,int,int ) ;
 int FUNC_2 () ;

int FUNC_3(struct bcm_sf2_priv *VAR_3)
{
 unsigned int VAR_4 = 1000;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 |= VAR_2;
 FUNC_1(VAR_3, VAR_5, VAR_0);

 do {
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  if (!(VAR_5 & VAR_2))
   break;

  FUNC_2();
 } while (VAR_4--);

 if (!VAR_4)
  return -VAR_1;

 return 0;
}

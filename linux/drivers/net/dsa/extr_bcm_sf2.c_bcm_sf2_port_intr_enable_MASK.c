
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_sf2_priv {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct bcm_sf2_priv*,int ) ;
 int FUNC_3 (struct bcm_sf2_priv*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct bcm_sf2_priv *VAR_2,
         int VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_3) {
 case 7:
  VAR_4 = VAR_1;
  break;
 case 0:

  FUNC_2(VAR_2, FUNC_0(VAR_0));
  return;
 default:
  VAR_4 = FUNC_1(VAR_3);
  break;
 }

 FUNC_3(VAR_2, FUNC_0(VAR_4));
}

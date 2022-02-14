
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct bcm_sf2_priv*,int ) ;
 int FUNC_3 (struct bcm_sf2_priv*,int ,int ) ;
 int FUNC_4 (struct bcm_sf2_priv*,int ) ;
 int FUNC_5 (struct bcm_sf2_priv*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct bcm_sf2_priv *VAR_3,
          int VAR_4)
{
 unsigned int VAR_5;

 switch (VAR_4) {
 case 7:
  VAR_5 = VAR_2;
  break;
 case 0:

  FUNC_2(VAR_3, FUNC_0(VAR_1));
  FUNC_3(VAR_3, FUNC_0(VAR_1), VAR_0);
  return;
 default:
  VAR_5 = FUNC_1(VAR_4);
  break;
 }

 FUNC_4(VAR_3, FUNC_0(VAR_5));
 FUNC_5(VAR_3, FUNC_0(VAR_5), VAR_0);
}

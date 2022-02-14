
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bcm_sf2_priv {unsigned int num_cfp_rules; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (struct bcm_sf2_priv*,int ) ;
 int FUNC_2 (struct bcm_sf2_priv*,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct bcm_sf2_priv *VAR_3,
          unsigned int VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_4 >= VAR_3->num_cfp_rules);

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_5 &= ~(VAR_1 << VAR_2);
 VAR_5 |= VAR_4 << VAR_2;
 FUNC_2(VAR_3, VAR_5, VAR_0);
}

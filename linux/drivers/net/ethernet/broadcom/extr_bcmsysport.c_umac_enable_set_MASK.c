
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_priv {int is_lite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_sysport_priv*,int ) ;
 int FUNC_1 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ) ;
 int FUNC_3 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline void FUNC_5(struct bcm_sysport_priv *VAR_2,
       u32 VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;

 if (!VAR_2->is_lite) {
  VAR_5 = FUNC_2(VAR_2, VAR_1);
  if (VAR_4)
   VAR_5 |= VAR_3;
  else
   VAR_5 &= ~VAR_3;
  FUNC_3(VAR_2, VAR_5, VAR_1);
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_0);
  if (VAR_4)
   VAR_5 |= VAR_3;
  else
   VAR_5 &= ~VAR_3;
  FUNC_1(VAR_2, VAR_5, VAR_0);
 }




 if (VAR_4 == 0)
  FUNC_4(1000, 2000);
}

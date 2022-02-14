
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u32 ;
struct bcm_enet_priv {int enetsw_mdio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bcm_enet_priv *VAR_5,
     int VAR_6, int VAR_7, int VAR_8,
     uint16_t VAR_9)
{
 u32 VAR_10;

 FUNC_1(&VAR_5->enetsw_mdio_lock);
 FUNC_0(VAR_5, 0, VAR_2);

 VAR_10 = VAR_4 |
  (VAR_7 << VAR_1) |
  (VAR_8 << VAR_3);

 if (VAR_6)
  VAR_10 |= VAR_0;

 VAR_10 |= VAR_9;

 FUNC_0(VAR_5, VAR_10, VAR_2);
 FUNC_3(50);
 FUNC_2(&VAR_5->enetsw_mdio_lock);
}

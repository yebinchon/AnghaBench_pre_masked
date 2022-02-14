
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_enet_priv {int enetsw_mdio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm_enet_priv*,int ) ;
 int FUNC_1 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct bcm_enet_priv *VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 FUNC_2(&VAR_6->enetsw_mdio_lock);
 FUNC_1(VAR_6, 0, VAR_3);

 VAR_10 = VAR_2 |
  (VAR_8 << VAR_1) |
  (VAR_9 << VAR_4);

 if (VAR_7)
  VAR_10 |= VAR_0;

 FUNC_1(VAR_6, VAR_10, VAR_3);
 FUNC_4(50);
 VAR_11 = FUNC_0(VAR_6, VAR_5);
 FUNC_3(&VAR_6->enetsw_mdio_lock);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hisi_femac_priv {scalar_t__ port_base; scalar_t__ glb_base; TYPE_2__* ndev; } ;
struct TYPE_4__ {TYPE_1__* phydev; } ;
struct TYPE_3__ {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct hisi_femac_priv*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hisi_femac_priv *VAR_25)
{
 u32 VAR_26;


 VAR_26 = VAR_14;
 if (VAR_25->ndev->phydev->interface == VAR_18)
  VAR_26 |= VAR_13;
 FUNC_2(VAR_26, VAR_25->port_base + VAR_12);


 FUNC_2(VAR_9, VAR_25->glb_base + VAR_4);
 FUNC_0(VAR_25, VAR_9 | VAR_8);

 VAR_26 = FUNC_1(VAR_25->glb_base + VAR_3);
 VAR_26 &= ~(VAR_2 | VAR_1);
 VAR_26 |= VAR_0;
 FUNC_2(VAR_26, VAR_25->glb_base + VAR_3);

 VAR_26 = FUNC_1(VAR_25->glb_base + VAR_5);
 VAR_26 |= (VAR_10 | VAR_11);
 FUNC_2(VAR_26, VAR_25->glb_base + VAR_5);

 VAR_26 = FUNC_1(VAR_25->port_base + VAR_15);
 VAR_26 &= ~VAR_17;
 VAR_26 |= VAR_16;
 FUNC_2(VAR_26, VAR_25->port_base + VAR_15);

 VAR_26 = VAR_22 |
  (VAR_20 << VAR_21);
 FUNC_2(VAR_26, VAR_25->port_base + VAR_23);

 VAR_26 = (VAR_6 << VAR_24) | VAR_7;
 FUNC_2(VAR_26, VAR_25->port_base + VAR_19);
}

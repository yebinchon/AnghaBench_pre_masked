
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_priv {int speed; scalar_t__ duplex; int rx_addr_type; int napi; int mac_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_0 () ;
 int FUNC_1 (struct emac_priv*) ;
 int FUNC_2 (struct emac_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct emac_priv*,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct emac_priv *VAR_48)
{
 u32 VAR_49, VAR_50, VAR_51;


 FUNC_5(VAR_47, 1);
 while (FUNC_3(VAR_47))
  FUNC_0();


 FUNC_1(VAR_48);


 VAR_51 =
  (((VAR_17) ? (VAR_23) : 0x0) |
  ((VAR_48->speed == 1000) ? VAR_20 : 0x0) |
  ((VAR_16) ? (VAR_22) : 0x0) |
  ((VAR_48->duplex == VAR_0) ? 0x1 : 0));
 FUNC_5(VAR_19, VAR_51);

 VAR_50 =
  (((VAR_10) ? (VAR_40) : 0x0) |
  ((VAR_13) ? (VAR_42) : 0x0) |
   ((VAR_9) ? (VAR_39) : 0x0) |
   ((VAR_5) ? (VAR_35) : 0x0) |
   ((VAR_15) ? (VAR_36) : 0x0) |
   ((VAR_4) ? (VAR_33) : 0x0) |
   ((VAR_12) ? (VAR_32) : 0x0) |
   ((VAR_11 & VAR_34) << VAR_41) |

   ((VAR_2) ? (VAR_31) : 0x0) |
   ((VAR_1 & VAR_34) << VAR_30) |

   ((VAR_8) ? (VAR_38) : 0x0) |
   ((VAR_7 & VAR_34) << VAR_37));

 FUNC_5(VAR_29, VAR_50);
 FUNC_5(VAR_28, (VAR_6 &
       VAR_45));
 FUNC_5(VAR_26, (VAR_3 &
      VAR_44));
 FUNC_5(VAR_27, 0);
 FUNC_5(VAR_43, VAR_46);
 VAR_48->rx_addr_type = (FUNC_3(VAR_18) >> 8) & 0xFF;

 FUNC_5(VAR_24, VAR_25);

 FUNC_4(VAR_48, VAR_14, VAR_48->mac_addr);


 VAR_49 = FUNC_3(VAR_19);
 VAR_49 |= (VAR_21);
 FUNC_5(VAR_19, VAR_49);


 FUNC_6(&VAR_48->napi);
 FUNC_2(VAR_48);
 return 0;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ocelot_port {int chip_port; struct ocelot* ocelot; } ;
struct ocelot {int shared_queue_sz; } ;
struct net_device {TYPE_1__* phydev; } ;
struct TYPE_2__ {int speed; int link; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
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
 int FUNC_5 (int) ;




 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_45 ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct net_device*,char*,int) ;
 struct ocelot_port* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ocelot_port*,int,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct ocelot*,int,int ) ;
 int FUNC_17 (struct ocelot*,int ,int ,int ) ;
 int FUNC_18 (struct ocelot*,int,int ,int ) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_20(struct net_device *VAR_46)
{
 struct ocelot_port *VAR_47 = FUNC_13(VAR_46);
 struct ocelot *VAR_48 = VAR_47->ocelot;
 u8 VAR_49 = VAR_47->chip_port;
 int VAR_50, VAR_51, VAR_52 = 0;

 switch (VAR_46->phydev->speed) {
 case 131:
  VAR_50 = VAR_22;
  break;
 case 130:
  VAR_50 = VAR_23;
  break;
 case 129:
  VAR_50 = VAR_24;
  VAR_52 = VAR_14;
  break;
 case 128:
  VAR_50 = VAR_25;
  VAR_52 = VAR_14;
  break;
 default:
  FUNC_12(VAR_46, "Unsupported PHY speed: %d\n",
      VAR_46->phydev->speed);
  return;
 }

 FUNC_19(VAR_46->phydev);

 if (!VAR_46->phydev->link)
  return;


 FUNC_14(VAR_47, VAR_13 |
      VAR_52, VAR_12);





 FUNC_14(VAR_47, FUNC_3(5), VAR_10);


 FUNC_14(VAR_47, FUNC_2(67) |
      VAR_9,
      VAR_8);
 FUNC_11(1);
 FUNC_14(VAR_47, FUNC_2(67),
      VAR_8);


 FUNC_14(VAR_47, VAR_19, VAR_18);


 FUNC_14(VAR_47, VAR_31, VAR_30);
 FUNC_14(VAR_47, VAR_33, VAR_32);


 FUNC_14(VAR_47, VAR_28, VAR_27);


 FUNC_14(VAR_47, 0, VAR_26);


 FUNC_14(VAR_47, 0, VAR_29);


 FUNC_14(VAR_47, VAR_45, VAR_11);
 FUNC_14(VAR_47, FUNC_4(VAR_20) |
      VAR_16 |
      VAR_17,
      VAR_15);


 FUNC_14(VAR_47, VAR_4 |
      VAR_5, VAR_3);



 FUNC_14(VAR_47, FUNC_1(VAR_50),
      VAR_2);


 FUNC_14(VAR_47, 0, VAR_6);
 FUNC_14(VAR_47, 0, VAR_7);


 FUNC_17(VAR_48, FUNC_0(VAR_50),
    VAR_0, VAR_49);





 FUNC_18(VAR_48, VAR_44 |
    FUNC_10(101) |
    FUNC_9(152), VAR_43, VAR_49);


 FUNC_18(VAR_48, VAR_35 |
    FUNC_5(1) |
    VAR_36,
    VAR_34, VAR_49);


 FUNC_18(VAR_48, FUNC_8(0xffff) |
    VAR_40 | VAR_41 |
    VAR_42 |
    FUNC_6(0x7) |
    FUNC_7(VAR_50),
    VAR_39, VAR_49);
 FUNC_18(VAR_48, 0, VAR_1, VAR_49);


 VAR_51 = (VAR_48->shared_queue_sz - 9 * VAR_45) / VAR_21;
 FUNC_18(VAR_48, FUNC_15(9 * VAR_45),
    VAR_37, VAR_49);
 FUNC_16(VAR_48, FUNC_15(VAR_51), VAR_38);
}

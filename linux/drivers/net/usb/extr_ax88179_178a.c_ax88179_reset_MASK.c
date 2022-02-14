
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {int rx_urb_size; int mii; TYPE_1__* net; scalar_t__ data; } ;
struct ethtool_eee {scalar_t__ advertised; } ;
struct ax88179_data {scalar_t__ eee_active; scalar_t__ eee_enabled; } ;
struct TYPE_2__ {int features; int hw_features; int dev_addr; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (struct usbnet*,int ) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*,struct ethtool_eee*) ;
 int FUNC_3 (struct usbnet*,struct ethtool_eee*) ;
 int FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_7 (int*,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct usbnet*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct usbnet *VAR_44)
{
 u8 VAR_45[5];
 u16 *VAR_46;
 u8 *VAR_47;
 struct ax88179_data *VAR_48 = (struct ax88179_data *)VAR_44->data;
 struct ethtool_eee VAR_49;

 VAR_46 = (u16 *)VAR_45;
 VAR_47 = (u8 *)VAR_45;


 *VAR_46 = 0;
 FUNC_6(VAR_44, VAR_1, VAR_18, 2, 2, VAR_46);

 *VAR_46 = VAR_19;
 FUNC_6(VAR_44, VAR_1, VAR_18, 2, 2, VAR_46);
 FUNC_9(200);

 *VAR_47 = VAR_3 | VAR_4;
 FUNC_6(VAR_44, VAR_1, VAR_2, 1, 1, VAR_47);
 FUNC_9(100);


 FUNC_0(VAR_44, 0);

 FUNC_5(VAR_44, VAR_1, VAR_15, VAR_40, VAR_40,
    VAR_44->net->dev_addr);


 FUNC_7(VAR_47, &VAR_0[0], 5);
 FUNC_6(VAR_44, VAR_1, VAR_26, 5, 5, VAR_47);

 VAR_44->rx_urb_size = 1024 * 20;

 *VAR_47 = 0x34;
 FUNC_6(VAR_44, VAR_1, VAR_17, 1, 1, VAR_47);

 *VAR_47 = 0x52;
 FUNC_6(VAR_44, VAR_1, VAR_16,
     1, 1, VAR_47);

 VAR_44->net->features |= VAR_42 | VAR_41 |
         VAR_43;

 VAR_44->net->hw_features |= VAR_42 | VAR_41 |
     VAR_43;


 *VAR_47 = VAR_21 | VAR_22 | VAR_24 |
        VAR_23 | VAR_25;
 FUNC_6(VAR_44, VAR_1, VAR_20, 1, 1, VAR_47);

 *VAR_47 = VAR_35 | VAR_36 | VAR_38 |
        VAR_37 | VAR_39;
 FUNC_6(VAR_44, VAR_1, VAR_34, 1, 1, VAR_47);


 *VAR_46 = VAR_31 | VAR_32 | VAR_33 |
   VAR_30 | VAR_29 | VAR_28;
 FUNC_6(VAR_44, VAR_1, VAR_27, 2, 2, VAR_46);

 *VAR_47 = VAR_13 | VAR_12 |
        VAR_14;
 FUNC_6(VAR_44, VAR_1, VAR_11, 1, 1, VAR_47);


 *VAR_46 = VAR_7 | VAR_10 |
   VAR_8 | VAR_5 |
   VAR_6;
 FUNC_6(VAR_44, VAR_1, VAR_9,
     2, 2, VAR_46);

 FUNC_4(VAR_44);

 VAR_48->eee_enabled = 0;
 VAR_48->eee_active = 0;

 FUNC_1(VAR_44);

 FUNC_2(VAR_44, &VAR_49);
 VAR_49.advertised = 0;
 FUNC_3(VAR_44, &VAR_49);


 FUNC_8(&VAR_44->mii);

 FUNC_10(VAR_44, 0, 0);

 return 0;
}

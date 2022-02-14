
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int can_dma_sg; TYPE_1__* net; int udev; int rx_urb_size; struct aqc111_data* driver_priv; } ;
struct aqc111_data {int advertised_speed; int autoneg; int phy_cfg; } ;
struct TYPE_2__ {int* dev_addr; int vlan_features; int features; int hw_features; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ) ;
 int FUNC_2 (struct usbnet*,int ,int ,int ,int *) ;
 int FUNC_3 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_17)
{
 struct aqc111_data *VAR_18 = VAR_17->driver_priv;
 u8 VAR_19 = 0;

 VAR_17->rx_urb_size = VAR_16;

 if (FUNC_5(VAR_17->udev))
  VAR_17->can_dma_sg = 1;

 VAR_17->net->hw_features |= VAR_4;
 VAR_17->net->features |= VAR_3;
 VAR_17->net->vlan_features |= VAR_5;


 VAR_18->phy_cfg = VAR_2;
 FUNC_2(VAR_17, VAR_1, 0, 0,
      &VAR_18->phy_cfg);


 FUNC_3(VAR_17, VAR_0, VAR_14, VAR_6,
    VAR_6, VAR_17->net->dev_addr);

 VAR_19 = 0xFF;
 FUNC_3(VAR_17, VAR_0, VAR_7, 1, 1, &VAR_19);

 VAR_19 = 0x0;
 FUNC_3(VAR_17, VAR_0, VAR_15, 1, 1, &VAR_19);

 FUNC_0(VAR_17, VAR_0, VAR_8, 1, 1, &VAR_19);
 VAR_19 &= ~(VAR_9 | VAR_10 |
    VAR_11 | VAR_12 |
    VAR_13);
 FUNC_3(VAR_17, VAR_0, VAR_8, 1, 1, &VAR_19);

 FUNC_4(VAR_17->net);


 FUNC_1(VAR_17, VAR_18->autoneg,
        VAR_18->advertised_speed);

 return 0;
}

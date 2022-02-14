
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int duplex; scalar_t__ link; void* speed; } ;
struct ksz_port {int vid_member; TYPE_1__ phydev; } ;
struct ksz_device {int phy_port_cnt; int interface; int port_mask; int on_ports; int host_mask; int live_ports; int dev_mutex; scalar_t__ phy_errata_9477; struct ksz_port* ports; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int FUNC_0 (struct ksz_device*,int,int) ;
 int FUNC_1 (struct ksz_device*,int) ;
 int FUNC_2 (struct ksz_device*,int,int ,int ,int) ;
 int FUNC_3 (struct ksz_device*,int,int*) ;
 int FUNC_4 (struct ksz_device*,int,int*) ;
 int FUNC_5 (struct ksz_device*,int,int ,int,int) ;
 int FUNC_6 (struct ksz_device*,int,int ,int *) ;
 int FUNC_7 (struct ksz_device*,int,int ,int*) ;
 int FUNC_8 (struct ksz_device*,int,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ksz_device *VAR_25, int VAR_26, bool VAR_27)
{
 u8 VAR_28;
 u8 VAR_29;
 u16 VAR_30;
 struct ksz_port *VAR_31 = &VAR_25->ports[VAR_26];


 if (VAR_27)
  FUNC_5(VAR_25, VAR_26, VAR_17, VAR_13,
        1);

 FUNC_5(VAR_25, VAR_26, VAR_17, VAR_10, 0);


 FUNC_5(VAR_25, VAR_26, VAR_18, VAR_5, 1);


 FUNC_5(VAR_25, VAR_26, VAR_15, VAR_6, 1);


 FUNC_5(VAR_25, VAR_26, VAR_16, VAR_7, 0);


 FUNC_5(VAR_25, VAR_26, VAR_19, VAR_14,
       0);
 FUNC_2(VAR_25, VAR_26, VAR_20,
      VAR_0, 0);


 FUNC_5(VAR_25, VAR_26, VAR_16, VAR_4, 1);

 if (VAR_26 < VAR_25->phy_port_cnt) {

  FUNC_5(VAR_25, VAR_26, VAR_17,
        VAR_9 | VAR_8,
        0);

  if (VAR_25->phy_errata_9477)
   FUNC_1(VAR_25, VAR_26);
 } else {

  FUNC_5(VAR_25, VAR_26, VAR_17,
        VAR_9 | VAR_8,
        1);


  FUNC_7(VAR_25, VAR_26, VAR_22, &VAR_28);
  switch (VAR_25->interface) {
  case 129:
   FUNC_4(VAR_25, 0, &VAR_28);
   FUNC_3(VAR_25, 0, &VAR_28);
   VAR_31->phydev.speed = VAR_23;
   break;
  case 128:
   FUNC_4(VAR_25, 1, &VAR_28);
   FUNC_3(VAR_25, 0, &VAR_28);
   VAR_31->phydev.speed = VAR_23;
   break;
  case 130:
   FUNC_4(VAR_25, 2, &VAR_28);
   FUNC_3(VAR_25, 1, &VAR_28);
   VAR_31->phydev.speed = VAR_24;
   break;
  default:
   FUNC_4(VAR_25, 3, &VAR_28);
   FUNC_3(VAR_25, 1, &VAR_28);
   VAR_28 &= ~VAR_12;
   VAR_28 &= ~VAR_11;
   if (VAR_25->interface == VAR_1 ||
       VAR_25->interface == VAR_2)
    VAR_28 |= VAR_12;
   if (VAR_25->interface == VAR_1 ||
       VAR_25->interface == VAR_3)
    VAR_28 |= VAR_11;
   VAR_31->phydev.speed = VAR_24;
   break;
  }
  FUNC_8(VAR_25, VAR_26, VAR_22, VAR_28);
  VAR_31->phydev.duplex = 1;
 }
 FUNC_9(&VAR_25->dev_mutex);
 if (VAR_27) {
  VAR_29 = VAR_25->port_mask;
  VAR_25->on_ports = VAR_25->host_mask;
  VAR_25->live_ports = VAR_25->host_mask;
 } else {
  VAR_29 = VAR_25->host_mask | VAR_31->vid_member;
  VAR_25->on_ports |= (1 << VAR_26);


  if (VAR_31->phydev.link)
   VAR_25->live_ports |= (1 << VAR_26);
 }
 FUNC_10(&VAR_25->dev_mutex);
 FUNC_0(VAR_25, VAR_26, VAR_29);


 if (VAR_26 < VAR_25->phy_port_cnt)
  FUNC_6(VAR_25, VAR_26, VAR_21, &VAR_30);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int duplex; scalar_t__ link; void* speed; } ;
struct ksz_port {int vid_member; TYPE_1__ phydev; } ;
struct ksz_device {int interface; int port_mask; int on_ports; int host_mask; int live_ports; struct ksz_port* ports; } ;


 int FUNC_0 (int) ;


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
 void* VAR_18 ;
 void* VAR_19 ;
 int FUNC_1 (struct ksz_device*,int,int) ;
 int FUNC_2 (struct ksz_device*,int,int) ;
 int FUNC_3 (struct ksz_device*,int,int ,int ,int) ;
 int FUNC_4 (struct ksz_device*,int ,int*) ;
 int FUNC_5 (struct ksz_device*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ksz_device *VAR_20, int VAR_21, bool VAR_22)
{
 struct ksz_port *VAR_23 = &VAR_20->ports[VAR_21];
 u8 VAR_24, VAR_25;


 FUNC_3(VAR_20, VAR_21, VAR_15, VAR_5, 1);

 FUNC_2(VAR_20, VAR_21, 4);


 FUNC_3(VAR_20, VAR_21, VAR_16, VAR_6, 0);


 FUNC_3(VAR_20, VAR_21, VAR_14, VAR_4, 0);


 FUNC_3(VAR_20, VAR_21, VAR_16, VAR_3, 1);

 if (VAR_22) {

  FUNC_4(VAR_20, VAR_17, &VAR_24);
  VAR_24 &= ~VAR_11;
  VAR_24 &= ~VAR_7;
  switch (VAR_20->interface) {
  case 129:
   VAR_23->phydev.speed = VAR_18;
   break;
  case 128:
   VAR_24 |= VAR_10;
   VAR_23->phydev.speed = VAR_18;
   break;
  case 130:
   VAR_24 |= VAR_7;
   VAR_24 |= VAR_8;
   VAR_23->phydev.speed = VAR_19;
   break;
  default:
   VAR_24 &= ~VAR_12;
   VAR_24 &= ~VAR_13;
   if (VAR_20->interface == VAR_0 ||
       VAR_20->interface == VAR_1)
    VAR_24 |= VAR_12;
   if (VAR_20->interface == VAR_0 ||
       VAR_20->interface == VAR_2)
    VAR_24 |= VAR_13;
   VAR_24 |= VAR_7;
   VAR_24 |= VAR_9;
   VAR_23->phydev.speed = VAR_19;
   break;
  }
  FUNC_5(VAR_20, VAR_17, VAR_24);
  VAR_23->phydev.duplex = 1;

  VAR_25 = VAR_20->port_mask;
  VAR_20->on_ports = VAR_20->host_mask;
  VAR_20->live_ports = VAR_20->host_mask;
 } else {
  VAR_25 = VAR_20->host_mask | VAR_23->vid_member;
  VAR_20->on_ports |= FUNC_0(VAR_21);


  if (VAR_23->phydev.link)
   VAR_20->live_ports |= FUNC_0(VAR_21);
 }
 FUNC_1(VAR_20, VAR_21, VAR_25);
}

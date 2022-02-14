
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int speed; } ;
struct ksz_port {TYPE_1__ phydev; } ;
struct ksz_device {int phy_port_cnt; struct ksz_port* ports; } ;
struct dsa_switch {struct ksz_device* priv; } ;
 int VAR_0 ;
 int FUNC_0 (struct ksz_device*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_1, int VAR_2, int VAR_3)
{
 struct ksz_device *VAR_4 = VAR_1->priv;
 u16 VAR_5 = 0xffff;







 if (VAR_2 >= VAR_4->phy_port_cnt) {
  struct ksz_port *VAR_6 = &VAR_4->ports[VAR_2];

  switch (VAR_3) {
  case 134:
   VAR_5 = 0x1140;
   break;
  case 133:
   VAR_5 = 0x796d;
   break;
  case 130:
   VAR_5 = 0x0022;
   break;
  case 129:
   VAR_5 = 0x1631;
   break;
  case 135:
   VAR_5 = 0x05e1;
   break;
  case 131:
   VAR_5 = 0xc5e1;
   break;
  case 132:
   VAR_5 = 0x0700;
   break;
  case 128:
   if (VAR_6->phydev.speed == VAR_0)
    VAR_5 = 0x3800;
   else
    VAR_5 = 0;
   break;
  }
 } else {
  FUNC_0(VAR_4, VAR_2, 0x100 + (VAR_3 << 1), &VAR_5);
 }

 return VAR_5;
}

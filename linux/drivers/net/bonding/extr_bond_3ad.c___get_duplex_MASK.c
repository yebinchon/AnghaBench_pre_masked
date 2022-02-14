
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slave {scalar_t__ link; int duplex; int dev; TYPE_1__* bond; } ;
struct port {int actor_port_number; struct slave* slave; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int ,int ,char*,int ) ;

__attribute__((used)) static u8 FUNC_1(struct port *VAR_1)
{
 struct slave *VAR_2 = VAR_1->slave;
 u8 VAR_3 = 0x0;




 if (VAR_2->link == VAR_0) {
  switch (VAR_2->duplex) {
  case 129:
   VAR_3 = 0x1;
   FUNC_0(VAR_2->bond->dev, VAR_2->dev, "Port %d Received status full duplex update from adapter\n",
      VAR_1->actor_port_number);
   break;
  case 128:
  default:
   VAR_3 = 0x0;
   FUNC_0(VAR_2->bond->dev, VAR_2->dev, "Port %d Received status NOT full duplex update from adapter\n",
      VAR_1->actor_port_number);
   break;
  }
 }
 return VAR_3;
}

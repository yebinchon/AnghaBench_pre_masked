
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct slave {scalar_t__ link; int speed; TYPE_3__* dev; TYPE_1__* bond; } ;
struct port {int actor_port_number; struct slave* slave; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {TYPE_2__* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,char*,int ,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(struct port *VAR_15)
{
 struct slave *VAR_16 = VAR_15->slave;
 u16 VAR_17;






 if (VAR_16->link != VAR_13)
  VAR_17 = 0;
 else {
  switch (VAR_16->speed) {
  case 140:
   VAR_17 = VAR_4;
   break;

  case 139:
   VAR_17 = VAR_3;
   break;

  case 138:
   VAR_17 = VAR_2;
   break;

  case 133:
   VAR_17 = VAR_8;
   break;

  case 130:
   VAR_17 = VAR_11;
   break;

  case 137:
   VAR_17 = VAR_1;
   break;

  case 135:
   VAR_17 = VAR_5;
   break;

  case 134:
   VAR_17 = VAR_6;
   break;

  case 132:
   VAR_17 = VAR_7;
   break;

  case 131:
   VAR_17 = VAR_9;
   break;

  case 129:
   VAR_17 = VAR_10;
   break;

  case 128:
   VAR_17 = VAR_12;
   break;

  case 136:
   VAR_17 = VAR_0;
   break;

  default:

   if (VAR_16->speed != VAR_14)
    FUNC_0("%s: (slave %s): unknown ethtool speed (%d) for port %d (set it to 0)\n",
          VAR_16->bond->dev->name,
          VAR_16->dev->name, VAR_16->speed,
          VAR_15->actor_port_number);
   VAR_17 = 0;
   break;
  }
 }

 FUNC_1(VAR_16->bond->dev, VAR_16->dev, "Port %d Received link speed %d update from adapter\n",
    VAR_15->actor_port_number, VAR_17);
 return VAR_17;
}

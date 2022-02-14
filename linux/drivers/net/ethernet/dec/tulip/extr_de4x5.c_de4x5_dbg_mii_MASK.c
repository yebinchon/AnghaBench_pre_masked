
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {TYPE_1__* phy; } ;
struct TYPE_2__ {scalar_t__ id; int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_8, int VAR_9)
{
    struct de4x5_private *VAR_10 = FUNC_1(VAR_8);
    u_long VAR_11 = VAR_8->base_addr;

    if (VAR_7 & VAR_2) {
 FUNC_2("\nMII device address: %d\n", VAR_10->phy[VAR_9].addr);
 FUNC_2("MII CR:  %x\n",FUNC_0(VAR_3,VAR_10->phy[VAR_9].addr,VAR_1));
 FUNC_2("MII SR:  %x\n",FUNC_0(VAR_6,VAR_10->phy[VAR_9].addr,VAR_1));
 FUNC_2("MII ID0: %x\n",FUNC_0(VAR_4,VAR_10->phy[VAR_9].addr,VAR_1));
 FUNC_2("MII ID1: %x\n",FUNC_0(VAR_5,VAR_10->phy[VAR_9].addr,VAR_1));
 if (VAR_10->phy[VAR_9].id != VAR_0) {
     FUNC_2("MII ANA: %x\n",FUNC_0(0x04,VAR_10->phy[VAR_9].addr,VAR_1));
     FUNC_2("MII ANC: %x\n",FUNC_0(0x05,VAR_10->phy[VAR_9].addr,VAR_1));
 }
 FUNC_2("MII 16:  %x\n",FUNC_0(0x10,VAR_10->phy[VAR_9].addr,VAR_1));
 if (VAR_10->phy[VAR_9].id != VAR_0) {
     FUNC_2("MII 17:  %x\n",FUNC_0(0x11,VAR_10->phy[VAR_9].addr,VAR_1));
     FUNC_2("MII 18:  %x\n",FUNC_0(0x12,VAR_10->phy[VAR_9].addr,VAR_1));
 } else {
     FUNC_2("MII 20:  %x\n",FUNC_0(0x14,VAR_10->phy[VAR_9].addr,VAR_1));
 }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int if_port; } ;
struct local_info {int new_mii; scalar_t__ probe_port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (unsigned int,int ,int ,unsigned int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct local_info* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_3)
{
    struct local_info *VAR_4 = FUNC_7(VAR_3);
    unsigned int VAR_5 = VAR_3->base_addr;
    unsigned VAR_6, VAR_7, VAR_8;
    int VAR_9;

    if (VAR_2 == 4 || VAR_2 == 1) {
 VAR_3->if_port = VAR_2;
 VAR_4->probe_port = 0;
 return 1;
    }

    VAR_7 = FUNC_2(VAR_5, 0, 1);
    if ((VAR_7 & 0xff00) != 0x7800)
 return 0;

    VAR_4->new_mii = (FUNC_2(VAR_5, 0, 2) != 0xffff);

    if (VAR_4->probe_port)
 VAR_6 = 0x1000;
    else if (VAR_3->if_port == 4)
 VAR_6 = 0x2000;
    else
 VAR_6 = 0x0000;
    FUNC_3(VAR_5, 0, 0, VAR_6, 16);
    FUNC_8(100);
    VAR_6 = FUNC_2(VAR_5, 0, 0);

    if (VAR_6 & 0x0400) {
 FUNC_6(VAR_3, "can't take PHY out of isolation mode\n");
 VAR_4->probe_port = 0;
 return 0;
    }

    if (VAR_4->probe_port) {




 for (VAR_9=0; VAR_9 < 35; VAR_9++) {
     FUNC_4(100);
     VAR_7 = FUNC_2(VAR_5, 0, 1);
     if ((VAR_7 & 0x0020) && (VAR_7 & 0x0004))
  break;
 }

 if (!(VAR_7 & 0x0020)) {
     FUNC_5(VAR_3, "autonegotiation failed; using 10mbs\n");
     if (!VAR_4->new_mii) {
  VAR_6 = 0x0000;
  FUNC_3(VAR_5, 0, 0, VAR_6, 16);
  FUNC_8(100);
  FUNC_1(0);
  VAR_3->if_port = (FUNC_0(VAR_1) & VAR_0) ? 1 : 2;
     }
 } else {
     VAR_8 = FUNC_2(VAR_5, 0, 5);
     FUNC_5(VAR_3, "MII link partner: %04x\n", VAR_8);
     if (VAR_8 & 0x0080) {
  VAR_3->if_port = 4;
     } else
  VAR_3->if_port = 1;
 }
    }

    return 1;
}

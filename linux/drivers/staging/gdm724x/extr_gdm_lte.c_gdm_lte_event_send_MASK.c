
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_dev {int priv_dev; int (* get_endian ) (int ) ;} ;
struct nic {struct phy_dev* phy_dev; } ;
struct net_device {int name; } ;
struct hci_packet {int len; } ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int,int ,char*,int) ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, char *VAR_4, int VAR_5)
{
 struct phy_dev *VAR_6 = ((struct nic *)FUNC_1(VAR_3))->phy_dev;
 struct hci_packet *VAR_7 = (struct hci_packet *)VAR_4;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_3->name, "lte%d", &VAR_9);
 if (VAR_10 != 1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6->get_endian(VAR_6->priv_dev),
      VAR_7->len) + VAR_1;
 return FUNC_2(VAR_2.sock, VAR_9, 0, VAR_4, VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct octeon_device {int boardinfo; TYPE_1__* pci_dev; } ;
struct octeon_board_info {char* name; char* serial_number; int minor; int major; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ethtool_eeprom {int magic; scalar_t__ offset; } ;
struct TYPE_2__ {int vendor; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,char*,char*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct ethtool_eeprom *VAR_2,
        u8 *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_1);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 struct octeon_board_info *VAR_6;

 if (VAR_2->offset)
  return -VAR_0;

 VAR_2->magic = VAR_5->pci_dev->vendor;
 VAR_6 = (struct octeon_board_info *)(&VAR_5->boardinfo);
 FUNC_1((char *)VAR_3,
  "boardname:%s serialnum:%s maj:%lld min:%lld\n",
  VAR_6->name, VAR_6->serial_number,
  VAR_6->major, VAR_6->minor);

 return 0;
}

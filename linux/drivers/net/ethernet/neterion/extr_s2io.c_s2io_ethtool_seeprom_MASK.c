
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct s2io_nic {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; int magic; scalar_t__ offset; } ;
struct TYPE_2__ {int vendor; int device; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct s2io_nic* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct s2io_nic*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    struct ethtool_eeprom *VAR_3,
    u8 *VAR_4)
{
 int VAR_5 = VAR_3->len, VAR_6 = 0;
 u64 VAR_7 = 0, VAR_8;
 struct s2io_nic *VAR_9 = FUNC_1(VAR_2);

 if (VAR_3->magic != (VAR_9->pdev->vendor | (VAR_9->pdev->device << 16))) {
  FUNC_0(VAR_1,
     "ETHTOOL_WRITE_EEPROM Err: "
     "Magic value is wrong, it is 0x%x should be 0x%x\n",
     (VAR_9->pdev->vendor | (VAR_9->pdev->device << 16)),
     VAR_3->magic);
  return -VAR_0;
 }

 while (VAR_5) {
  VAR_8 = (u32)VAR_4[VAR_6] & 0x000000FF;
  if (VAR_8)
   VAR_7 = (u32)(VAR_8 << 24);
  else
   VAR_7 = VAR_8;

  if (FUNC_2(VAR_9, (VAR_3->offset + VAR_6), VAR_7, 0)) {
   FUNC_0(VAR_1,
      "ETHTOOL_WRITE_EEPROM Err: "
      "Cannot write into the specified offset\n");
   return -VAR_0;
  }
  VAR_6++;
  VAR_5--;
 }

 return 0;
}

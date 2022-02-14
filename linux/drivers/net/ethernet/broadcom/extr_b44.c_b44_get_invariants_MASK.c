
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int revision; } ;
struct ssb_device {TYPE_4__ id; TYPE_2__* bus; } ;
struct b44 {int phy_addr; int flags; struct ssb_device* sdev; int imask; TYPE_3__* dev; int dma_offset; } ;
struct TYPE_7__ {int * dev_addr; } ;
struct TYPE_5__ {int et1phyaddr; int et0phyaddr; int * et0mac; int * et1mac; } ;
struct TYPE_6__ {scalar_t__ bustype; TYPE_1__ sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ssb_device*) ;

__attribute__((used)) static int FUNC_4(struct b44 *VAR_6)
{
 struct ssb_device *VAR_7 = VAR_6->sdev;
 int VAR_8 = 0;
 u8 *VAR_9;

 VAR_6->dma_offset = FUNC_3(VAR_7);

 if (VAR_7->bus->bustype == VAR_4 &&
     VAR_5 > 1) {
  VAR_9 = VAR_7->bus->sprom.et1mac;
  VAR_6->phy_addr = VAR_7->bus->sprom.et1phyaddr;
 } else {
  VAR_9 = VAR_7->bus->sprom.et0mac;
  VAR_6->phy_addr = VAR_7->bus->sprom.et0phyaddr;
 }



 VAR_6->phy_addr &= 0x1F;

 FUNC_1(VAR_6->dev->dev_addr, VAR_9, VAR_2);

 if (!FUNC_0(&VAR_6->dev->dev_addr[0])){
  FUNC_2("Invalid MAC address found in EEPROM\n");
  return -VAR_1;
 }

 VAR_6->imask = VAR_3;





 if (VAR_6->sdev->id.revision >= 7)
  VAR_6->flags |= VAR_0;

 return VAR_8;
}

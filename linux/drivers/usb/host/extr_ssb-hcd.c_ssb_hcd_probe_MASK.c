
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ssb_hcd_device {void* ohci_dev; void* ehci_dev; int enable_flags; } ;
struct ssb_device_id {int dummy; } ;
struct TYPE_3__ {int coreid; } ;
struct ssb_device {int dev; int dma_dev; TYPE_2__* bus; TYPE_1__ id; } ;
struct TYPE_4__ {int chip_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ssb_hcd_device* FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (struct ssb_device*,int,int,int) ;
 int FUNC_9 (struct ssb_device*) ;
 int FUNC_10 (struct ssb_device*,int ) ;
 int FUNC_11 (struct ssb_device*,struct ssb_hcd_device*) ;

__attribute__((used)) static int FUNC_12(struct ssb_device *VAR_6,
       const struct ssb_device_id *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 u16 VAR_12;
 u16 VAR_13 = VAR_6->id.coreid;
 struct ssb_hcd_device *VAR_14;


 VAR_12 = (VAR_6->bus->chip_id & 0xFF00);
 if (VAR_12 != 0x4700 && VAR_12 != 0x5300)
  return -VAR_0;



 if (FUNC_4(VAR_6->dma_dev, FUNC_0(32)))
  return -VAR_2;

 VAR_14 = FUNC_3(VAR_6->dev, sizeof(struct ssb_hcd_device),
          VAR_3);
 if (!VAR_14)
  return -VAR_1;





 VAR_14->enable_flags = FUNC_9(VAR_6);

 VAR_9 = FUNC_10(VAR_6, VAR_4);

 VAR_10 = FUNC_6(VAR_9);
 VAR_11 = (VAR_13 == VAR_5) ? 0x800 : FUNC_7(VAR_9);
 VAR_14->ohci_dev = FUNC_8(VAR_6, 1, VAR_10, VAR_11);
 if (FUNC_1(VAR_14->ohci_dev))
  return FUNC_2(VAR_14->ohci_dev);

 if (VAR_13 == VAR_5) {
  VAR_10 = FUNC_6(VAR_9) + 0x800;
  VAR_14->ehci_dev = FUNC_8(VAR_6, 0, VAR_10, VAR_11);
  if (FUNC_1(VAR_14->ehci_dev)) {
   VAR_8 = FUNC_2(VAR_14->ehci_dev);
   goto err_unregister_ohci_dev;
  }
 }

 FUNC_11(VAR_6, VAR_14);
 return 0;

err_unregister_ohci_dev:
 FUNC_5(VAR_14->ohci_dev);
 return VAR_8;
}

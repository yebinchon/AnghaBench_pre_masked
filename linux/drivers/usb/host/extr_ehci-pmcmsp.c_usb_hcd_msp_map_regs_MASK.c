
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mspusb_device {int * mab_regs; int * usbid_regs; struct platform_device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int FUNC_7(struct mspusb_device *VAR_3)
{
 struct resource *VAR_4;
 struct platform_device *VAR_5 = &VAR_3->dev;
 u32 VAR_6;
 int VAR_7;


 VAR_4 = FUNC_3(VAR_5, VAR_2, 1);
 if (VAR_4 == ((void*)0))
  return -VAR_1;
 VAR_6 = FUNC_6(VAR_4);
 if (!FUNC_5(VAR_4->start, VAR_6, "mab regs"))
  return -VAR_0;

 VAR_3->mab_regs = FUNC_1(VAR_4->start, VAR_6);
 if (VAR_3->mab_regs == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto err1;
 }


 VAR_4 = FUNC_3(VAR_5, VAR_2, 2);
 if (VAR_4 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto err2;
 }
 VAR_6 = FUNC_6(VAR_4);
 if (!FUNC_5(VAR_4->start, VAR_6, "usbid regs")) {
  VAR_7 = -VAR_0;
  goto err2;
 }
 VAR_3->usbid_regs = FUNC_1(VAR_4->start, VAR_6);
 if (VAR_3->usbid_regs == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto err3;
 }

 return 0;
err3:
 VAR_4 = FUNC_3(VAR_5, VAR_2, 2);
 VAR_6 = FUNC_6(VAR_4);
 FUNC_4(VAR_4->start, VAR_6);
err2:
 FUNC_2(VAR_3->mab_regs);
err1:
 VAR_4 = FUNC_3(VAR_5, VAR_2, 1);
 VAR_6 = FUNC_6(VAR_4);
 FUNC_4(VAR_4->start, VAR_6);
 FUNC_0(&VAR_5->dev, "Failed to map non-EHCI regs.\n");
 return VAR_7;
}

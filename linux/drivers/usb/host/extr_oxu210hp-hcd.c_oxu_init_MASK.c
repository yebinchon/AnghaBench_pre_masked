
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dev; } ;
struct oxu_info {struct usb_hcd** hcd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_hcd*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct platform_device*,void*) ;
 struct usb_hcd* FUNC_4 (struct platform_device*,unsigned long,unsigned long,void*,int,int) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (struct platform_device*,void*) ;
 int FUNC_7 (void*,int ,int) ;
 struct oxu_info* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct usb_hcd*) ;
 int FUNC_10 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4,
    void *VAR_5, int VAR_6)
{
 struct oxu_info *VAR_7 = FUNC_8(VAR_2);
 struct usb_hcd *VAR_8;
 int VAR_9;


 FUNC_3(VAR_2, VAR_5);

 VAR_9 = FUNC_6(VAR_2, VAR_5);
 if (VAR_9) {
  FUNC_2(&VAR_2->dev, "no devices found!\n");
  return -VAR_0;
 }


 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 1);
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_2->dev, "cannot create OTG controller!\n");
  VAR_9 = FUNC_1(VAR_8);
  goto error_create_otg;
 }
 VAR_7->hcd[0] = VAR_8;


 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 0);
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_2->dev, "cannot create SPH controller!\n");
  VAR_9 = FUNC_1(VAR_8);
  goto error_create_sph;
 }
 VAR_7->hcd[1] = VAR_8;

 FUNC_7(VAR_5, VAR_1,
  FUNC_5(VAR_5, VAR_1) | 3);

 return 0;

error_create_sph:
 FUNC_10(VAR_7->hcd[0]);
 FUNC_9(VAR_7->hcd[0]);

error_create_otg:
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct swoc_info {void* LinuxVer; void* LinuxSKU; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_4,
    struct swoc_info *VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_4->dev, "SWIMS: Attempting to get TRU-Install info\n");

 VAR_6 = FUNC_2(VAR_4, FUNC_3(VAR_4, 0),
   VAR_0,
   VAR_3 | VAR_2,
   0,
   0,
   (void *) VAR_5,
   sizeof(struct swoc_info),
   VAR_1);

 VAR_5->LinuxSKU = FUNC_1(VAR_5->LinuxSKU);
 VAR_5->LinuxVer = FUNC_1(VAR_5->LinuxVer);
 return VAR_6;
}

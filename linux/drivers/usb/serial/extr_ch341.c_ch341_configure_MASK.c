
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct ch341_private {int mcr; int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int ,int ,char*,unsigned int const) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;
 int FUNC_2 (struct usb_device*,struct ch341_private*,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (int *,char*,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (unsigned int const,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_4, struct ch341_private *VAR_5)
{
 const unsigned int VAR_6 = 2;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_6, VAR_3);
 if (!VAR_7)
  return -VAR_2;


 VAR_8 = FUNC_0(VAR_4, VAR_0, 0, 0, VAR_7, VAR_6);
 if (VAR_8 < 0)
  goto out;
 FUNC_4(&VAR_4->dev, "Chip version: 0x%02x\n", VAR_7[0]);

 VAR_8 = FUNC_1(VAR_4, VAR_1, 0, 0);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_5->lcr);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_3(VAR_4, VAR_5->mcr);

out: FUNC_5(VAR_7);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct ch341_private {char msr; int lock; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int,int ,char*,unsigned int const) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int const,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_4, struct ch341_private *VAR_5)
{
 const unsigned int VAR_6 = 2;
 char *VAR_7;
 int VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_4, VAR_1, 0x0706, 0, VAR_7, VAR_6);
 if (VAR_8 < 0)
  goto out;

 FUNC_3(&VAR_5->lock, VAR_9);
 VAR_5->msr = (~(*VAR_7)) & VAR_0;
 FUNC_4(&VAR_5->lock, VAR_9);

out: FUNC_1(VAR_7);
 return VAR_8;
}

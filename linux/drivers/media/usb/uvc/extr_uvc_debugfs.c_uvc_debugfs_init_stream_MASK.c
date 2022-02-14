
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_streaming {int intfnum; struct dentry* debugfs_dir; TYPE_2__* dev; } ;
struct usb_device {int devnum; TYPE_1__* bus; } ;
struct dentry {int dummy; } ;
typedef int dir_name ;
struct TYPE_4__ {struct usb_device* udev; } ;
struct TYPE_3__ {int busnum; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (char*,int *) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct uvc_streaming*,int *) ;
 int FUNC_3 (char*,int,char*,int,int,int) ;
 int FUNC_4 (struct uvc_streaming*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(struct uvc_streaming *VAR_3)
{
 struct usb_device *VAR_4 = VAR_3->dev->udev;
 struct dentry *VAR_5;
 char VAR_6[33];

 if (VAR_1 == ((void*)0))
  return;

 FUNC_3(VAR_6, sizeof(VAR_6), "%u-%u-%u", VAR_4->bus->busnum,
   VAR_4->devnum, VAR_3->intfnum);

 VAR_5 = FUNC_1(VAR_6, VAR_1);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_0, "Unable to create debugfs %s "
      "directory.\n", VAR_6);
  return;
 }

 VAR_3->debugfs_dir = VAR_5;

 VAR_5 = FUNC_2("stats", 0444, VAR_3->debugfs_dir,
       VAR_3, &VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_0, "Unable to create debugfs stats file.\n");
  FUNC_4(VAR_3);
  return;
 }
}

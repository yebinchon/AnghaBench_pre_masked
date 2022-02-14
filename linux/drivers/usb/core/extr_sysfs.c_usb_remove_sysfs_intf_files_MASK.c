
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {scalar_t__ sysfs_files_created; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct usb_interface *VAR_1)
{
 if (!VAR_1->sysfs_files_created)
  return;

 FUNC_0(&VAR_1->dev, &VAR_0);
 VAR_1->sysfs_files_created = 0;
}

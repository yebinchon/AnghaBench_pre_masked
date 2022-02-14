
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int cmd_mutex; int errors; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vub300_mmc_host* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_1)
{
 struct vub300_mmc_host *VAR_2 = FUNC_1(VAR_1);

 VAR_2->errors = -VAR_0;
 FUNC_0(&VAR_2->cmd_mutex);
 return 0;
}

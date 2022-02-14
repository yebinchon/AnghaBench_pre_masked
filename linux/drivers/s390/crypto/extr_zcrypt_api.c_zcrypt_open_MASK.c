
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ap_perms {int dummy; } ;
struct zcdn_device {struct ap_perms perms; } ;
struct inode {int dummy; } ;
struct file {void* private_data; TYPE_1__* f_inode; } ;
struct TYPE_2__ {int i_rdev; int * i_cdev; } ;


 int VAR_0 ;
 struct ap_perms VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct zcdn_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 struct ap_perms *VAR_7 = &VAR_1;
 VAR_6->private_data = (void *) VAR_7;

 FUNC_0(&VAR_4);
 return FUNC_4(VAR_5, VAR_6);
}

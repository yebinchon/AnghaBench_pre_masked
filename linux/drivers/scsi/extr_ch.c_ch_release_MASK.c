
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_2__ {int ref; int device; } ;
typedef TYPE_1__ scsi_changer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 scsi_changer *VAR_3 = VAR_2->private_data;

 FUNC_1(VAR_3->device);
 VAR_2->private_data = ((void*)0);
 FUNC_0(&VAR_3->ref, VAR_0);
 return 0;
}

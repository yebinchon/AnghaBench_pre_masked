
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_3__ {int ref; int device; } ;
typedef TYPE_1__ scsi_changer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 scsi_changer *VAR_6;
 int VAR_7 = FUNC_1(VAR_4);

 FUNC_3(&VAR_3);
 FUNC_6(&VAR_2);
 VAR_6 = FUNC_0(&VAR_1, VAR_7);

 if (((void*)0) == VAR_6 || FUNC_5(VAR_6->device)) {
  FUNC_7(&VAR_2);
  FUNC_4(&VAR_3);
  return -VAR_0;
 }
 FUNC_2(&VAR_6->ref);
 FUNC_7(&VAR_2);

 VAR_5->private_data = VAR_6;
 FUNC_4(&VAR_3);
 return 0;
}

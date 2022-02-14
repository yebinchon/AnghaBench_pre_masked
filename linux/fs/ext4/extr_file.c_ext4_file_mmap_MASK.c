
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; int vm_flags; } ;
struct inode {int i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct ext4_sb_info {struct dax_device* s_daxdev; } ;
struct dax_device {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct vm_area_struct*,struct dax_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ext4_sb_info*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 struct inode *VAR_7 = VAR_5->f_mapping->host;
 struct ext4_sb_info *VAR_8 = FUNC_0(VAR_7->i_sb);
 struct dax_device *VAR_9 = VAR_8->s_daxdev;

 if (FUNC_6(FUNC_3(VAR_8)))
  return -VAR_0;





 if (!FUNC_2(VAR_6, VAR_9))
  return -VAR_1;

 FUNC_4(VAR_5);
 if (FUNC_1(FUNC_5(VAR_5))) {
  VAR_6->vm_ops = &VAR_3;
  VAR_6->vm_flags |= VAR_2;
 } else {
  VAR_6->vm_ops = &VAR_4;
 }
 return 0;
}

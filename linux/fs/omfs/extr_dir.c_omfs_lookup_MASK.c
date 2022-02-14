
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_self; } ;
struct omfs_inode {TYPE_1__ i_head; } ;
struct inode {int i_sb; } ;
struct TYPE_4__ {scalar_t__ len; int name; } ;
struct dentry {scalar_t__ b_data; TYPE_2__ d_name; } ;
struct buffer_head {scalar_t__ b_data; TYPE_2__ d_name; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_6 (struct inode*,int ,scalar_t__) ;
 struct inode* FUNC_7 (int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_3, struct dentry *VAR_4,
      unsigned int VAR_5)
{
 struct buffer_head *VAR_6;
 struct inode *VAR_7 = ((void*)0);

 if (VAR_4->d_name.len > VAR_2)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_6(VAR_3, VAR_4->d_name.name, VAR_4->d_name.len);
 if (!FUNC_2(VAR_6)) {
  struct omfs_inode *VAR_8 = (struct omfs_inode *)VAR_6->b_data;
  ino_t VAR_9 = FUNC_3(VAR_8->i_head.h_self);
  FUNC_4(VAR_6);
  VAR_7 = FUNC_7(VAR_3->i_sb, VAR_9);
 } else if (VAR_6 != FUNC_1(-VAR_1)) {
  VAR_7 = FUNC_0(VAR_6);
 }
 return FUNC_5(VAR_7, VAR_4);
}

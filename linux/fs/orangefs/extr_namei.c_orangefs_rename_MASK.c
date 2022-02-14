
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int d_new_name; int d_old_name; int new_parent_refn; int old_parent_refn; } ;
struct TYPE_7__ {TYPE_1__ rename; } ;
struct TYPE_8__ {TYPE_2__ req; } ;
struct orangefs_kernel_op_s {TYPE_3__ upcall; } ;
struct inode {void* i_ctime; } ;
struct iattr {int ia_valid; void* ia_ctime; void* ia_mtime; } ;
struct TYPE_9__ {int name; } ;
struct dentry {struct inode* d_inode; TYPE_4__ d_name; } ;
struct TYPE_10__ {int refn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 void* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct iattr*,int ,int) ;
 struct orangefs_kernel_op_s* FUNC_7 (int ) ;
 int FUNC_8 (struct orangefs_kernel_op_s*) ;
 int FUNC_9 (struct orangefs_kernel_op_s*,char*,int ) ;
 int FUNC_10 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_6,
   struct dentry *VAR_7,
   struct inode *VAR_8,
   struct dentry *VAR_9,
   unsigned int VAR_10)
{
 struct orangefs_kernel_op_s *VAR_11;
 struct iattr VAR_12;
 int VAR_13;

 if (VAR_10)
  return -VAR_2;

 FUNC_5(VAR_3,
       "orangefs_rename: called (%pd2 => %pd2) ct=%d\n",
       VAR_7, VAR_9, FUNC_3(VAR_9));

 FUNC_6(&VAR_12, 0, sizeof VAR_12);
 VAR_12.ia_valid |= VAR_1 | VAR_0;
 VAR_12.ia_mtime = VAR_12.ia_ctime = FUNC_2(VAR_8);
 FUNC_1(VAR_8, &VAR_12);

 VAR_11 = FUNC_7(VAR_5);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->upcall.req.rename.old_parent_refn = FUNC_0(VAR_6)->refn;
 VAR_11->upcall.req.rename.new_parent_refn = FUNC_0(VAR_8)->refn;

 FUNC_10(VAR_11->upcall.req.rename.d_old_name,
  VAR_7->d_name.name,
  VAR_4 - 1);
 FUNC_10(VAR_11->upcall.req.rename.d_new_name,
  VAR_9->d_name.name,
  VAR_4 - 1);

 VAR_13 = FUNC_9(VAR_11,
    "orangefs_rename",
    FUNC_4(VAR_7->d_inode));

 FUNC_5(VAR_3,
       "orangefs_rename: got downcall status %d\n",
       VAR_13);

 if (VAR_9->d_inode)
  VAR_9->d_inode->i_ctime = FUNC_2(VAR_9->d_inode);

 FUNC_8(VAR_11);
 return VAR_13;
}

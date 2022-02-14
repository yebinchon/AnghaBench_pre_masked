
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ovl_path {int layer; struct dentry* dentry; } ;
struct ovl_inode_params {int numlower; void* upperdentry; struct dentry* index; struct ovl_path* lowerpath; } ;
struct ovl_entry {TYPE_1__* lowerstack; } ;
struct inode {int i_sb; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;
struct TYPE_2__ {int layer; void* dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_2 ;
 struct dentry* FUNC_3 (int ) ;
 struct dentry* FUNC_4 (struct inode*) ;
 struct dentry* FUNC_5 (struct dentry*,struct inode*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 void* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*) ;
 struct ovl_entry* FUNC_10 (int) ;
 int FUNC_11 (struct dentry*) ;
 struct inode* FUNC_12 (struct super_block*,struct ovl_inode_params*) ;
 int FUNC_13 (int ,struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_14(struct super_block *VAR_3,
           struct dentry *VAR_4,
           struct ovl_path *VAR_5,
           struct dentry *VAR_6)
{
 struct dentry *VAR_7 = VAR_5 ? VAR_5->dentry : ((void*)0);
 struct dentry *VAR_8 = VAR_4 ?: VAR_6;
 struct dentry *VAR_9;
 struct inode *VAR_10;
 struct ovl_entry *VAR_11;
 struct ovl_inode_params VAR_12 = {
  .lowerpath = VAR_5,
  .index = VAR_6,
  .numlower = !!VAR_7
 };


 if (FUNC_6(VAR_8 ?: VAR_7))
  return FUNC_1(-VAR_0);

 VAR_12.upperdentry = FUNC_7(VAR_8);
 VAR_10 = FUNC_12(VAR_3, &VAR_12);
 if (FUNC_2(VAR_10)) {
  FUNC_8(VAR_8);
  return FUNC_0(VAR_10);
 }

 if (VAR_8)
  FUNC_13(VAR_2, VAR_10);

 VAR_9 = FUNC_4(VAR_10);
 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_10->i_sb);
  if (!VAR_9)
   goto nomem;
  VAR_11 = FUNC_10(VAR_7 ? 1 : 0);
  if (!VAR_11)
   goto nomem;

  if (VAR_7) {
   VAR_11->lowerstack->dentry = FUNC_7(VAR_7);
   VAR_11->lowerstack->layer = VAR_5->layer;
  }
  VAR_9->d_fsdata = VAR_11;
  if (VAR_4)
   FUNC_11(VAR_9);
 }

 return FUNC_5(VAR_9, VAR_10);

nomem:
 FUNC_9(VAR_10);
 FUNC_8(VAR_9);
 return FUNC_1(-VAR_1);
}

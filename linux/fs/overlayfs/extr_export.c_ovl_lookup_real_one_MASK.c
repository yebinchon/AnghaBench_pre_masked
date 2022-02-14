
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_layer {int idx; } ;
struct TYPE_2__ {int len; int name; } ;
struct name_snapshot {TYPE_1__ name; } ;
struct inode {int dummy; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;
 struct dentry* FUNC_8 (int ,struct dentry*,int ) ;
 struct dentry* FUNC_9 (struct dentry*,int ) ;
 int FUNC_10 (char*,struct dentry*,int ,struct dentry*,int) ;
 int FUNC_11 (struct name_snapshot*) ;
 int FUNC_12 (struct name_snapshot*,struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_13(struct dentry *VAR_4,
       struct dentry *VAR_5,
       struct ovl_layer *VAR_6)
{
 struct inode *VAR_7 = FUNC_3(VAR_4);
 struct dentry *VAR_8, *VAR_9 = ((void*)0);
 struct name_snapshot VAR_10;
 int VAR_11;
 FUNC_6(VAR_7, VAR_3);
 VAR_11 = -VAR_0;
 VAR_9 = FUNC_4(VAR_5);
 if (FUNC_9(VAR_4, VAR_6->idx) != VAR_9)
  goto fail;







 FUNC_12(&VAR_10, VAR_5);
 VAR_8 = FUNC_8(VAR_10.name.name, VAR_4, VAR_10.name.len);
 VAR_11 = FUNC_2(VAR_8);
 if (FUNC_1(VAR_8)) {
  goto fail;
 } else if (!VAR_8 || !VAR_8->d_inode) {
  FUNC_5(VAR_8);
  VAR_11 = -VAR_1;
  goto fail;
 } else if (FUNC_9(VAR_8, VAR_6->idx) != VAR_5) {
  FUNC_5(VAR_8);
  VAR_11 = -VAR_2;
  goto fail;
 }

out:
 FUNC_11(&VAR_10);
 FUNC_5(VAR_9);
 FUNC_7(VAR_7);
 return VAR_8;

fail:
 FUNC_10("overlayfs: failed to lookup one by real (%pd2, layer=%d, connected=%pd2, err=%i)\n",
       VAR_5, VAR_6->idx, VAR_4, VAR_11);
 VAR_8 = FUNC_0(VAR_11);
 goto out;
}

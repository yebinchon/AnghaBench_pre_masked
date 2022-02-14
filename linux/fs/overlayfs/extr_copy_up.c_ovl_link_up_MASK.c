
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ovl_copy_up_ctx {TYPE_2__* dentry; int pstat; TYPE_2__* parent; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_7__ {int len; int name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 struct dentry* FUNC_6 (int ,struct dentry*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 struct dentry* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_10 (TYPE_2__*,struct dentry*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct dentry*,int *) ;

__attribute__((used)) static int FUNC_14(struct ovl_copy_up_ctx *VAR_1)
{
 int VAR_2;
 struct dentry *VAR_3;
 struct dentry *VAR_4 = FUNC_8(VAR_1->parent);
 struct inode *VAR_5 = FUNC_2(VAR_4);


 VAR_2 = FUNC_10(VAR_1->parent, VAR_4);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_11(VAR_1->dentry);
 if (VAR_2)
  return VAR_2;

 FUNC_4(VAR_5, VAR_0);
 VAR_3 = FUNC_6(VAR_1->dentry->d_name.name, VAR_4,
          VAR_1->dentry->d_name.len);
 VAR_2 = FUNC_1(VAR_3);
 if (!FUNC_0(VAR_3)) {
  VAR_2 = FUNC_9(FUNC_8(VAR_1->dentry), VAR_5, VAR_3);
  FUNC_3(VAR_3);

  if (!VAR_2) {

   FUNC_13(VAR_4, &VAR_1->pstat);
   FUNC_7(VAR_1->dentry);
  }
 }
 FUNC_5(VAR_5);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_12(VAR_1->dentry);

 return VAR_2;
}

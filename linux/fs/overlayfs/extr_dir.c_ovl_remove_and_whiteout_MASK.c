
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {struct dentry* d_parent; TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct list_head*) ;
 struct dentry* FUNC_7 (int ,struct dentry*,int ) ;
 int FUNC_8 (struct dentry*,int ,struct dentry*) ;
 struct dentry* FUNC_9 (struct dentry*,struct list_head*) ;
 struct dentry* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*,int) ;
 int FUNC_12 (struct dentry*,struct dentry*) ;
 int FUNC_13 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*,struct dentry*) ;

__attribute__((used)) static int FUNC_16(struct dentry *VAR_2,
       struct list_head *VAR_3)
{
 struct dentry *VAR_4 = FUNC_14(VAR_2);
 struct dentry *VAR_5 = FUNC_10(VAR_2->d_parent);
 struct dentry *VAR_6;
 struct dentry *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_2(!VAR_4))
  return -VAR_0;

 if (!FUNC_6(VAR_3)) {
  VAR_7 = FUNC_9(VAR_2, VAR_3);
  VAR_8 = FUNC_1(VAR_7);
  if (FUNC_0(VAR_7))
   goto out;
 }

 VAR_8 = FUNC_12(VAR_4, VAR_5);
 if (VAR_8)
  goto out_dput;

 VAR_6 = FUNC_7(VAR_2->d_name.name, VAR_5,
          VAR_2->d_name.len);
 VAR_8 = FUNC_1(VAR_6);
 if (FUNC_0(VAR_6))
  goto out_unlock;

 VAR_8 = -VAR_1;
 if ((VAR_7 && VAR_6 != VAR_7) ||
     (!VAR_7 && FUNC_10(VAR_2) &&
      !FUNC_13(VAR_2, VAR_6))) {
  goto out_dput_upper;
 }

 VAR_8 = FUNC_8(VAR_4, FUNC_4(VAR_5), VAR_6);
 if (VAR_8)
  goto out_d_drop;

 FUNC_11(VAR_2->d_parent, 1);
out_d_drop:
 FUNC_3(VAR_2);
out_dput_upper:
 FUNC_5(VAR_6);
out_unlock:
 FUNC_15(VAR_4, VAR_5);
out_dput:
 FUNC_5(VAR_7);
out:
 return VAR_8;
}

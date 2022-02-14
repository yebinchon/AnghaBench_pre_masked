
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int name; int len; } ;
struct ovl_fs {int indexdir; } ;
struct ovl_fh {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 struct dentry* FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct ovl_fh*,struct qstr*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;

struct dentry *FUNC_10(struct ovl_fs *VAR_3, struct ovl_fh *VAR_4)
{
 struct dentry *VAR_5;
 struct qstr VAR_6;
 int VAR_7;

 VAR_7 = FUNC_8(VAR_4, &VAR_6);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_5 = FUNC_6(VAR_6.name, VAR_3->indexdir, VAR_6.len);
 FUNC_5(VAR_6.name);
 if (FUNC_1(VAR_5)) {
  if (FUNC_2(VAR_5) == -VAR_1)
   VAR_5 = ((void*)0);
  return VAR_5;
 }

 if (FUNC_3(VAR_5))
  VAR_7 = 0;
 else if (FUNC_9(VAR_5))
  VAR_7 = -VAR_2;
 else if (FUNC_7(VAR_5))
  VAR_7 = -VAR_0;
 else
  return VAR_5;

 FUNC_4(VAR_5);
 return FUNC_0(VAR_7);
}

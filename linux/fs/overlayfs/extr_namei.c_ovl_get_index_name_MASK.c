
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct ovl_fh {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct ovl_fh*) ;
 int FUNC_1 (struct ovl_fh*) ;
 int FUNC_2 (struct ovl_fh*) ;
 struct ovl_fh* FUNC_3 (struct dentry*,int) ;
 int FUNC_4 (struct ovl_fh*,struct qstr*) ;

int FUNC_5(struct dentry *VAR_0, struct qstr *VAR_1)
{
 struct ovl_fh *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_0, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_2, VAR_1);

 FUNC_2(VAR_2);
 return VAR_3;
}

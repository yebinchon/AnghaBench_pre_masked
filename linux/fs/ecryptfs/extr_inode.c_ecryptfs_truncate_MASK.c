
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; int ia_size; } ;
struct dentry {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*,struct iattr*,int *) ;
 int FUNC_6 (struct dentry*,struct iattr*,struct iattr*) ;

int FUNC_7(struct dentry *VAR_1, loff_t VAR_2)
{
 struct iattr VAR_3 = { .ia_valid = VAR_0, .ia_size = VAR_2 };
 struct iattr VAR_4 = { .ia_valid = 0 };
 int VAR_5;

 VAR_5 = FUNC_2(FUNC_0(VAR_1), VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_6(VAR_1, &VAR_3, &VAR_4);
 if (!VAR_5 && VAR_4.ia_valid & VAR_0) {
  struct dentry *VAR_6 = FUNC_1(VAR_1);

  FUNC_3(FUNC_0(VAR_6));
  VAR_5 = FUNC_5(VAR_6, &VAR_4, ((void*)0));
  FUNC_4(FUNC_0(VAR_6));
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_2, void *VAR_3)
{
 struct iattr *VAR_4 = VAR_3;
 int VAR_5 = VAR_4->ia_valid;
 int VAR_6;






 VAR_4->ia_valid &= (VAR_1|VAR_0);
 VAR_6 = FUNC_0(VAR_2, VAR_4);
 VAR_4->ia_valid = VAR_5;

 return VAR_6;
}

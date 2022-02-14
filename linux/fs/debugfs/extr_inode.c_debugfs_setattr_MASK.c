
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_4, struct iattr *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_3);

 if (VAR_6 && (VAR_5->ia_valid & (VAR_1 | VAR_2 | VAR_0)))
  return VAR_6;
 return FUNC_1(VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstat {int size; } ;
struct iattr {int ia_size; int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct iattr*,int *) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, struct kstat *VAR_2)
{
 struct iattr VAR_3 = {
  .ia_valid = VAR_0,
  .ia_size = VAR_2->size,
 };

 return FUNC_0(VAR_1, &VAR_3, ((void*)0));
}

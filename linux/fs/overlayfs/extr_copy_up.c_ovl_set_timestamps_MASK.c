
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstat {int mtime; int atime; } ;
struct iattr {int ia_valid; int ia_mtime; int ia_atime; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*,struct iattr*,int *) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_4, struct kstat *VAR_5)
{
 struct iattr VAR_6 = {
  .ia_valid =
       VAR_0 | VAR_2 | VAR_1 | VAR_3,
  .ia_atime = VAR_5->atime,
  .ia_mtime = VAR_5->mtime,
 };

 return FUNC_0(VAR_4, &VAR_6, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstat {int gid; int uid; int mode; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; int ia_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct iattr*,int *) ;
 int FUNC_2 (struct dentry*,struct kstat*) ;

int FUNC_3(struct dentry *VAR_3, struct kstat *VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_0(VAR_4->mode)) {
  struct iattr VAR_6 = {
   .ia_valid = VAR_1,
   .ia_mode = VAR_4->mode,
  };
  VAR_5 = FUNC_1(VAR_3, &VAR_6, ((void*)0));
 }
 if (!VAR_5) {
  struct iattr VAR_7 = {
   .ia_valid = VAR_2 | VAR_0,
   .ia_uid = VAR_4->uid,
   .ia_gid = VAR_4->gid,
  };
  VAR_5 = FUNC_1(VAR_3, &VAR_7, ((void*)0));
 }
 if (!VAR_5)
  FUNC_2(VAR_3, VAR_4);

 return VAR_5;
}

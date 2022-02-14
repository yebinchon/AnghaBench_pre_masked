
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct posix_acl {int dummy; } ;
struct inode {int i_mode; int * i_acl; int * i_default_acl; } ;
struct TYPE_2__ {int mode2; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,int ,struct posix_acl*) ;
 int FUNC_2 (struct inode*,int*,struct posix_acl**,struct posix_acl**) ;
 int FUNC_3 (struct posix_acl*) ;

int FUNC_4(tid_t VAR_2, struct inode *VAR_3, struct inode *VAR_4)
{
 struct posix_acl *VAR_5, *VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_4, &VAR_3->i_mode, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_1, VAR_5);
  FUNC_3(VAR_5);
 } else {
  VAR_3->i_default_acl = ((void*)0);
 }

 if (VAR_6) {
  if (!VAR_7)
   VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_6);
  FUNC_3(VAR_6);
 } else {
  VAR_3->i_acl = ((void*)0);
 }

 FUNC_0(VAR_3)->mode2 = (FUNC_0(VAR_3)->mode2 & 0xffff0000) |
          VAR_3->i_mode;

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct posix_acl {int dummy; } ;
struct inode {scalar_t__ i_mode; int * i_acl; int * i_default_acl; } ;
struct iattr {int ia_valid; scalar_t__ ia_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct posix_acl*,int ) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct iattr*,int ,int) ;
 int FUNC_3 (struct inode*,scalar_t__*,struct posix_acl**,struct posix_acl**) ;
 int FUNC_4 (struct posix_acl*) ;

int FUNC_5(struct inode *VAR_3, struct inode *VAR_4)
{
 struct posix_acl *VAR_5, *VAR_6;
 umode_t VAR_7 = VAR_3->i_mode;
 struct iattr VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_3(VAR_4, &VAR_7, &VAR_5, &VAR_6);
 if (VAR_9)
  return VAR_9;

 if (VAR_5) {
  VAR_9 = FUNC_0(VAR_3, VAR_5,
        VAR_1);
  FUNC_4(VAR_5);
 } else {
  VAR_3->i_default_acl = ((void*)0);
 }

 if (VAR_6) {
  if (!VAR_9)
   VAR_9 = FUNC_0(VAR_3, VAR_6, VAR_0);
  FUNC_4(VAR_6);
 } else {
  VAR_3->i_acl = ((void*)0);
 }


 if (VAR_7 != VAR_3->i_mode) {
  FUNC_2(&VAR_8, 0, sizeof VAR_8);
  VAR_3->i_mode = VAR_7;
  VAR_8.ia_mode = VAR_7;
  VAR_8.ia_valid |= VAR_2;
  FUNC_1(VAR_3, &VAR_8);
 }

 return VAR_9;
}

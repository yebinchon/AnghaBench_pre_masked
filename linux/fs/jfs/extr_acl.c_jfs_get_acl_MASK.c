
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (struct inode*,char*,char*,int) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 struct posix_acl* FUNC_4 (int *,char*,int) ;

struct posix_acl *FUNC_5(struct inode *VAR_7, int VAR_8)
{
 struct posix_acl *VAR_9;
 char *VAR_10;
 int VAR_11;
 char *VAR_12 = ((void*)0);

 switch(VAR_8) {
  case 129:
   VAR_10 = VAR_4;
   break;
  case 128:
   VAR_10 = VAR_5;
   break;
  default:
   return FUNC_0(-VAR_0);
 }

 VAR_11 = FUNC_1(VAR_7, VAR_10, ((void*)0), 0);

 if (VAR_11 > 0) {
  VAR_12 = FUNC_3(VAR_11, VAR_3);
  if (!VAR_12)
   return FUNC_0(-VAR_2);
  VAR_11 = FUNC_1(VAR_7, VAR_10, VAR_12, VAR_11);
 }

 if (VAR_11 < 0) {
  if (VAR_11 == -VAR_1)
   VAR_9 = ((void*)0);
  else
   VAR_9 = FUNC_0(VAR_11);
 } else {
  VAR_9 = FUNC_4(&VAR_6, VAR_12, VAR_11);
 }
 FUNC_2(VAR_12);
 return VAR_9;
}

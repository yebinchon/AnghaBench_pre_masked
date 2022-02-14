
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_1 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 struct posix_acl* FUNC_4 (char*,int) ;
 int FUNC_5 (struct inode*,char*,char*,int) ;

struct posix_acl *FUNC_6(struct inode *VAR_6, int VAR_7)
{
 char *VAR_8, *VAR_9;
 struct posix_acl *VAR_10;
 int VAR_11;
 int VAR_12;

 switch (VAR_7) {
 case 129:
  VAR_8 = VAR_4;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 default:
  FUNC_0();
 }

 VAR_11 = FUNC_5(VAR_6, VAR_8, ((void*)0), 0);
 if (VAR_11 < 0) {
  if (VAR_11 == -VAR_0 || VAR_11 == -VAR_2)
   return ((void*)0);
  return FUNC_1(VAR_11);
 }

 VAR_9 = FUNC_3(VAR_11, VAR_3);
 if (!VAR_9)
  return FUNC_1(-VAR_1);

 VAR_12 = FUNC_5(VAR_6, VAR_8, VAR_9, VAR_11);
 if (VAR_12 == -VAR_0 || VAR_12 == -VAR_2) {




  VAR_10 = ((void*)0);
 } else if (VAR_12 < 0) {
  VAR_10 = FUNC_1(VAR_12);
 } else {
  VAR_10 = FUNC_4(VAR_9, VAR_12);
 }

 FUNC_2(VAR_9);
 return VAR_10;
}

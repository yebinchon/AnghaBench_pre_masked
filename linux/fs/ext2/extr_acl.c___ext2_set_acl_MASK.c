
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct posix_acl*,size_t*) ;
 int FUNC_4 (struct inode*,int,char*,void*,size_t,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_4, struct posix_acl *VAR_5, int VAR_6)
{
 int VAR_7;
 void *VAR_8 = ((void*)0);
 size_t VAR_9 = 0;
 int VAR_10;

 switch(VAR_6) {
  case 129:
   VAR_7 = VAR_2;
   break;

  case 128:
   VAR_7 = VAR_3;
   if (!FUNC_2(VAR_4->i_mode))
    return VAR_5 ? -VAR_0 : 0;
   break;

  default:
   return -VAR_1;
 }
  if (VAR_5) {
  VAR_8 = FUNC_3(VAR_5, &VAR_9);
  if (FUNC_0(VAR_8))
   return (int)FUNC_1(VAR_8);
 }

 VAR_10 = FUNC_4(VAR_4, VAR_7, "", VAR_8, VAR_9, 0);

 FUNC_5(VAR_8);
 if (!VAR_10)
  FUNC_6(VAR_4, VAR_6, VAR_5);
 return VAR_10;
}

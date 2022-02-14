
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
typedef int handle_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct posix_acl*,size_t*) ;
 int FUNC_4 (int *,struct inode*,int,char*,void*,size_t,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_7(handle_t *VAR_4, struct inode *VAR_5, int VAR_6,
      struct posix_acl *VAR_7, int VAR_8)
{
 int VAR_9;
 void *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 int VAR_12;

 switch (VAR_6) {
 case 129:
  VAR_9 = VAR_2;
  break;

 case 128:
  VAR_9 = VAR_3;
  if (!FUNC_2(VAR_5->i_mode))
   return VAR_7 ? -VAR_0 : 0;
  break;

 default:
  return -VAR_1;
 }
 if (VAR_7) {
  VAR_10 = FUNC_3(VAR_7, &VAR_11);
  if (FUNC_0(VAR_10))
   return (int)FUNC_1(VAR_10);
 }

 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_9, "",
          VAR_10, VAR_11, VAR_8);

 FUNC_5(VAR_10);
 if (!VAR_12) {
  FUNC_6(VAR_5, VAR_6, VAR_7);
 }

 return VAR_12;
}

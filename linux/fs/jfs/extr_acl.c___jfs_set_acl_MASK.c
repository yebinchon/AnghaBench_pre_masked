
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid_t ;
struct posix_acl {int a_count; } ;
struct inode {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,struct inode*,char*,char*,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct posix_acl*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_6(tid_t VAR_6, struct inode *VAR_7, int VAR_8,
         struct posix_acl *VAR_9)
{
 char *VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 char *VAR_13 = ((void*)0);

 switch (VAR_8) {
 case 129:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_9) {
  VAR_12 = FUNC_4(VAR_9->a_count);
  VAR_13 = FUNC_2(VAR_12, VAR_2);
  if (!VAR_13)
   return -VAR_1;
  VAR_11 = FUNC_3(&VAR_5, VAR_9, VAR_13, VAR_12);
  if (VAR_11 < 0)
   goto out;
 }
 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_10, VAR_13, VAR_12, 0);
out:
 FUNC_1(VAR_13);

 if (!VAR_11)
  FUNC_5(VAR_7, VAR_8, VAR_9);

 return VAR_11;
}

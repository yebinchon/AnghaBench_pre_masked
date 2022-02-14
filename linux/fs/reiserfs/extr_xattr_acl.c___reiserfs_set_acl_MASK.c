
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int dummy; } ;
struct posix_acl {int dummy; } ;
struct inode {int i_ctime; int i_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct inode*) ;
 void* FUNC_6 (struct posix_acl*,size_t*) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct inode*,char*,void*,size_t,int ) ;
 int FUNC_8 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_9(struct reiserfs_transaction_handle *VAR_5, struct inode *VAR_6,
   int VAR_7, struct posix_acl *VAR_8)
{
 char *VAR_9;
 void *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 int VAR_12;

 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_4;
  if (!FUNC_2(VAR_6->i_mode))
   return VAR_8 ? -VAR_0 : 0;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_8) {
  VAR_10 = FUNC_6(VAR_8, &VAR_11);
  if (FUNC_0(VAR_10))
   return (int)FUNC_1(VAR_10);
 }

 VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_9, VAR_10, VAR_11, 0);







 if (VAR_12 == -VAR_2) {
  VAR_12 = 0;
  if (VAR_7 == 129) {
   VAR_6->i_ctime = FUNC_3(VAR_6);
   FUNC_5(VAR_6);
  }
 }

 FUNC_4(VAR_10);

 if (!VAR_12)
  FUNC_8(VAR_6, VAR_7, VAR_8);

 return VAR_12;
}

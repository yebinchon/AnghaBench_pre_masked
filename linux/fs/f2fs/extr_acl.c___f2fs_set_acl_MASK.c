
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ) ;
 void* FUNC_5 (int ,struct posix_acl*,size_t*) ;
 int FUNC_6 (struct inode*,int,char*,void*,size_t,struct page*,int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct inode*,int *,struct posix_acl**) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_5, int VAR_6,
   struct posix_acl *VAR_7, struct page *VAR_8)
{
 int VAR_9;
 void *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 int VAR_12;
 umode_t VAR_13 = VAR_5->i_mode;

 switch (VAR_6) {
 case 129:
  VAR_9 = VAR_2;
  if (VAR_7 && !VAR_8) {
   VAR_12 = FUNC_8(VAR_5, &VAR_13, &VAR_7);
   if (VAR_12)
    return VAR_12;
   FUNC_9(VAR_5, VAR_13);
  }
  break;

 case 128:
  VAR_9 = VAR_3;
  if (!FUNC_3(VAR_5->i_mode))
   return VAR_7 ? -VAR_0 : 0;
  break;

 default:
  return -VAR_1;
 }

 if (VAR_7) {
  VAR_10 = FUNC_5(FUNC_0(VAR_5), VAR_7, &VAR_11);
  if (FUNC_1(VAR_10)) {
   FUNC_4(VAR_5, VAR_4);
   return FUNC_2(VAR_10);
  }
 }

 VAR_12 = FUNC_6(VAR_5, VAR_9, "", VAR_10, VAR_11, VAR_8, 0);

 FUNC_7(VAR_10);
 if (!VAR_12)
  FUNC_10(VAR_5, VAR_6, VAR_7);

 FUNC_4(VAR_5, VAR_4);
 return VAR_12;
}

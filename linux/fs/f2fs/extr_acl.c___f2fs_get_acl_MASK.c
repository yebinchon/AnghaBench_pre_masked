
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct posix_acl* FUNC_2 (void*,int) ;
 int FUNC_3 (struct inode*,int,char*,void*,int,struct page*) ;
 void* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static struct posix_acl *FUNC_6(struct inode *VAR_6, int VAR_7,
      struct page *VAR_8)
{
 int VAR_9 = VAR_4;
 void *VAR_10 = ((void*)0);
 struct posix_acl *VAR_11;
 int VAR_12;

 if (VAR_7 == VAR_0)
  VAR_9 = VAR_3;

 VAR_12 = FUNC_3(VAR_6, VAR_9, "", ((void*)0), 0, VAR_8);
 if (VAR_12 > 0) {
  VAR_10 = FUNC_4(FUNC_1(VAR_6), VAR_12, VAR_5);
  if (!VAR_10)
   return FUNC_0(-VAR_2);
  VAR_12 = FUNC_3(VAR_6, VAR_9, "", VAR_10,
       VAR_12, VAR_8);
 }

 if (VAR_12 > 0)
  VAR_11 = FUNC_2(VAR_10, VAR_12);
 else if (VAR_12 == -VAR_1)
  VAR_11 = ((void*)0);
 else
  VAR_11 = FUNC_0(VAR_12);
 FUNC_5(VAR_10);

 return VAR_11;
}

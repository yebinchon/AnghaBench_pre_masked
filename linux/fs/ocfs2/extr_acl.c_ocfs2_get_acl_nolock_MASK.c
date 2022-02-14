
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 struct posix_acl* FUNC_3 (char*,int) ;
 int FUNC_4 (struct inode*,struct buffer_head*,int,char*,char*,int) ;

__attribute__((used)) static struct posix_acl *FUNC_5(struct inode *VAR_6,
           int VAR_7,
           struct buffer_head *VAR_8)
{
 int VAR_9;
 char *VAR_10 = ((void*)0);
 struct posix_acl *VAR_11;
 int VAR_12;

 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 VAR_12 = FUNC_4(VAR_6, VAR_8, VAR_9, "", ((void*)0), 0);
 if (VAR_12 > 0) {
  VAR_10 = FUNC_2(VAR_12, VAR_3);
  if (!VAR_10)
   return FUNC_0(-VAR_2);
  VAR_12 = FUNC_4(VAR_6, VAR_8, VAR_9,
      "", VAR_10, VAR_12);
 }

 if (VAR_12 > 0)
  VAR_11 = FUNC_3(VAR_10, VAR_12);
 else if (VAR_12 == -VAR_1 || VAR_12 == 0)
  VAR_11 = ((void*)0);
 else
  VAR_11 = FUNC_0(VAR_12);

 FUNC_1(VAR_10);

 return VAR_11;
}

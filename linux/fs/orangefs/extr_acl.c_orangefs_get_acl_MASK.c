
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,char*,int ,char*,int) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,char*,char*,int ) ;
 struct posix_acl* FUNC_7 (int *,char*,int) ;

struct posix_acl *FUNC_8(struct inode *VAR_10, int VAR_11)
{
 struct posix_acl *VAR_12;
 int VAR_13;
 char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);

 switch (VAR_11) {
 case 129:
  VAR_14 = VAR_7;
  break;
 case 128:
  VAR_14 = VAR_8;
  break;
 default:
  FUNC_3("orangefs_get_acl: bogus value of type %d\n", VAR_11);
  return FUNC_0(-VAR_0);
 }







 VAR_15 = FUNC_5(VAR_6, VAR_4);
 if (!VAR_15)
  return FUNC_0(-VAR_2);

 FUNC_2(VAR_5,
       "inode %pU, key %s, type %d\n",
       FUNC_1(VAR_10),
       VAR_14,
       VAR_11);
 VAR_13 = FUNC_6(VAR_10, VAR_14, VAR_15,
          VAR_6);

 if (VAR_13 > 0) {
  VAR_12 = FUNC_7(&VAR_9, VAR_15, VAR_13);
 } else if (VAR_13 == -VAR_1 || VAR_13 == -VAR_3) {
  VAR_12 = ((void*)0);
 } else {
  FUNC_3("inode %pU retrieving acl's failed with error %d\n",
      FUNC_1(VAR_10),
      VAR_13);
  VAR_12 = FUNC_0(VAR_13);
 }

 FUNC_4(VAR_15);
 return VAR_12;
}

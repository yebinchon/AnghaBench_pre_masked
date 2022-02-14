
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct super_block {int dummy; } ;
struct adfs_sb_info {int s_owner_mask; int s_other_mask; int s_ftsuffix; int s_gid; int s_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct super_block*,int ,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (char*,int ,int *) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_4, struct adfs_sb_info *VAR_5,
    char *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return 0;

 while ((VAR_7 = FUNC_8(&VAR_6, ",")) != ((void*)0)) {
  substring_t VAR_9[VAR_2];
  int VAR_10;
  if (!*VAR_7)
   continue;

  VAR_10 = FUNC_7(VAR_7, VAR_3, VAR_9);
  switch (VAR_10) {
  case 128:
   if (FUNC_5(VAR_9, &VAR_8))
    return -VAR_0;
   VAR_5->s_uid = FUNC_4(FUNC_1(), VAR_8);
   if (!FUNC_9(VAR_5->s_uid))
    return -VAR_0;
   break;
  case 131:
   if (FUNC_5(VAR_9, &VAR_8))
    return -VAR_0;
   VAR_5->s_gid = FUNC_3(FUNC_1(), VAR_8);
   if (!FUNC_2(VAR_5->s_gid))
    return -VAR_0;
   break;
  case 129:
   if (FUNC_6(VAR_9, &VAR_8))
    return -VAR_0;
   VAR_5->s_owner_mask = VAR_8;
   break;
  case 130:
   if (FUNC_6(VAR_9, &VAR_8))
    return -VAR_0;
   VAR_5->s_other_mask = VAR_8;
   break;
  case 132:
   if (FUNC_5(VAR_9, &VAR_8))
    return -VAR_0;
   VAR_5->s_ftsuffix = VAR_8;
   break;
  default:
   FUNC_0(VAR_4, VAR_1,
     "unrecognised mount option \"%s\" or missing value",
     VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}

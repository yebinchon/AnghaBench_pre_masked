
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct omfs_sb_info {int s_fmask; int s_dmask; int s_gid; int s_uid; } ;


 int VAR_0 ;





 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (char*,int ,int *) ;
 char* FUNC_7 (char**,char*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(char *VAR_2, struct omfs_sb_info *VAR_3)
{
 char *VAR_4;
 substring_t VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  return 1;

 while ((VAR_4 = FUNC_7(&VAR_2, ",")) != ((void*)0)) {
  int VAR_7;
  if (!*VAR_4)
   continue;

  VAR_7 = FUNC_6(VAR_4, VAR_1, VAR_5);
  switch (VAR_7) {
  case 129:
   if (FUNC_4(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_uid = FUNC_3(FUNC_0(), VAR_6);
   if (!FUNC_8(VAR_3->s_uid))
    return 0;
   break;
  case 130:
   if (FUNC_4(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_gid = FUNC_2(FUNC_0(), VAR_6);
   if (!FUNC_1(VAR_3->s_gid))
    return 0;
   break;
  case 128:
   if (FUNC_5(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_fmask = VAR_3->s_dmask = VAR_6;
   break;
  case 132:
   if (FUNC_5(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_dmask = VAR_6;
   break;
  case 131:
   if (FUNC_5(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_fmask = VAR_6;
   break;
  default:
   return 0;
  }
 }
 return 1;
}

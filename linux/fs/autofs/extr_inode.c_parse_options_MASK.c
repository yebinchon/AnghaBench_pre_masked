
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct inode {int i_gid; int i_uid; } ;
struct autofs_sb_info {int min_proto; int max_proto; int pipefd; int flags; int type; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (char**,char*) ;
 int VAR_5 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(char *VAR_6,
    struct inode *VAR_7, int *VAR_8, bool *VAR_9,
    struct autofs_sb_info *VAR_10)
{
 char *VAR_11;
 substring_t VAR_12[VAR_4];
 int VAR_13;
 int VAR_14 = -1;
 kuid_t VAR_15;
 kgid_t VAR_16;

 VAR_7->i_uid = FUNC_1();
 VAR_7->i_gid = FUNC_0();

 VAR_10->min_proto = VAR_1;
 VAR_10->max_proto = VAR_0;

 VAR_10->pipefd = -1;

 if (!VAR_6)
  return 1;

 while ((VAR_11 = FUNC_11(&VAR_6, ",")) != ((void*)0)) {
  int VAR_17;

  if (!*VAR_11)
   continue;

  VAR_17 = FUNC_7(VAR_11, VAR_5, VAR_12);
  switch (VAR_17) {
  case 137:
   if (FUNC_6(VAR_12, &VAR_14))
    return 1;
   VAR_10->pipefd = VAR_14;
   break;
  case 128:
   if (FUNC_6(VAR_12, &VAR_13))
    return 1;
   VAR_15 = FUNC_5(FUNC_2(), VAR_13);
   if (!FUNC_12(VAR_15))
    return 1;
   VAR_7->i_uid = VAR_15;
   break;
  case 136:
   if (FUNC_6(VAR_12, &VAR_13))
    return 1;
   VAR_16 = FUNC_4(FUNC_2(), VAR_13);
   if (!FUNC_3(VAR_16))
    return 1;
   VAR_7->i_gid = VAR_16;
   break;
  case 130:
   if (FUNC_6(VAR_12, &VAR_13))
    return 1;
   *VAR_8 = VAR_13;
   *VAR_9 = 1;
   break;
  case 132:
   if (FUNC_6(VAR_12, &VAR_13))
    return 1;
   VAR_10->min_proto = VAR_13;
   break;
  case 133:
   if (FUNC_6(VAR_12, &VAR_13))
    return 1;
   VAR_10->max_proto = VAR_13;
   break;
  case 134:
   FUNC_9(&VAR_10->type);
   break;
  case 138:
   FUNC_8(&VAR_10->type);
   break;
  case 131:
   FUNC_10(&VAR_10->type);
   break;
  case 129:
   VAR_10->flags |= VAR_3;
   break;
  case 135:
   VAR_10->flags |= VAR_2;
   break;
  default:
   return 1;
  }
 }
 return (VAR_10->pipefd < 0);
}

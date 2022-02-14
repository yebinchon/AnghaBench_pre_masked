
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int uid_t ;
typedef int substring_t ;
struct hfsplus_sb_info {int part; int session; void* nls; int flags; int gid; int uid; int umask; int type; int creator; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 void* FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int*) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,int ,int *) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ,int *) ;
 char* FUNC_15 (char**,char*) ;
 int VAR_4 ;
 int FUNC_16 (int ) ;

int FUNC_17(char *VAR_5, struct hfsplus_sb_info *VAR_6)
{
 char *VAR_7;
 substring_t VAR_8[VAR_3];
 int VAR_9, VAR_10;

 if (!VAR_5)
  goto done;

 while ((VAR_7 = FUNC_15(&VAR_5, ",")) != ((void*)0)) {
  if (!*VAR_7)
   continue;

  VAR_10 = FUNC_12(VAR_7, VAR_4, VAR_8);
  switch (VAR_10) {
  case 139:
   if (FUNC_8(&VAR_8[0], &VAR_6->creator)) {
    FUNC_13("creator requires a 4 character value\n");
    return 0;
   }
   break;
  case 130:
   if (FUNC_8(&VAR_8[0], &VAR_6->type)) {
    FUNC_13("type requires a 4 character value\n");
    return 0;
   }
   break;
  case 128:
   if (FUNC_10(&VAR_8[0], &VAR_9)) {
    FUNC_13("umask requires a value\n");
    return 0;
   }
   VAR_6->umask = (umode_t)VAR_9;
   break;
  case 129:
   if (FUNC_9(&VAR_8[0], &VAR_9)) {
    FUNC_13("uid requires an argument\n");
    return 0;
   }
   VAR_6->uid = FUNC_7(FUNC_1(), (uid_t)VAR_9);
   if (!FUNC_16(VAR_6->uid)) {
    FUNC_13("invalid uid specified\n");
    return 0;
   }
   break;
  case 136:
   if (FUNC_9(&VAR_8[0], &VAR_9)) {
    FUNC_13("gid requires an argument\n");
    return 0;
   }
   VAR_6->gid = FUNC_6(FUNC_1(), (gid_t)VAR_9);
   if (!FUNC_2(VAR_6->gid)) {
    FUNC_13("invalid gid specified\n");
    return 0;
   }
   break;
  case 132:
   if (FUNC_9(&VAR_8[0], &VAR_6->part)) {
    FUNC_13("part requires an argument\n");
    return 0;
   }
   break;
  case 131:
   if (FUNC_9(&VAR_8[0], &VAR_6->session)) {
    FUNC_13("session requires an argument\n");
    return 0;
   }
   break;
  case 135:
   if (VAR_6->nls) {
    FUNC_13("unable to change nls mapping\n");
    return 0;
   }
   VAR_7 = FUNC_11(&VAR_8[0]);
   if (VAR_7)
    VAR_6->nls = FUNC_4(VAR_7);
   if (!VAR_6->nls) {
    FUNC_13("unable to load nls mapping \"%s\"\n",
           VAR_7);
    FUNC_3(VAR_7);
    return 0;
   }
   FUNC_3(VAR_7);
   break;
  case 138:
   FUNC_0(VAR_2, &VAR_6->flags);
   break;
  case 133:
   FUNC_14(VAR_2, &VAR_6->flags);
   break;
  case 140:
   FUNC_0(VAR_1, &VAR_6->flags);
   break;
  case 134:
   FUNC_14(VAR_1, &VAR_6->flags);
   break;
  case 137:
   FUNC_14(VAR_0, &VAR_6->flags);
   break;
  default:
   return 0;
  }
 }

done:
 if (!VAR_6->nls) {

  VAR_6->nls = FUNC_4("utf8");
  if (!VAR_6->nls)
   VAR_6->nls = FUNC_5();
  if (!VAR_6->nls)
   return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* umode_t ;
typedef int uid_t ;
typedef int substring_t ;
struct hfs_sb_info {int s_file_umask; int s_dir_umask; int s_quiet; int part; int session; void* nls_io; void* nls_disk; int s_creator; int s_type; int s_gid; int s_uid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;
 void* FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *,int*) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (char*,int ,int *) ;
 int FUNC_15 (char*,...) ;
 char* FUNC_16 (char**,char*) ;
 int VAR_1 ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(char *VAR_2, struct hfs_sb_info *VAR_3)
{
 char *VAR_4;
 substring_t VAR_5[VAR_0];
 int VAR_6, VAR_7;


 VAR_3->s_uid = FUNC_2();
 VAR_3->s_gid = FUNC_1();
 VAR_3->s_file_umask = 0133;
 VAR_3->s_dir_umask = 0022;
 VAR_3->s_type = VAR_3->s_creator = FUNC_0(0x3f3f3f3f);
 VAR_3->s_quiet = 0;
 VAR_3->part = -1;
 VAR_3->session = -1;

 if (!VAR_2)
  return 1;

 while ((VAR_4 = FUNC_16(&VAR_2, ",")) != ((void*)0)) {
  if (!*VAR_4)
   continue;

  VAR_7 = FUNC_14(VAR_4, VAR_1, VAR_5);
  switch (VAR_7) {
  case 129:
   if (FUNC_11(&VAR_5[0], &VAR_6)) {
    FUNC_15("uid requires an argument\n");
    return 0;
   }
   VAR_3->s_uid = FUNC_9(FUNC_3(), (uid_t)VAR_6);
   if (!FUNC_17(VAR_3->s_uid)) {
    FUNC_15("invalid uid %d\n", VAR_6);
    return 0;
   }
   break;
  case 135:
   if (FUNC_11(&VAR_5[0], &VAR_6)) {
    FUNC_15("gid requires an argument\n");
    return 0;
   }
   VAR_3->s_gid = FUNC_8(FUNC_3(), (gid_t)VAR_6);
   if (!FUNC_4(VAR_3->s_gid)) {
    FUNC_15("invalid gid %d\n", VAR_6);
    return 0;
   }
   break;
  case 128:
   if (FUNC_12(&VAR_5[0], &VAR_6)) {
    FUNC_15("umask requires a value\n");
    return 0;
   }
   VAR_3->s_file_umask = (umode_t)VAR_6;
   VAR_3->s_dir_umask = (umode_t)VAR_6;
   break;
  case 136:
   if (FUNC_12(&VAR_5[0], &VAR_6)) {
    FUNC_15("file_umask requires a value\n");
    return 0;
   }
   VAR_3->s_file_umask = (umode_t)VAR_6;
   break;
  case 137:
   if (FUNC_12(&VAR_5[0], &VAR_6)) {
    FUNC_15("dir_umask requires a value\n");
    return 0;
   }
   VAR_3->s_dir_umask = (umode_t)VAR_6;
   break;
  case 133:
   if (FUNC_11(&VAR_5[0], &VAR_3->part)) {
    FUNC_15("part requires an argument\n");
    return 0;
   }
   break;
  case 131:
   if (FUNC_11(&VAR_5[0], &VAR_3->session)) {
    FUNC_15("session requires an argument\n");
    return 0;
   }
   break;
  case 130:
   if (FUNC_10(&VAR_5[0], &VAR_3->s_type)) {
    FUNC_15("type requires a 4 character value\n");
    return 0;
   }
   break;
  case 138:
   if (FUNC_10(&VAR_5[0], &VAR_3->s_creator)) {
    FUNC_15("creator requires a 4 character value\n");
    return 0;
   }
   break;
  case 132:
   VAR_3->s_quiet = 1;
   break;
  case 139:
   if (VAR_3->nls_disk) {
    FUNC_15("unable to change codepage\n");
    return 0;
   }
   VAR_4 = FUNC_13(&VAR_5[0]);
   if (VAR_4)
    VAR_3->nls_disk = FUNC_6(VAR_4);
   if (!VAR_3->nls_disk) {
    FUNC_15("unable to load codepage \"%s\"\n", VAR_4);
    FUNC_5(VAR_4);
    return 0;
   }
   FUNC_5(VAR_4);
   break;
  case 134:
   if (VAR_3->nls_io) {
    FUNC_15("unable to change iocharset\n");
    return 0;
   }
   VAR_4 = FUNC_13(&VAR_5[0]);
   if (VAR_4)
    VAR_3->nls_io = FUNC_6(VAR_4);
   if (!VAR_3->nls_io) {
    FUNC_15("unable to load iocharset \"%s\"\n", VAR_4);
    FUNC_5(VAR_4);
    return 0;
   }
   FUNC_5(VAR_4);
   break;
  default:
   return 0;
  }
 }

 if (VAR_3->nls_disk && !VAR_3->nls_io) {
  VAR_3->nls_io = FUNC_7();
  if (!VAR_3->nls_io) {
   FUNC_15("unable to load default iocharset\n");
   return 0;
  }
 }
 VAR_3->s_dir_umask &= 0777;
 VAR_3->s_file_umask &= 0577;

 return 1;
}

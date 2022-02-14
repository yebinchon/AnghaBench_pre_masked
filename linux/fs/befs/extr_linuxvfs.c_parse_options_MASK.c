
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct befs_mount_options {int use_uid; int use_gid; int debug; int * iocharset; int gid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (char**,char*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(char *VAR_6, struct befs_mount_options *VAR_7)
{
 char *VAR_8;
 substring_t VAR_9[VAR_4];
 int VAR_10;
 kuid_t VAR_11;
 kgid_t VAR_12;


 VAR_7->uid = VAR_1;
 VAR_7->gid = VAR_0;
 VAR_7->use_uid = 0;
 VAR_7->use_gid = 0;
 VAR_7->iocharset = ((void*)0);
 VAR_7->debug = 0;

 if (!VAR_6)
  return 1;

 while ((VAR_8 = FUNC_9(&VAR_6, ",")) != ((void*)0)) {
  int VAR_13;

  if (!*VAR_8)
   continue;

  VAR_13 = FUNC_7(VAR_8, VAR_5, VAR_9);
  switch (VAR_13) {
  case 128:
   if (FUNC_5(&VAR_9[0], &VAR_10))
    return 0;
   VAR_11 = VAR_3;
   if (VAR_10 >= 0)
    VAR_11 = FUNC_4(FUNC_0(), VAR_10);
   if (!FUNC_10(VAR_11)) {
    FUNC_8("Invalid uid %d, "
           "using default\n", VAR_10);
    break;
   }
   VAR_7->uid = VAR_11;
   VAR_7->use_uid = 1;
   break;
  case 129:
   if (FUNC_5(&VAR_9[0], &VAR_10))
    return 0;
   VAR_12 = VAR_2;
   if (VAR_10 >= 0)
    VAR_12 = FUNC_3(FUNC_0(), VAR_10);
   if (!FUNC_1(VAR_12)) {
    FUNC_8("Invalid gid %d, "
           "using default\n", VAR_10);
    break;
   }
   VAR_7->gid = VAR_12;
   VAR_7->use_gid = 1;
   break;
  case 131:
   FUNC_2(VAR_7->iocharset);
   VAR_7->iocharset = FUNC_6(&VAR_9[0]);
   if (!VAR_7->iocharset) {
    FUNC_8("allocation failure for "
           "iocharset string\n");
    return 0;
   }
   break;
  case 130:
   VAR_7->debug = 1;
   break;
  default:
   FUNC_8("Unrecognized mount option \"%s\" "
          "or missing value\n", VAR_8);
   return 0;
  }
 }
 return 1;
}

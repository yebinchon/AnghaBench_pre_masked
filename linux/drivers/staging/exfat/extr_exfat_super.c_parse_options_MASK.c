
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int substring_t ;
struct exfat_mount_options {int fs_fmask; int fs_dmask; int allow_utime; int codepage; char* iocharset; int casesensitive; int discard; void* errors; int fs_gid; int fs_uid; } ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int umask; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,int *) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char**,char*) ;

__attribute__((used)) static int FUNC_11(char *VAR_11, int VAR_12, int *VAR_13,
    struct exfat_mount_options *VAR_14)
{
 char *VAR_15;
 substring_t VAR_16[VAR_5];
 int VAR_17;
 char *VAR_18;

 VAR_14->fs_uid = FUNC_3();
 VAR_14->fs_gid = FUNC_2();
 VAR_14->fs_fmask = VAR_14->fs_dmask = VAR_7->fs->umask;
 VAR_14->allow_utime = VAR_6;
 VAR_14->codepage = VAR_8;
 VAR_14->iocharset = VAR_9;
 VAR_14->casesensitive = 0;
 VAR_14->errors = VAR_4;



 *VAR_13 = 0;

 if (!VAR_11)
  goto out;

 while ((VAR_15 = FUNC_10(&VAR_11, ","))) {
  int VAR_19;

  if (!*VAR_15)
   continue;

  VAR_19 = FUNC_8(VAR_15, VAR_10, VAR_16);
  switch (VAR_19) {
  case 130:
   if (FUNC_5(&VAR_16[0], &VAR_17))
    return 0;
   VAR_14->fs_uid = FUNC_1(VAR_17);
   break;
  case 132:
   if (FUNC_5(&VAR_16[0], &VAR_17))
    return 0;
   VAR_14->fs_gid = FUNC_0(VAR_17);
   break;
  case 129:
  case 137:
  case 133:
   if (FUNC_6(&VAR_16[0], &VAR_17))
    return 0;
   if (VAR_19 != 137)
    VAR_14->fs_fmask = VAR_17;
   if (VAR_19 != 133)
    VAR_14->fs_dmask = VAR_17;
   break;
  case 142:
   if (FUNC_6(&VAR_16[0], &VAR_17))
    return 0;
   VAR_14->allow_utime = VAR_17 & 0022;
   break;
  case 140:
   if (FUNC_5(&VAR_16[0], &VAR_17))
    return 0;
   VAR_14->codepage = VAR_17;
   break;
  case 141:
   if (VAR_14->iocharset != VAR_9)
    FUNC_4(VAR_14->iocharset);
   VAR_18 = FUNC_7(&VAR_16[0]);
   if (!VAR_18)
    return -VAR_1;
   VAR_14->iocharset = VAR_18;
   break;
  case 131:
   if (FUNC_5(&VAR_16[0], &VAR_17))
    return 0;
   VAR_14->casesensitive = VAR_17;
   break;
  case 136:
   VAR_14->errors = VAR_2;
   break;
  case 135:
   VAR_14->errors = VAR_3;
   break;
  case 134:
   VAR_14->errors = VAR_4;
   break;
  case 139:
   *VAR_13 = 1;
   break;





  case 128:
   break;
  default:
   if (!VAR_12)
    FUNC_9("[EXFAT] Unrecognized mount option %s or missing value\n",
           VAR_15);
   return -VAR_0;
  }
 }

out:
 if (VAR_14->allow_utime == VAR_6)
  VAR_14->allow_utime = ~VAR_14->fs_dmask & 0022;

 return 0;
}

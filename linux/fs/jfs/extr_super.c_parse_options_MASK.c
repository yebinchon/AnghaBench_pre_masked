
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_4__ {char* from; } ;
typedef TYPE_1__ substring_t ;
struct super_block {scalar_t__ s_blocksize_bits; TYPE_3__* s_bdev; } ;
struct request_queue {int dummy; } ;
struct jfs_sb_info {int umask; int minblks_trim; void* nls_tab; int gid; int uid; } ;
typedef scalar_t__ s64 ;
typedef int gid_t ;
struct TYPE_5__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct request_queue* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,scalar_t__*) ;
 int FUNC_7 (char*,int,int*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (char*,int ,TYPE_1__*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (char**,char*) ;
 int VAR_8 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (void*) ;

__attribute__((used)) static int FUNC_18(char *VAR_9, struct super_block *VAR_10, s64 *VAR_11,
    int *VAR_12)
{
 void *VAR_13 = (void *)-1;
 char *VAR_14;
 struct jfs_sb_info *VAR_15 = FUNC_0(VAR_10);

 *VAR_11 = 0;

 if (!VAR_9)
  return 1;

 while ((VAR_14 = FUNC_15(&VAR_9, ",")) != ((void*)0)) {
  substring_t VAR_16[VAR_7];
  int VAR_17;
  if (!*VAR_14)
   continue;

  VAR_17 = FUNC_11(VAR_14, VAR_8, VAR_16);
  switch (VAR_17) {
  case 137:
   *VAR_12 &= ~VAR_5;
   break;
  case 134:
   *VAR_12 |= VAR_5;
   break;
  case 138:


   break;
  case 136:
   if (VAR_13 && VAR_13 != (void *) -1)
    FUNC_17(VAR_13);
   if (!FUNC_14(VAR_16[0].from, "none"))
    VAR_13 = ((void*)0);
   else {
    VAR_13 = FUNC_8(VAR_16[0].from);
    if (!VAR_13) {
     FUNC_12("JFS: charset not found\n");
     goto cleanup;
    }
   }
   break;
  case 132:
  {
   char *VAR_18 = VAR_16[0].from;
   int VAR_19 = FUNC_6(VAR_18, 0, VAR_11);

   if (VAR_19)
    goto cleanup;
   break;
  }
  case 131:
  {
   *VAR_11 = FUNC_5(VAR_10->s_bdev->bd_inode) >>
    VAR_10->s_blocksize_bits;
   if (*VAR_11 == 0)
    FUNC_12("JFS: Cannot determine volume size\n");
   break;
  }
  case 141:
  {
   char *VAR_20 = VAR_16[0].from;
   if (!VAR_20 || !*VAR_20)
    goto cleanup;
   if (!FUNC_14(VAR_20, "continue")) {
    *VAR_12 &= ~VAR_3;
    *VAR_12 &= ~VAR_2;
    *VAR_12 |= VAR_1;
   } else if (!FUNC_14(VAR_20, "remount-ro")) {
    *VAR_12 &= ~VAR_1;
    *VAR_12 &= ~VAR_2;
    *VAR_12 |= VAR_3;
   } else if (!FUNC_14(VAR_20, "panic")) {
    *VAR_12 &= ~VAR_1;
    *VAR_12 &= ~VAR_3;
    *VAR_12 |= VAR_2;
   } else {
    FUNC_12("JFS: %s is an invalid error handler\n",
           VAR_20);
    goto cleanup;
   }
   break;
  }
  case 128:
  case 139:
  case 133:
   FUNC_12("JFS: quota operations not supported\n");
   break;

  case 130:
  {
   char *VAR_21 = VAR_16[0].from;
   uid_t VAR_22;
   int VAR_23 = FUNC_7(VAR_21, 0, &VAR_22);

   if (VAR_23)
    goto cleanup;
   VAR_15->uid = FUNC_10(FUNC_3(), VAR_22);
   if (!FUNC_16(VAR_15->uid))
    goto cleanup;
   break;
  }

  case 140:
  {
   char *VAR_24 = VAR_16[0].from;
   gid_t VAR_25;
   int VAR_26 = FUNC_7(VAR_24, 0, &VAR_25);

   if (VAR_26)
    goto cleanup;
   VAR_15->gid = FUNC_9(FUNC_3(), VAR_25);
   if (!FUNC_4(VAR_15->gid))
    goto cleanup;
   break;
  }

  case 129:
  {
   char *VAR_27 = VAR_16[0].from;
   int VAR_28 = FUNC_7(VAR_27, 8, &VAR_15->umask);

   if (VAR_28)
    goto cleanup;
   if (VAR_15->umask & ~0777) {
    FUNC_12("JFS: Invalid value of umask\n");
    goto cleanup;
   }
   break;
  }

  case 143:
  {
   struct request_queue *VAR_29 = FUNC_1(VAR_10->s_bdev);




   VAR_15->minblks_trim = 64;
   if (FUNC_2(VAR_29))
    *VAR_12 |= VAR_0;
   else
    FUNC_12("JFS: discard option not supported on device\n");
   break;
  }

  case 135:
   *VAR_12 &= ~VAR_0;
   break;

  case 142:
  {
   struct request_queue *VAR_30 = FUNC_1(VAR_10->s_bdev);
   char *VAR_31 = VAR_16[0].from;
   int VAR_32;
   if (FUNC_2(VAR_30)) {
    *VAR_12 |= VAR_0;
    VAR_32 = FUNC_7(VAR_31, 0,
      &VAR_15->minblks_trim);
    if (VAR_32)
     goto cleanup;
   } else
    FUNC_12("JFS: discard option not supported on device\n");
   break;
  }

  default:
   FUNC_13("jfs: Unrecognized mount option \"%s\" or missing value\n",
          VAR_14);
   goto cleanup;
  }
 }

 if (VAR_13 != (void *) -1) {

  FUNC_17(VAR_15->nls_tab);
  VAR_15->nls_tab = VAR_13;
 }
 return 1;

cleanup:
 if (VAR_13 && VAR_13 != (void *) -1)
  FUNC_17(VAR_13);
 return 0;
}

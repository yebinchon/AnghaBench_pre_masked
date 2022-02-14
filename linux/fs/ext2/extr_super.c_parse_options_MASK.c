
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct super_block {int dummy; } ;
struct ext2_mount_options {int s_mount_opt; int s_resgid; int s_resuid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct super_block*,int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 char* FUNC_9 (char**,char*) ;
 int VAR_21 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(char *VAR_22, struct super_block *VAR_23,
    struct ext2_mount_options *VAR_24)
{
 char *VAR_25;
 substring_t VAR_26[VAR_11];
 int VAR_27;
 kuid_t VAR_28;
 kgid_t VAR_29;

 if (!VAR_22)
  return 1;

 while ((VAR_25 = FUNC_9 (&VAR_22, ",")) != ((void*)0)) {
  int VAR_30;
  if (!*VAR_25)
   continue;

  VAR_30 = FUNC_7(VAR_25, VAR_21, VAR_26);
  switch (VAR_30) {
  case 154:
   FUNC_0 (VAR_24->s_mount_opt, VAR_12);
   break;
  case 145:
   FUNC_8 (VAR_24->s_mount_opt, VAR_12);
   break;
  case 148:
   FUNC_8 (VAR_24->s_mount_opt, VAR_6);
   break;
  case 141:
   FUNC_0 (VAR_24->s_mount_opt, VAR_6);
   break;
  case 132:
   if (FUNC_6(&VAR_26[0], &VAR_27))
    return 0;
   VAR_28 = FUNC_5(FUNC_1(), VAR_27);
   if (!FUNC_10(VAR_28)) {
    FUNC_2(VAR_23, VAR_8, "Invalid uid value %d", VAR_27);
    return 0;

   }
   VAR_24->s_resuid = VAR_28;
   break;
  case 133:
   if (FUNC_6(&VAR_26[0], &VAR_27))
    return 0;
   VAR_29 = FUNC_4(FUNC_1(), VAR_27);
   if (!FUNC_3(VAR_29)) {
    FUNC_2(VAR_23, VAR_8, "Invalid gid value %d", VAR_27);
    return 0;
   }
   VAR_24->s_resgid = VAR_29;
   break;
  case 131:


   break;
  case 150:
   FUNC_0 (VAR_24->s_mount_opt, VAR_3);
   FUNC_0 (VAR_24->s_mount_opt, VAR_5);
   FUNC_8 (VAR_24->s_mount_opt, VAR_4);
   break;
  case 149:
   FUNC_0 (VAR_24->s_mount_opt, VAR_3);
   FUNC_0 (VAR_24->s_mount_opt, VAR_4);
   FUNC_8 (VAR_24->s_mount_opt, VAR_5);
   break;
  case 151:
   FUNC_0 (VAR_24->s_mount_opt, VAR_5);
   FUNC_0 (VAR_24->s_mount_opt, VAR_4);
   FUNC_8 (VAR_24->s_mount_opt, VAR_3);
   break;
  case 139:
   FUNC_8 (VAR_24->s_mount_opt, VAR_14);
   break;
  case 142:
   FUNC_2(VAR_23, VAR_10,
    "Option nocheck/check=none is deprecated and"
    " will be removed in June 2020.");
   FUNC_0 (VAR_24->s_mount_opt, VAR_0);
   break;
  case 152:
   FUNC_8 (VAR_24->s_mount_opt, VAR_2);
   break;
  case 137:
   FUNC_8 (VAR_24->s_mount_opt, VAR_15);
   break;
  case 136:
   FUNC_0 (VAR_24->s_mount_opt, VAR_15);
   break;
  case 143:
   FUNC_8 (VAR_24->s_mount_opt, VAR_13);
   break;
  case 130:
  case 138:
   FUNC_2(VAR_23, VAR_9, "(no)user_xattr options"
    "not supported");
   break;
  case 155:
  case 144:
   FUNC_2(VAR_23, VAR_9,
    "(no)acl options not supported");
   break;

  case 128:
   FUNC_2(VAR_23, VAR_9, "use dax instead of xip");
   FUNC_8(VAR_24->s_mount_opt, VAR_20);

  case 153:





   FUNC_2(VAR_23, VAR_9, "dax option not supported");

   break;
  case 135:
  case 129:
  case 147:
   FUNC_2(VAR_23, VAR_9,
    "quota operations not supported");
   break;


  case 134:
   FUNC_8(VAR_24->s_mount_opt, VAR_17);
   FUNC_2(VAR_23, VAR_9, "reservations ON");
   break;
  case 140:
   FUNC_0(VAR_24->s_mount_opt, VAR_17);
   FUNC_2(VAR_23, VAR_9, "reservations OFF");
   break;
  case 146:
   break;
  default:
   return 0;
  }
 }
 return 1;
}

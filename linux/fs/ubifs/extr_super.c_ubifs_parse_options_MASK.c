
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int from; } ;
typedef TYPE_2__ substring_t ;
struct TYPE_5__ {int unmount_mode; int bulk_read; int chk_data_crc; int override_compr; int compr_type; } ;
struct ubifs_info {int bulk_read; int no_chk_data_crc; struct super_block* vfs_sb; void* auth_hash_name; void* auth_key_name; int assert_action; TYPE_1__ mount_opts; int default_compr; } ;
struct super_block {unsigned long s_flags; } ;


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
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ,int ) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,TYPE_2__*) ;
 unsigned long FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_11 ;
 int FUNC_7 (struct ubifs_info*,char*,char*) ;

__attribute__((used)) static int FUNC_8(struct ubifs_info *VAR_12, char *VAR_13,
          int VAR_14)
{
 char *VAR_15;
 substring_t VAR_16[VAR_6];

 if (!VAR_13)
  return 0;

 while ((VAR_15 = FUNC_6(&VAR_13, ","))) {
  int VAR_17;

  if (!*VAR_15)
   continue;

  VAR_17 = FUNC_3(VAR_15, VAR_11, VAR_16);
  switch (VAR_17) {





  case 133:
   VAR_12->mount_opts.unmount_mode = 2;
   break;
  case 129:
   VAR_12->mount_opts.unmount_mode = 1;
   break;
  case 135:
   VAR_12->mount_opts.bulk_read = 2;
   VAR_12->bulk_read = 1;
   break;
  case 131:
   VAR_12->mount_opts.bulk_read = 1;
   VAR_12->bulk_read = 0;
   break;
  case 134:
   VAR_12->mount_opts.chk_data_crc = 2;
   VAR_12->no_chk_data_crc = 0;
   break;
  case 130:
   VAR_12->mount_opts.chk_data_crc = 1;
   VAR_12->no_chk_data_crc = 1;
   break;
  case 128:
  {
   char *VAR_18 = FUNC_2(&VAR_16[0]);

   if (!VAR_18)
    return -VAR_4;
   if (!FUNC_5(VAR_18, "none"))
    VAR_12->mount_opts.compr_type = VAR_8;
   else if (!FUNC_5(VAR_18, "lzo"))
    VAR_12->mount_opts.compr_type = VAR_7;
   else if (!FUNC_5(VAR_18, "zlib"))
    VAR_12->mount_opts.compr_type = VAR_9;
   else if (!FUNC_5(VAR_18, "zstd"))
    VAR_12->mount_opts.compr_type = VAR_10;
   else {
    FUNC_7(VAR_12, "unknown compressor \"%s\"", VAR_18);
    FUNC_0(VAR_18);
    return -VAR_3;
   }
   FUNC_0(VAR_18);
   VAR_12->mount_opts.override_compr = 1;
   VAR_12->default_compr = VAR_12->mount_opts.compr_type;
   break;
  }
  case 138:
  {
   char *VAR_19 = FUNC_2(&VAR_16[0]);

   if (!VAR_19)
    return -VAR_4;
   if (!FUNC_5(VAR_19, "report"))
    VAR_12->assert_action = VAR_1;
   else if (!FUNC_5(VAR_19, "read-only"))
    VAR_12->assert_action = VAR_2;
   else if (!FUNC_5(VAR_19, "panic"))
    VAR_12->assert_action = VAR_0;
   else {
    FUNC_7(VAR_12, "unknown assert action \"%s\"", VAR_19);
    FUNC_0(VAR_19);
    return -VAR_3;
   }
   FUNC_0(VAR_19);
   break;
  }
  case 136:
   VAR_12->auth_key_name = FUNC_1(VAR_16[0].from, VAR_5);
   if (!VAR_12->auth_key_name)
    return -VAR_4;
   break;
  case 137:
   VAR_12->auth_hash_name = FUNC_1(VAR_16[0].from, VAR_5);
   if (!VAR_12->auth_hash_name)
    return -VAR_4;
   break;
  case 132:
   break;
  default:
  {
   unsigned long VAR_20;
   struct super_block *VAR_21 = VAR_12->vfs_sb;

   VAR_20 = FUNC_4(VAR_15);
   if (!VAR_20) {
    FUNC_7(VAR_12, "unrecognized mount option \"%s\" or missing value",
       VAR_15);
    return -VAR_3;
   }
   VAR_21->s_flags |= VAR_20;
   break;
  }
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_args {int ar_spectator; int ar_localflocks; int ar_meta; size_t ar_commit; size_t ar_statfs_quantum; size_t ar_quota_quantum; int ar_statfs_percent; int ar_loccookie; int ar_rgrplvb; int ar_nobarrier; int ar_errors; int ar_debug; int ar_discard; int ar_data; int ar_suiddir; int ar_quota; int ar_posix_acl; int ar_hostdata; int ar_locktable; int ar_lockproto; } ;
struct fs_parse_result {size_t int_32; int boolean; int uint_32; int negated; } ;
struct fs_parameter {int key; int string; } ;
struct fs_context {struct gfs2_args* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int VAR_4 ;
 int FUNC_1 (struct fs_context*,char*,...) ;
 int * VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fs_context *VAR_6, struct fs_parameter *VAR_7)
{
 struct gfs2_args *VAR_8 = VAR_6->fs_private;
 struct fs_parse_result VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, &VAR_4, VAR_7, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_10) {
 case 138:
  FUNC_2(VAR_8->ar_lockproto, VAR_7->string, VAR_1);
  break;
 case 137:
  FUNC_2(VAR_8->ar_locktable, VAR_7->string, VAR_1);
  break;
 case 143:
  FUNC_2(VAR_8->ar_hostdata, VAR_7->string, VAR_1);
  break;
 case 132:
  VAR_8->ar_spectator = 1;
  break;
 case 142:

  break;
 case 140:
  VAR_8->ar_localflocks = 1;
  break;
 case 141:

  break;
 case 146:
  if (VAR_9.boolean && VAR_8->ar_errors == VAR_0)
   return FUNC_1(VAR_6, "gfs2: -o debug and -o errors=panic are mutually exclusive");
  VAR_8->ar_debug = VAR_9.boolean;
  break;
 case 128:

  break;
 case 150:
  VAR_8->ar_posix_acl = VAR_9.boolean;
  break;
 case 135:




  if (VAR_9.negated)
   VAR_8->ar_quota = VAR_2;
  else if (VAR_9.int_32 > 0)
   VAR_8->ar_quota = VAR_5[VAR_9.int_32];
  else
   VAR_8->ar_quota = VAR_3;
  break;
 case 129:
  VAR_8->ar_suiddir = VAR_9.boolean;
  break;
 case 147:

  VAR_8->ar_data = VAR_9.uint_32;
  break;
 case 136:
  VAR_8->ar_meta = 1;
  break;
 case 145:
  VAR_8->ar_discard = VAR_9.boolean;
  break;
 case 148:
  if (VAR_9.int_32 <= 0)
   return FUNC_1(VAR_6, "gfs2: commit mount option requires a positive numeric argument");
  VAR_8->ar_commit = VAR_9.int_32;
  break;
 case 130:
  if (VAR_9.int_32 < 0)
   return FUNC_1(VAR_6, "gfs2: statfs_quantum mount option requires a non-negative numeric argument");
  VAR_8->ar_statfs_quantum = VAR_9.int_32;
  break;
 case 134:
  if (VAR_9.int_32 <= 0)
   return FUNC_1(VAR_6, "gfs2: quota_quantum mount option requires a positive numeric argument");
  VAR_8->ar_quota_quantum = VAR_9.int_32;
  break;
 case 131:
  if (VAR_9.int_32 < 0 || VAR_9.int_32 > 100)
   return FUNC_1(VAR_6, "gfs2: statfs_percent mount option requires a numeric argument between 0 and 100");
  VAR_8->ar_statfs_percent = VAR_9.int_32;
  break;
 case 144:
  if (VAR_8->ar_debug && VAR_9.uint_32 == VAR_0)
   return FUNC_1(VAR_6, "gfs2: -o debug and -o errors=panic are mutually exclusive");
  VAR_8->ar_errors = VAR_9.uint_32;
  break;
 case 149:
  VAR_8->ar_nobarrier = VAR_9.boolean;
  break;
 case 133:
  VAR_8->ar_rgrplvb = VAR_9.boolean;
  break;
 case 139:
  VAR_8->ar_loccookie = VAR_9.boolean;
  break;
 default:
  return FUNC_1(VAR_6, "gfs2: invalid mount option: %s", VAR_7->key);
 }
 return 0;
}

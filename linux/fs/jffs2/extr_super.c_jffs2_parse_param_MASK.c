
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int compr; int override_compr; int rp_size; } ;
struct jffs2_sb_info {TYPE_2__ mount_opts; TYPE_1__* mtd; } ;
struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {struct jffs2_sb_info* s_fs_info; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_1 (struct fs_context*,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_3, struct fs_parameter *VAR_4)
{
 struct fs_parse_result VAR_5;
 struct jffs2_sb_info *VAR_6 = VAR_3->s_fs_info;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_2, VAR_4, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_7) {
 case 129:
  VAR_6->mount_opts.compr = VAR_5.uint_32;
  VAR_6->mount_opts.override_compr = 1;
  break;
 case 128:
  if (VAR_5.uint_32 > VAR_1 / 1024)
   return FUNC_1(VAR_3, "jffs2: rp_size unrepresentable");
  VAR_7 = VAR_5.uint_32 * 1024;
  if (VAR_7 > VAR_6->mtd->size)
   return FUNC_1(VAR_3, "jffs2: Too large reserve pool specified, max is %llu KB",
          VAR_6->mtd->size / 1024);
  VAR_6->mount_opts.rp_size = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}

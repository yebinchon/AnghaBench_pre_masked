
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct ramfs_fs_info {TYPE_1__ mount_opts; } ;
struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {struct ramfs_fs_info* s_fs_info; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_3, struct fs_parameter *VAR_4)
{
 struct fs_parse_result VAR_5;
 struct ramfs_fs_info *VAR_6 = VAR_3->s_fs_info;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_2, VAR_4, &VAR_5);
 if (VAR_7 < 0) {






  if (VAR_7 == -VAR_0)
   VAR_7 = 0;
  return VAR_7;
 }

 switch (VAR_7) {
 case 128:
  VAR_6->mount_opts.mode = VAR_5.uint_32 & VAR_1;
  break;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_parse_result {int uint_32; int boolean; } ;
struct fs_parameter {int key; } ;
struct fs_context {struct ffs_sb_fill_data* fs_private; } ;
struct TYPE_2__ {int mode; int gid; int uid; } ;
struct ffs_sb_fill_data {int root_mode; TYPE_1__ perms; int no_disconnect; } ;


 int VAR_0 ;
 int FUNC_0 () ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fs_context*,char*,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct fs_context *VAR_4, struct fs_parameter *VAR_5)
{
 struct ffs_sb_fill_data *VAR_6 = VAR_4->fs_private;
 struct fs_parse_result VAR_7;
 int VAR_8;

 FUNC_0();

 VAR_8 = FUNC_2(VAR_4, &VAR_3, VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_8) {
 case 130:
  VAR_6->no_disconnect = VAR_7.boolean;
  break;
 case 129:
  VAR_6->root_mode = (VAR_7.uint_32 & 0555) | VAR_1;
  break;
 case 133:
  VAR_6->perms.mode = (VAR_7.uint_32 & 0666) | VAR_2;
  break;
 case 131:
  VAR_6->root_mode = (VAR_7.uint_32 & 0555) | VAR_1;
  VAR_6->perms.mode = (VAR_7.uint_32 & 0666) | VAR_2;
  break;

 case 128:
  VAR_6->perms.uid = FUNC_6(FUNC_1(), VAR_7.uint_32);
  if (!FUNC_7(VAR_6->perms.uid))
   goto unmapped_value;
  break;
 case 132:
  VAR_6->perms.gid = FUNC_5(FUNC_1(), VAR_7.uint_32);
  if (!FUNC_3(VAR_6->perms.gid))
   goto unmapped_value;
  break;

 default:
  return -VAR_0;
 }

 return 0;

unmapped_value:
 return FUNC_4(VAR_4, "%s: unmapped value: %u", VAR_5->key, VAR_7.uint_32);
}

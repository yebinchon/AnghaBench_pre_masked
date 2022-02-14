
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_fs_context {int fd_present; int rootmode_present; int user_id_present; int group_id_present; int default_permissions; int allow_other; int blksize; int is_bdev; int max_read; int group_id; int user_id; int rootmode; int fd; int * subtype; } ;
struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int * string; } ;
struct fs_context {int user_ns; int * source; struct fuse_fs_context* fs_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fs_context*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct fs_context *VAR_2, struct fs_parameter *VAR_3)
{
 struct fs_parse_result VAR_4;
 struct fuse_fs_context *VAR_5 = VAR_2->fs_private;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_1, VAR_3, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_6) {
 case 130:
  if (VAR_2->source)
   return FUNC_3(VAR_2, "fuse: Multiple sources specified");
  VAR_2->source = VAR_3->string;
  VAR_3->string = ((void*)0);
  break;

 case 129:
  if (VAR_5->subtype)
   return FUNC_3(VAR_2, "fuse: Multiple subtypes specified");
  VAR_5->subtype = VAR_3->string;
  VAR_3->string = ((void*)0);
  return 0;

 case 134:
  VAR_5->fd = VAR_4.uint_32;
  VAR_5->fd_present = 1;
  break;

 case 131:
  if (!FUNC_1(VAR_4.uint_32))
   return FUNC_3(VAR_2, "fuse: Invalid rootmode");
  VAR_5->rootmode = VAR_4.uint_32;
  VAR_5->rootmode_present = 1;
  break;

 case 128:
  VAR_5->user_id = FUNC_5(VAR_2->user_ns, VAR_4.uint_32);
  if (!FUNC_6(VAR_5->user_id))
   return FUNC_3(VAR_2, "fuse: Invalid user_id");
  VAR_5->user_id_present = 1;
  break;

 case 133:
  VAR_5->group_id = FUNC_4(VAR_2->user_ns, VAR_4.uint_32);
  if (!FUNC_2(VAR_5->group_id))
   return FUNC_3(VAR_2, "fuse: Invalid group_id");
  VAR_5->group_id_present = 1;
  break;

 case 135:
  VAR_5->default_permissions = 1;
  break;

 case 137:
  VAR_5->allow_other = 1;
  break;

 case 132:
  VAR_5->max_read = VAR_4.uint_32;
  break;

 case 136:
  if (!VAR_5->is_bdev)
   return FUNC_3(VAR_2, "fuse: blksize only supported for fuseblk");
  VAR_5->blksize = VAR_4.uint_32;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}

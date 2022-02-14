
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_fs_context {int mask; int hidepid; int gid; } ;
struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {struct proc_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_1 (struct fs_context*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_4, struct fs_parameter *VAR_5)
{
 struct proc_fs_context *VAR_6 = VAR_4->fs_private;
 struct fs_parse_result VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, &VAR_3, VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_8) {
 case 129:
  VAR_6->gid = VAR_7.uint_32;
  break;

 case 128:
  VAR_6->hidepid = VAR_7.uint_32;
  if (VAR_6->hidepid < VAR_2 ||
      VAR_6->hidepid > VAR_1)
   return FUNC_1(VAR_4, "proc: hidepid value must be between 0 and 2.\n");
  break;

 default:
  return -VAR_0;
 }

 VAR_6->mask |= 1 << VAR_8;
 return 0;
}

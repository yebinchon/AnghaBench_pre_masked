
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {struct bpf_mount_opts* fs_private; } ;
struct bpf_mount_opts {int mode; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_3, struct fs_parameter *VAR_4)
{
 struct bpf_mount_opts *VAR_5 = VAR_3->fs_private;
 struct fs_parse_result VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_2, VAR_4, &VAR_6);
 if (VAR_7 < 0)




  return VAR_7 == -VAR_0 ? 0 : VAR_7;

 switch (VAR_7) {
 case 128:
  VAR_5->mode = VAR_6.uint_32 & VAR_1;
  break;
 }

 return 0;
}

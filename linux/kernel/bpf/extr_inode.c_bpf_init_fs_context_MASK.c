
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int * ops; struct bpf_mount_opts* fs_private; } ;
struct bpf_mount_opts {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_mount_opts* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_4)
{
 struct bpf_mount_opts *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct bpf_mount_opts), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->mode = VAR_2;

 VAR_4->fs_private = VAR_5;
 VAR_4->ops = &VAR_3;
 return 0;
}

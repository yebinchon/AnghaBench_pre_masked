
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_descr {char* member_0; } ;
struct super_block {TYPE_1__* s_root; int * s_op; } ;
struct inode {int i_mode; int * i_op; } ;
struct fs_context {struct bpf_mount_opts* fs_private; } ;
struct bpf_mount_opts {int mode; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct super_block*,int ,struct tree_descr const*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_5, struct fs_context *VAR_6)
{
 static const struct tree_descr VAR_7[] = { { "" } };
 struct bpf_mount_opts *VAR_8 = VAR_6->fs_private;
 struct inode *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_0, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_5->s_op = &VAR_4;

 VAR_9 = VAR_5->s_root->d_inode;
 VAR_9->i_op = &VAR_3;
 VAR_9->i_mode &= ~VAR_1;
 VAR_9->i_mode |= VAR_2 | VAR_8->mode;

 return 0;
}

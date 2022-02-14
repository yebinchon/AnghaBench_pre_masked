
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct ns_get_path_bpf_map_args {struct bpf_map_info* info; int offmap; } ;
struct inode {int i_ino; TYPE_2__* i_sb; } ;
struct bpf_map_info {int netns_ino; int netns_dev; int ifindex; } ;
struct bpf_map {int dummy; } ;
struct TYPE_4__ {int s_dev; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int FUNC_2 (struct bpf_map*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct path*,int ,struct ns_get_path_bpf_map_args*) ;
 int FUNC_5 (struct path*) ;

int FUNC_6(struct bpf_map_info *VAR_2, struct bpf_map *VAR_3)
{
 struct ns_get_path_bpf_map_args VAR_4 = {
  .offmap = FUNC_2(VAR_3),
  .info = VAR_2,
 };
 struct inode *VAR_5;
 struct path VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_4(&VAR_6, VAR_1, &VAR_4);
 if (FUNC_0(VAR_7)) {
  if (!VAR_2->ifindex)
   return -VAR_0;
  return FUNC_1(VAR_7);
 }

 VAR_5 = VAR_6.dentry->d_inode;
 VAR_2->netns_dev = FUNC_3(VAR_5->i_sb->s_dev);
 VAR_2->netns_ino = VAR_5->i_ino;
 FUNC_5(&VAR_6);

 return 0;
}

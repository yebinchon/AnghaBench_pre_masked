
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int user_ns; } ;
struct kernfs_fs_context {int magic; int root; struct net* ns_tag; } ;
struct fs_context {int sb_flags; int global; int user_ns; int * ops; struct kernfs_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (int ) ;
 struct kernfs_fs_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct fs_context *VAR_8)
{
 struct kernfs_fs_context *VAR_9;
 struct net *VAR_10;

 if (!(VAR_8->sb_flags & VAR_4)) {
  if (!FUNC_1(VAR_3))
   return -VAR_1;
 }

 VAR_9 = FUNC_3(sizeof(struct kernfs_fs_context), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->ns_tag = VAR_10 = FUNC_2(VAR_3);
 VAR_9->root = VAR_7;
 VAR_9->magic = VAR_5;
 VAR_8->fs_private = VAR_9;
 VAR_8->ops = &VAR_6;
 if (VAR_10) {
  FUNC_4(VAR_8->user_ns);
  VAR_8->user_ns = FUNC_0(VAR_10->user_ns);
 }
 VAR_8->global = 1;
 return 0;
}

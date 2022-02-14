
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_root_dir; int sd_master_dir; } ;
struct gfs2_args {scalar_t__ ar_meta; } ;
struct fs_context {TYPE_2__* root; struct gfs2_args* fs_private; } ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {struct gfs2_sbd* s_fs_info; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct fs_context*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct fs_context *VAR_1)
{
 struct gfs2_args *VAR_2 = VAR_1->fs_private;
 struct gfs2_sbd *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_3 = VAR_1->root->d_sb->s_fs_info;
 FUNC_1(VAR_1->root);
 if (VAR_2->ar_meta)
  VAR_1->root = FUNC_0(VAR_3->sd_master_dir);
 else
  VAR_1->root = FUNC_0(VAR_3->sd_root_dir);
 return 0;
}

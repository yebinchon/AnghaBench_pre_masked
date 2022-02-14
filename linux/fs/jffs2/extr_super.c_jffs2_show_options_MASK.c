
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct jffs2_mount_opts {int rp_size; int compr; scalar_t__ override_compr; } ;
struct jffs2_sb_info {struct jffs2_mount_opts mount_opts; } ;
struct dentry {int d_sb; } ;


 struct jffs2_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct dentry *VAR_1)
{
 struct jffs2_sb_info *VAR_2 = FUNC_0(VAR_1->d_sb);
 struct jffs2_mount_opts *VAR_3 = &VAR_2->mount_opts;

 if (VAR_3->override_compr)
  FUNC_2(VAR_0, ",compr=%s", FUNC_1(VAR_3->compr));
 if (VAR_3->rp_size)
  FUNC_2(VAR_0, ",rp_size=%u", VAR_3->rp_size / 1024);

 return 0;
}

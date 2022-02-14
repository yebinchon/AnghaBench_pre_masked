
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_mtd; struct cramfs_sb_info* s_fs_info; } ;
struct fs_context {int dummy; } ;
struct cramfs_super {int root; } ;
struct cramfs_sb_info {int mtd_point_size; int size; int linear_phys_addr; int linear_virt_addr; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct super_block*,int *) ;
 int FUNC_1 (struct super_block*,struct fs_context*,struct cramfs_super*) ;
 struct cramfs_sb_info* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,...) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_4, struct fs_context *VAR_5)
{
 struct cramfs_sb_info *VAR_6;
 struct cramfs_super VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(sizeof(struct cramfs_sb_info), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_4->s_fs_info = VAR_6;


 VAR_8 = FUNC_3(VAR_4->s_mtd, 0, VAR_3, &VAR_6->mtd_point_size,
   &VAR_6->linear_virt_addr, &VAR_6->linear_phys_addr);
 if (VAR_8 || VAR_6->mtd_point_size != VAR_3) {
  FUNC_5("unable to get direct memory access to mtd:%s\n",
         VAR_4->s_mtd->name);
  return VAR_8 ? : -VAR_0;
 }

 FUNC_6("checking physical address %pap for linear cramfs image\n",
  VAR_6->linear_phys_addr);
 VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_6("linear cramfs image on mtd:%s appears to be %lu KB in size\n",
  VAR_4->s_mtd->name, VAR_6->size/1024);
 FUNC_4(VAR_4->s_mtd, 0, VAR_3);
 VAR_8 = FUNC_3(VAR_4->s_mtd, 0, VAR_6->size, &VAR_6->mtd_point_size,
   &VAR_6->linear_virt_addr, &VAR_6->linear_phys_addr);
 if (VAR_8 || VAR_6->mtd_point_size != VAR_6->size) {
  FUNC_5("unable to get direct memory access to mtd:%s\n",
         VAR_4->s_mtd->name);
  return VAR_8 ? : -VAR_0;
 }

 return FUNC_0(VAR_4, &VAR_7.root);
}

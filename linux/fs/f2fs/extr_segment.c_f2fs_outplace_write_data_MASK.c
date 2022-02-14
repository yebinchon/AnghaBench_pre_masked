
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int io_type; int new_blkaddr; int version; struct f2fs_sb_info* sbi; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; int ofs_in_node; int nid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct f2fs_summary*,struct f2fs_io_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int) ;
 int FUNC_2 (struct dnode_of_data*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_4 (struct f2fs_summary*,int ,int ,int ) ;

void FUNC_5(struct dnode_of_data *VAR_2,
     struct f2fs_io_info *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = VAR_3->sbi;
 struct f2fs_summary VAR_5;

 FUNC_1(VAR_4, VAR_2->data_blkaddr == VAR_1);
 FUNC_4(&VAR_5, VAR_2->nid, VAR_2->ofs_in_node, VAR_3->version);
 FUNC_0(&VAR_5, VAR_3);
 FUNC_2(VAR_2, VAR_3->new_blkaddr);

 FUNC_3(VAR_4, VAR_3->io_type, VAR_0);
}

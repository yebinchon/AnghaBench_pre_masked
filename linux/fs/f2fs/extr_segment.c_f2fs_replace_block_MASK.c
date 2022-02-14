
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int ofs_in_node; int nid; } ;
typedef int block_t ;


 int FUNC_0 (struct f2fs_sb_info*,struct f2fs_summary*,int ,int ,int,int) ;
 int FUNC_1 (struct dnode_of_data*,int ) ;
 int FUNC_2 (struct f2fs_summary*,int ,int ,unsigned char) ;

void FUNC_3(struct f2fs_sb_info *VAR_0, struct dnode_of_data *VAR_1,
    block_t VAR_2, block_t VAR_3,
    unsigned char VAR_4, bool VAR_5,
    bool VAR_6)
{
 struct f2fs_summary VAR_7;

 FUNC_2(&VAR_7, VAR_1->nid, VAR_1->ofs_in_node, VAR_4);

 FUNC_0(VAR_0, &VAR_7, VAR_2, VAR_3,
     VAR_5, VAR_6);

 FUNC_1(VAR_1, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_summary_block {struct f2fs_summary* entries; } ;
struct f2fs_summary {scalar_t__ ofs_in_node; scalar_t__ version; int nid; } ;
struct f2fs_sb_info {int blocks_per_seg; } ;
struct TYPE_2__ {int nid; } ;
struct f2fs_node {TYPE_1__ footer; } ;
typedef int block_t ;


 int VAR_0 ;
 struct f2fs_node* FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct f2fs_sb_info*,unsigned int) ;
 struct page* FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct page*,int) ;
 int FUNC_7 (struct f2fs_sb_info*,int,int,int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int,int ) ;

int FUNC_10(struct f2fs_sb_info *VAR_2,
   unsigned int VAR_3, struct f2fs_summary_block *VAR_4)
{
 struct f2fs_node *VAR_5;
 struct f2fs_summary *VAR_6;
 block_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_10 = VAR_2->blocks_per_seg;
 VAR_7 = FUNC_4(VAR_2, VAR_3);
 VAR_6 = &VAR_4->entries[0];

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 += VAR_11, VAR_7 += VAR_11) {
  VAR_11 = FUNC_9(VAR_10 - VAR_8, VAR_0);


  FUNC_7(VAR_2, VAR_7, VAR_11, VAR_1, 1);

  for (VAR_9 = VAR_7; VAR_9 < VAR_7 + VAR_11; VAR_9++) {
   struct page *VAR_12 = FUNC_5(VAR_2, VAR_9);

   if (FUNC_1(VAR_12))
    return FUNC_3(VAR_12);

   VAR_5 = FUNC_0(VAR_12);
   VAR_6->nid = VAR_5->footer.nid;
   VAR_6->version = 0;
   VAR_6->ofs_in_node = 0;
   VAR_6++;
   FUNC_6(VAR_12, 1);
  }

  FUNC_8(FUNC_2(VAR_2), VAR_7,
       VAR_7 + VAR_11);
 }
 return 0;
}

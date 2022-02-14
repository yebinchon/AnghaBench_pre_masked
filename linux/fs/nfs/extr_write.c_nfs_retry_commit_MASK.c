
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs_page {int wb_page; } ;
struct nfs_commit_info {int dreq; } ;
struct list_head {int next; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int ) ;
 struct nfs_page* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*,struct pnfs_layout_segment*,struct nfs_commit_info*,int ) ;
 int FUNC_5 (struct nfs_page*) ;

void FUNC_6(struct list_head *VAR_0,
        struct pnfs_layout_segment *VAR_1,
        struct nfs_commit_info *VAR_2,
        u32 VAR_3)
{
 struct nfs_page *VAR_4;

 while (!FUNC_0(VAR_0)) {
  VAR_4 = FUNC_2(VAR_0->next);
  FUNC_3(VAR_4);
  FUNC_4(VAR_4, VAR_1, VAR_2, VAR_3);
  if (!VAR_2->dreq)
   FUNC_1(VAR_4->wb_page);
  FUNC_5(VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct node_info {scalar_t__ blk_addr; } ;
struct f2fs_summary {int nid; } ;
struct f2fs_sb_info {int blocks_per_seg; int * wb_sync_req; } ;
typedef int nid_t ;
typedef scalar_t__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,unsigned int,int) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ,struct node_info*) ;
 struct page* FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct f2fs_sb_info*,int ,int,int ,int) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct f2fs_sb_info*,int,int) ;

__attribute__((used)) static int FUNC_15(struct f2fs_sb_info *VAR_4,
  struct f2fs_summary *VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct f2fs_summary *VAR_8;
 block_t VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 bool VAR_12 = (VAR_7 == VAR_1);
 int VAR_13 = 0;

 VAR_9 = FUNC_2(VAR_4, VAR_6);

next_step:
 VAR_8 = VAR_5;

 if (VAR_12 && VAR_11 == 2)
  FUNC_4(&VAR_4->wb_sync_req[VAR_3]);

 for (VAR_10 = 0; VAR_10 < VAR_4->blocks_per_seg; VAR_10++, VAR_8++) {
  nid_t VAR_14 = FUNC_13(VAR_8->nid);
  struct page *VAR_15;
  struct node_info VAR_16;
  int VAR_17;


  if (VAR_7 == VAR_0 && FUNC_12(VAR_4, 0, 0))
   return VAR_13;

  if (FUNC_5(VAR_4, VAR_6, VAR_10) == 0)
   continue;

  if (VAR_11 == 0) {
   FUNC_10(VAR_4, FUNC_1(VAR_14), 1,
       VAR_2, 1);
   continue;
  }

  if (VAR_11 == 1) {
   FUNC_11(VAR_4, VAR_14);
   continue;
  }


  VAR_15 = FUNC_7(VAR_4, VAR_14);
  if (FUNC_0(VAR_15))
   continue;


  if (FUNC_5(VAR_4, VAR_6, VAR_10) == 0) {
   FUNC_9(VAR_15, 1);
   continue;
  }

  if (FUNC_6(VAR_4, VAR_14, &VAR_16)) {
   FUNC_9(VAR_15, 1);
   continue;
  }

  if (VAR_16.blk_addr != VAR_9 + VAR_10) {
   FUNC_9(VAR_15, 1);
   continue;
  }

  VAR_17 = FUNC_8(VAR_15, VAR_7);
  if (!VAR_17 && VAR_7 == VAR_1)
   VAR_13++;
  FUNC_14(VAR_4, 1, VAR_7);
 }

 if (++VAR_11 < 3)
  goto next_step;

 if (VAR_12)
  FUNC_3(&VAR_4->wb_sync_req[VAR_3]);
 return VAR_13;
}

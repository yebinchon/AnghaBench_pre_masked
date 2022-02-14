
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; int pages_skipped; int nr_to_write; } ;
struct f2fs_sb_info {int * wb_sync_req; } ;
struct blk_plug {int dummy; } ;
struct address_space {int host; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct address_space*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct blk_plug*) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*,struct writeback_control*,int,int ) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (long,int ) ;
 scalar_t__ FUNC_11 (struct f2fs_sb_info*,size_t) ;
 long FUNC_12 (struct f2fs_sb_info*,size_t,struct writeback_control*) ;
 int FUNC_13 (int ,struct writeback_control*,size_t) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct address_space *VAR_5,
       struct writeback_control *VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_5);
 struct blk_plug VAR_8;
 long VAR_9;

 if (FUNC_14(FUNC_9(VAR_7, VAR_3)))
  goto skip_write;


 FUNC_6(VAR_7);


 if (VAR_6->sync_mode != VAR_4 &&
   FUNC_8(VAR_7, VAR_0) <
     FUNC_11(VAR_7, VAR_2))
  goto skip_write;

 if (VAR_6->sync_mode == VAR_4)
  FUNC_2(&VAR_7->wb_sync_req[VAR_2]);
 else if (FUNC_3(&VAR_7->wb_sync_req[VAR_2]))
  goto skip_write;

 FUNC_13(VAR_5->host, VAR_6, VAR_2);

 VAR_9 = FUNC_12(VAR_7, VAR_2, VAR_6);
 FUNC_5(&VAR_8);
 FUNC_7(VAR_7, VAR_6, 1, VAR_1);
 FUNC_4(&VAR_8);
 VAR_6->nr_to_write = FUNC_10((long)0, VAR_6->nr_to_write - VAR_9);

 if (VAR_6->sync_mode == VAR_4)
  FUNC_1(&VAR_7->wb_sync_req[VAR_2]);
 return 0;

skip_write:
 VAR_6->pages_skipped += FUNC_8(VAR_7, VAR_0);
 FUNC_13(VAR_5->host, VAR_6, VAR_2);
 return 0;
}

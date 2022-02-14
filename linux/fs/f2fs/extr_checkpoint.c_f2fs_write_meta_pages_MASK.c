
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; long nr_to_write; int pages_skipped; } ;
struct f2fs_sb_info {int cp_mutex; } ;
struct address_space {int host; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct address_space*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_1 (struct f2fs_sb_info*,int ,long,int ) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 long FUNC_4 (long,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*,int ) ;
 long FUNC_8 (struct f2fs_sb_info*,int ,struct writeback_control*) ;
 int FUNC_9 (int ,struct writeback_control*,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct address_space *VAR_5,
    struct writeback_control *VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_5);
 long VAR_8, VAR_9;

 if (FUNC_10(FUNC_3(VAR_7, VAR_3)))
  goto skip_write;


 if (VAR_6->sync_mode != VAR_4 &&
   FUNC_2(VAR_7, VAR_0) <
     FUNC_7(VAR_7, VAR_2))
  goto skip_write;


 if (!FUNC_5(&VAR_7->cp_mutex))
  goto skip_write;

 FUNC_9(VAR_5->host, VAR_6, VAR_2);
 VAR_8 = FUNC_8(VAR_7, VAR_2, VAR_6);
 VAR_9 = FUNC_1(VAR_7, VAR_2, VAR_6->nr_to_write, VAR_1);
 FUNC_6(&VAR_7->cp_mutex);
 VAR_6->nr_to_write = FUNC_4((long)0, VAR_6->nr_to_write - VAR_9 - VAR_8);
 return 0;

skip_write:
 VAR_6->pages_skipped += FUNC_2(VAR_7, VAR_0);
 FUNC_9(VAR_5->host, VAR_6, VAR_2);
 return 0;
}

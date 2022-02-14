
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sb; int ns_blocksize; int ns_bdev; } ;
struct nilfs_recovery_info {int ri_lsegs_start; int ri_super_root; } ;
struct buffer_head {int b_size; int b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct the_nilfs*,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct the_nilfs *VAR_1,
          struct nilfs_recovery_info *VAR_2)
{
 struct buffer_head *VAR_3;
 int VAR_4;

 if (FUNC_4(VAR_1, VAR_2->ri_lsegs_start) !=
     FUNC_4(VAR_1, VAR_2->ri_super_root))
  return;

 VAR_3 = FUNC_1(VAR_1->ns_bdev, VAR_2->ri_lsegs_start, VAR_1->ns_blocksize);
 FUNC_0(!VAR_3);
 FUNC_3(VAR_3->b_data, 0, VAR_3->b_size);
 FUNC_6(VAR_3);
 VAR_4 = FUNC_7(VAR_3);
 if (FUNC_8(VAR_4))
  FUNC_5(VAR_1->ns_sb, VAR_0,
     "buffer sync write failed during post-cleaning of recovery.");
 FUNC_2(VAR_3);
}

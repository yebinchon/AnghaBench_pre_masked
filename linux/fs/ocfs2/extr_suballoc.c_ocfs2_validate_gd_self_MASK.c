
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_group_desc {int bg_signature; int bg_size; int bg_bits; int bg_free_bits_count; int bg_generation; int bg_blkno; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {int fs_generation; } ;


 int FUNC_0 (struct ocfs2_group_desc*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*,unsigned long long,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_0,
      struct buffer_head *VAR_1,
      int VAR_2)
{
 struct ocfs2_group_desc *VAR_3 = (struct ocfs2_group_desc *)VAR_1->b_data;

 if (!FUNC_0(VAR_3)) {
  FUNC_2("Group descriptor #%llu has bad signature %.*s\n",
    (unsigned long long)VAR_1->b_blocknr, 7,
    VAR_3->bg_signature);
 }

 if (FUNC_5(VAR_3->bg_blkno) != VAR_1->b_blocknr) {
  FUNC_2("Group descriptor #%llu has an invalid bg_blkno of %llu\n",
    (unsigned long long)VAR_1->b_blocknr,
    (unsigned long long)FUNC_5(VAR_3->bg_blkno));
 }

 if (FUNC_4(VAR_3->bg_generation) != FUNC_1(VAR_0)->fs_generation) {
  FUNC_2("Group descriptor #%llu has an invalid fs_generation of #%u\n",
    (unsigned long long)VAR_1->b_blocknr,
    FUNC_4(VAR_3->bg_generation));
 }

 if (FUNC_3(VAR_3->bg_free_bits_count) > FUNC_3(VAR_3->bg_bits)) {
  FUNC_2("Group descriptor #%llu has bit count %u but claims that %u are free\n",
    (unsigned long long)VAR_1->b_blocknr,
    FUNC_3(VAR_3->bg_bits),
    FUNC_3(VAR_3->bg_free_bits_count));
 }

 if (FUNC_3(VAR_3->bg_bits) > (8 * FUNC_3(VAR_3->bg_size))) {
  FUNC_2("Group descriptor #%llu has bit count %u but max bitmap bits of %u\n",
    (unsigned long long)VAR_1->b_blocknr,
    FUNC_3(VAR_3->bg_bits),
    8 * FUNC_3(VAR_3->bg_size));
 }

 return 0;
}

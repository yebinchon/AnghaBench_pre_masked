
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int dnode_secno ;
typedef int __le32 ;
struct TYPE_2__ {int sb_dirband_start; int sb_dirband_size; scalar_t__ sb_chk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*,char*,int) ;
 int FUNC_4 (struct super_block*,int,int) ;
 int * FUNC_5 (struct super_block*,struct quad_buffer_head*) ;
 int FUNC_6 (struct quad_buffer_head*) ;
 TYPE_1__* FUNC_7 (struct super_block*) ;

void FUNC_8(struct super_block *VAR_0, dnode_secno VAR_1)
{
 if (FUNC_7(VAR_0)->sb_chk) if (VAR_1 & 3) {
  FUNC_3(VAR_0, "hpfs_free_dnode: dnode %08x not aligned", VAR_1);
  return;
 }
 if (VAR_1 < FUNC_7(VAR_0)->sb_dirband_start ||
     VAR_1 >= FUNC_7(VAR_0)->sb_dirband_start + FUNC_7(VAR_0)->sb_dirband_size) {
  FUNC_4(VAR_0, VAR_1, 4);
 } else {
  struct quad_buffer_head VAR_2;
  __le32 *VAR_3;
  unsigned VAR_4 = (VAR_1 - FUNC_7(VAR_0)->sb_dirband_start) / 4;
  if (!(VAR_3 = FUNC_5(VAR_0, &VAR_2))) {
   return;
  }
  VAR_3[VAR_4 >> 5] |= FUNC_0(1 << (VAR_4 & 0x1f));
  FUNC_6(&VAR_2);
  FUNC_1(&VAR_2);
  FUNC_2(VAR_0, VAR_1);
 }
}

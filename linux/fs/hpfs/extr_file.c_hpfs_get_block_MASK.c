
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__ i_blocks; int i_ino; } ;
struct buffer_head {int b_size; } ;
typedef int sector_t ;
typedef int secno ;
struct TYPE_2__ {int mmu_private; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (struct inode*,int,unsigned int*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 unsigned int FUNC_6 (int ,int,unsigned int) ;
 int FUNC_7 (int ,int ,int,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct buffer_head*,int ,int) ;
 int FUNC_10 (struct buffer_head*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_2, sector_t VAR_3, struct buffer_head *VAR_4, int VAR_5)
{
 int VAR_6;
 secno VAR_7;
 unsigned VAR_8;
 FUNC_4(VAR_2->i_sb);
 VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_8);
 if (VAR_7) {
  if (VAR_4->b_size >> 9 < VAR_8)
   VAR_8 = VAR_4->b_size >> 9;
  VAR_8 = FUNC_6(VAR_2->i_sb, VAR_7, VAR_8);
  if (FUNC_11(!VAR_8)) {
   VAR_7 = FUNC_5(VAR_2->i_sb, VAR_7);
   VAR_8 = 1;
  }
  FUNC_9(VAR_4, VAR_2->i_sb, VAR_7);
  VAR_4->b_size = VAR_8 << 9;
  goto ret_0;
 }
 if (!VAR_5) goto ret_0;
 if (VAR_3<<9 != FUNC_3(VAR_2)->mmu_private) {
  FUNC_0();
  VAR_6 = -VAR_0;
  goto ret_r;
 }
 if ((VAR_7 = FUNC_1(VAR_2->i_sb, VAR_2->i_ino, 1, VAR_2->i_blocks - 1)) == -1) {
  FUNC_7(VAR_2->i_sb, VAR_2->i_ino, 1, VAR_2->i_blocks - 1);
  VAR_6 = -VAR_1;
  goto ret_r;
 }
 VAR_2->i_blocks++;
 FUNC_3(VAR_2)->mmu_private += 512;
 FUNC_10(VAR_4);
 FUNC_9(VAR_4, VAR_2->i_sb, FUNC_5(VAR_2->i_sb, VAR_7));
 ret_0:
 VAR_6 = 0;
 ret_r:
 FUNC_8(VAR_2->i_sb);
 return VAR_6;
}

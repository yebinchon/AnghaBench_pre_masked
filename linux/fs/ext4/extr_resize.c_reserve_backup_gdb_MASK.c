
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {int i_blocks; struct super_block* i_sb; } ;
struct ext4_iloc {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;
typedef int __le32 ;
struct TYPE_8__ {int * i_data; } ;
struct TYPE_7__ {int s_cluster_bits; int s_gdb_count; TYPE_2__* s_sbh; TYPE_1__* s_es; } ;
struct TYPE_6__ {int b_blocknr; } ;
struct TYPE_5__ {int s_reserved_gdt_blocks; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (struct inode*) ;
 TYPE_3__* FUNC_4 (struct super_block*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int *,struct buffer_head*) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_12 (int *,struct inode*,struct ext4_iloc*) ;
 struct buffer_head* FUNC_13 (struct super_block*,int,int ) ;
 int FUNC_14 (struct super_block*,char*,int,long) ;
 int FUNC_15 (struct buffer_head**) ;
 struct buffer_head** FUNC_16 (int,int,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct super_block*,int,struct buffer_head*) ;

__attribute__((used)) static int FUNC_20(handle_t *VAR_4, struct inode *VAR_5,
         ext4_group_t VAR_6)
{
 struct super_block *VAR_7 = VAR_5->i_sb;
 int VAR_8 =FUNC_17(FUNC_4(VAR_7)->s_es->s_reserved_gdt_blocks);
 int VAR_9 = FUNC_4(VAR_7)->s_cluster_bits;
 struct buffer_head **VAR_10;
 struct buffer_head *VAR_11;
 struct ext4_iloc VAR_12;
 ext4_fsblk_t VAR_13;
 __le32 *VAR_14, *VAR_15;
 int VAR_16 = 0;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_10 = FUNC_16(VAR_8, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_14 = FUNC_3(VAR_5)->i_data + VAR_2;
 VAR_11 = FUNC_13(VAR_7, FUNC_18(*VAR_14), 0);
 if (FUNC_5(VAR_11)) {
  VAR_19 = FUNC_6(VAR_11);
  VAR_11 = ((void*)0);
  goto exit_free;
 }

 VAR_13 = FUNC_4(VAR_7)->s_sbh->b_blocknr + 1 + FUNC_4(VAR_7)->s_gdb_count;
 VAR_14 = (__le32 *)VAR_11->b_data + (FUNC_4(VAR_7)->s_gdb_count %
      FUNC_1(VAR_7));
 VAR_15 = (__le32 *)VAR_11->b_data + FUNC_1(VAR_7);


 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++, VAR_13++) {
  if (FUNC_18(*VAR_14) != VAR_13) {
   FUNC_14(VAR_7, "reserved block %llu"
         " not at offset %ld",
         VAR_13,
         (long)(VAR_14 - (__le32 *)VAR_11->b_data));
   VAR_19 = -VAR_0;
   goto exit_bh;
  }
  VAR_10[VAR_17] = FUNC_13(VAR_7, VAR_13, 0);
  if (FUNC_5(VAR_10[VAR_17])) {
   VAR_19 = FUNC_6(VAR_10[VAR_17]);
   VAR_10[VAR_17] = ((void*)0);
   goto exit_bh;
  }
  VAR_16 = FUNC_19(VAR_7, VAR_6, VAR_10[VAR_17]);
  if (VAR_16 < 0) {
   FUNC_7(VAR_10[VAR_17]);
   VAR_19 = VAR_16;
   goto exit_bh;
  }
  if (++VAR_14 >= VAR_15)
   VAR_14 = (__le32 *)VAR_11->b_data;
 }

 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  FUNC_0(VAR_10[VAR_18], "get_write_access");
  if ((VAR_19 = FUNC_10(VAR_4, VAR_10[VAR_18])))
   goto exit_bh;
 }

 if ((VAR_19 = FUNC_12(VAR_4, VAR_5, &VAR_12)))
  goto exit_bh;





 VAR_13 = VAR_6 * FUNC_2(VAR_7);
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  int VAR_20;
  VAR_14 = (__le32 *)VAR_10[VAR_18]->b_data;



  VAR_14[VAR_16] = FUNC_8(VAR_13 + VAR_10[VAR_18]->b_blocknr);
  VAR_20 = FUNC_9(VAR_4, ((void*)0), VAR_10[VAR_18]);
  if (!VAR_19)
   VAR_19 = VAR_20;
 }

 VAR_5->i_blocks += VAR_8 * VAR_7->s_blocksize >> (9 - VAR_9);
 FUNC_11(VAR_4, VAR_5, &VAR_12);

exit_bh:
 while (--VAR_17 >= 0)
  FUNC_7(VAR_10[VAR_17]);
 FUNC_7(VAR_11);

exit_free:
 FUNC_15(VAR_10);

 return VAR_19;
}

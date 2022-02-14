
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct io_failure_record {int this_mirror; int in_validation; } ;
struct inode {TYPE_1__* i_sb; } ;
struct extent_io_tree {int dummy; } ;
struct bio_vec {scalar_t__ bv_len; } ;
struct bio {unsigned int bi_opf; } ;
typedef scalar_t__ blk_status_t ;
typedef int bio_end_io_t ;
struct TYPE_8__ {TYPE_2__* root; struct extent_io_tree io_failure_tree; struct extent_io_tree io_tree; } ;
struct TYPE_7__ {int logical; } ;
struct TYPE_6__ {int fs_info; } ;
struct TYPE_5__ {int s_blocksize_bits; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bio*,struct bio_vec*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct inode*,struct bio*,struct io_failure_record*,int) ;
 struct bio* FUNC_7 (struct inode*,struct bio*,struct io_failure_record*,struct page*,unsigned int,int,int *,void*) ;
 int FUNC_8 (int ,char*,unsigned int,int ,int ) ;
 int FUNC_9 (struct inode*,int,int,struct io_failure_record**) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 TYPE_3__* FUNC_11 (struct bio*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct extent_io_tree*,struct extent_io_tree*,struct io_failure_record*) ;
 scalar_t__ FUNC_14 (struct inode*,struct bio*,int ) ;

__attribute__((used)) static blk_status_t FUNC_15(struct inode *VAR_4, struct bio *VAR_5,
       struct page *VAR_6, unsigned int VAR_7,
       u64 VAR_8, u64 VAR_9, int VAR_10,
       bio_end_io_t *VAR_11, void *VAR_12)
{
 struct io_failure_record *VAR_13;
 struct extent_io_tree *VAR_14 = &FUNC_0(VAR_4)->io_tree;
 struct extent_io_tree *VAR_15 = &FUNC_0(VAR_4)->io_failure_tree;
 struct bio *VAR_16;
 int VAR_17;
 unsigned int VAR_18 = 0;
 int VAR_19;
 int VAR_20;
 blk_status_t VAR_21;
 struct bio_vec VAR_22;

 FUNC_1(FUNC_3(VAR_5) == VAR_3);

 VAR_20 = FUNC_9(VAR_4, VAR_8, VAR_9, &VAR_13);
 if (VAR_20)
  return FUNC_12(VAR_20);

 VAR_20 = FUNC_6(VAR_4, VAR_5, VAR_13,
      VAR_10);
 if (!VAR_20) {
  FUNC_13(VAR_15, VAR_14, VAR_13);
  return VAR_0;
 }

 VAR_19 = FUNC_5(VAR_5);
 FUNC_2(VAR_5, &VAR_22);
 if (VAR_19 > 1 ||
     (VAR_22.bv_len > FUNC_10(VAR_4)))
  VAR_18 |= VAR_1;

 VAR_17 = VAR_8 - FUNC_11(VAR_5)->logical;
 VAR_17 >>= VAR_4->i_sb->s_blocksize_bits;
 VAR_16 = FUNC_7(VAR_4, VAR_5, VAR_13, VAR_6,
    VAR_7, VAR_17, VAR_11, VAR_12);
 VAR_16->bi_opf = VAR_2 | VAR_18;

 FUNC_8(FUNC_0(VAR_4)->root->fs_info,
      "repair DIO read error: submitting new dio read[%#x] to this_mirror=%d, in_validation=%d",
      VAR_18, VAR_13->this_mirror, VAR_13->in_validation);

 VAR_21 = FUNC_14(VAR_4, VAR_16, VAR_13->this_mirror);
 if (VAR_21) {
  FUNC_13(VAR_15, VAR_14, VAR_13);
  FUNC_4(VAR_16);
 }

 return VAR_21;
}

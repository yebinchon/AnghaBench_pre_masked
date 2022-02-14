
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapath {int dummy; } ;
struct iomap {scalar_t__ type; int length; int * page_ops; int offset; } ;
struct inode {int i_blkbits; } ;
struct gfs2_trans {scalar_t__ tr_num_buf_new; } ;
struct gfs2_sbd {struct inode* sd_rindex; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct gfs2_trans* journal_info; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct inode*,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_5 (struct inode*,struct iomap*,struct metapath*) ;
 int FUNC_6 (struct inode*,int ,int,unsigned int,struct iomap*,struct metapath*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 scalar_t__ FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 scalar_t__ FUNC_12 (struct gfs2_inode*,unsigned int) ;
 int FUNC_13 (struct gfs2_sbd*,unsigned int,int) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (struct gfs2_inode*,int *) ;
 int FUNC_16 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 int FUNC_17 (struct gfs2_inode*,int ,int) ;
 int FUNC_18 (struct metapath*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_7, loff_t VAR_8,
      loff_t VAR_9, unsigned VAR_10,
      struct iomap *VAR_11,
      struct metapath *VAR_12)
{
 struct gfs2_inode *VAR_13 = FUNC_0(VAR_7);
 struct gfs2_sbd *VAR_14 = FUNC_1(VAR_7);
 bool VAR_15;
 int VAR_16;

 VAR_15 = FUNC_8(VAR_13) &&
    VAR_8 + VAR_9 > FUNC_9(VAR_13);

 if (VAR_15 || VAR_11->type == VAR_0) {
  unsigned int VAR_17, VAR_18;
  struct gfs2_alloc_parms VAR_19 = {};
  unsigned int VAR_20;
  struct gfs2_trans *VAR_21;

  FUNC_16(VAR_13, VAR_11->length, &VAR_17,
           &VAR_18);
  VAR_19.target = VAR_17 + VAR_18;
  VAR_16 = FUNC_10(VAR_13, &VAR_19);
  if (VAR_16)
   return VAR_16;

  VAR_16 = FUNC_4(VAR_13, &VAR_19);
  if (VAR_16)
   goto out_qunlock;

  VAR_20 = VAR_2 + VAR_18;
  if (FUNC_7(VAR_13))
   VAR_20 += VAR_17;
  if (VAR_18 || VAR_17)
   VAR_20 += VAR_4 + VAR_3;
  if (VAR_7 == VAR_14->sd_rindex)
   VAR_20 += 2 * VAR_4;
  VAR_20 += FUNC_12(VAR_13, VAR_17 + VAR_18);

  VAR_16 = FUNC_13(VAR_14, VAR_20,
           VAR_11->length >> VAR_7->i_blkbits);
  if (VAR_16)
   goto out_trans_fail;

  if (VAR_15) {
   VAR_16 = FUNC_15(VAR_13, ((void*)0));
   if (VAR_16)
    goto out_trans_end;
   FUNC_18(VAR_12);
   VAR_16 = FUNC_6(VAR_7, VAR_11->offset,
          VAR_11->length, VAR_10, VAR_11, VAR_12);
   if (VAR_16)
    goto out_trans_end;
  }

  if (VAR_11->type == VAR_0) {
   VAR_16 = FUNC_5(VAR_7, VAR_11, VAR_12);
   if (VAR_16) {
    FUNC_14(VAR_14);
    FUNC_3(VAR_13);
    FUNC_17(VAR_13, VAR_11->offset, VAR_11->length);
    goto out_qunlock;
   }
  }

  VAR_21 = VAR_5->journal_info;
  if (VAR_21->tr_num_buf_new)
   FUNC_2(VAR_7, VAR_1);

  FUNC_14(VAR_14);
 }

 if (FUNC_8(VAR_13) || FUNC_7(VAR_13))
  VAR_11->page_ops = &VAR_6;
 return 0;

out_trans_end:
 FUNC_14(VAR_14);
out_trans_fail:
 FUNC_3(VAR_13);
out_qunlock:
 FUNC_11(VAR_13);
 return VAR_16;
}

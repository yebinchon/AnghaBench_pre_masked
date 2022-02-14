
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_blkbits; int const i_size; } ;
struct TYPE_3__ {int sb_bsize; int sb_bsize_shift; } ;
struct gfs2_sbd {int sd_max_rg_data; TYPE_1__ sd_sb; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_alloc_parms {unsigned int min_target; unsigned int target; int allowed; int aflags; } ;
struct file {int f_flags; TYPE_2__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct gfs2_inode*,int*,unsigned int*,unsigned int*,int) ;
 int FUNC_4 (struct inode*,int,int,int) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 unsigned int FUNC_12 (struct gfs2_inode*,unsigned int) ;
 int FUNC_13 (struct file*,int,int) ;
 int FUNC_14 (struct gfs2_sbd*,unsigned int,int) ;
 int FUNC_15 (struct gfs2_sbd*) ;
 int FUNC_16 (struct gfs2_inode*,int,int) ;
 int FUNC_17 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 int FUNC_18 (struct inode*,int const) ;
 int FUNC_19 (struct inode*) ;
 long FUNC_20 (struct file*,int const,int const,int) ;

__attribute__((used)) static long FUNC_21(struct file *VAR_9, int VAR_10, loff_t VAR_11, loff_t VAR_12)
{
 struct inode *VAR_13 = FUNC_5(VAR_9);
 struct gfs2_sbd *VAR_14 = FUNC_1(VAR_13);
 struct gfs2_inode *VAR_15 = FUNC_0(VAR_13);
 struct gfs2_alloc_parms VAR_16 = { .aflags = 0, };
 unsigned int VAR_17 = 0, VAR_18 = 0, VAR_19;
 loff_t VAR_20, VAR_21, VAR_22;
 int VAR_23;
 const loff_t VAR_24 = VAR_11;
 const loff_t VAR_25 = VAR_12;
 loff_t VAR_26 = ~((loff_t)VAR_14->sd_sb.sb_bsize - 1);
 loff_t VAR_27 = (VAR_11 + VAR_12 - 1) >> VAR_14->sd_sb.sb_bsize_shift;
 loff_t VAR_28 = VAR_7 & VAR_26;

 VAR_27 = (VAR_27 + 1) << VAR_14->sd_sb.sb_bsize_shift;

 VAR_11 &= VAR_26;

 VAR_12 = VAR_27 - VAR_11;
 VAR_20 = VAR_14->sd_max_rg_data * VAR_14->sd_sb.sb_bsize / 2;
 if (!VAR_20)
  VAR_20 = VAR_7;
 VAR_20 &= VAR_26;
 if (VAR_20 == 0)
  VAR_20 = VAR_14->sd_sb.sb_bsize;

 FUNC_13(VAR_9, VAR_11, VAR_12);

 FUNC_17(VAR_15, VAR_2, &VAR_17, &VAR_18);
 VAR_16.min_target = VAR_17 + VAR_18;

 while (VAR_12 > 0) {
  if (VAR_12 < VAR_20)
   VAR_20 = VAR_12;
  if (!FUNC_16(VAR_15, VAR_11, VAR_20)) {
   VAR_12 -= VAR_20;
   VAR_11 += VAR_20;
   continue;
  }





  VAR_21 = (VAR_12 > VAR_28) ? VAR_28 : VAR_12;





  FUNC_17(VAR_15, VAR_20, &VAR_17, &VAR_18);
  VAR_16.target = VAR_17 + VAR_18;

  VAR_23 = FUNC_10(VAR_15, &VAR_16);
  if (VAR_23)
   return VAR_23;


  VAR_22 = VAR_7;
  if (VAR_16.allowed)
   VAR_22 = VAR_16.allowed;

  VAR_23 = FUNC_8(VAR_15, &VAR_16);
  if (VAR_23)
   goto out_qunlock;


  if (VAR_16.allowed && VAR_16.allowed < VAR_22)
   VAR_22 = VAR_16.allowed;




  FUNC_3(VAR_15, &VAR_21, &VAR_17,
    &VAR_18, VAR_22);

  VAR_19 = VAR_3 + VAR_18 + VAR_6 + VAR_4 +
     VAR_5 + FUNC_12(VAR_15, VAR_17 + VAR_18);
  if (FUNC_9(VAR_15))
   VAR_19 += VAR_17 ? VAR_17 : 1;

  VAR_23 = FUNC_14(VAR_14, VAR_19,
      VAR_2 >> VAR_13->i_blkbits);
  if (VAR_23)
   goto out_trans_fail;

  VAR_23 = FUNC_4(VAR_13, VAR_11, VAR_21, VAR_10);
  FUNC_15(VAR_14);

  if (VAR_23)
   goto out_trans_fail;

  VAR_12 -= VAR_21;
  VAR_11 += VAR_21;
  FUNC_7(VAR_15);
  FUNC_11(VAR_15);
 }

 if (!(VAR_10 & VAR_0) && (VAR_24 + VAR_25) > VAR_13->i_size)
  FUNC_18(VAR_13, VAR_24 + VAR_25);
 FUNC_6(VAR_9);
 FUNC_19(VAR_13);

 if ((VAR_9->f_flags & VAR_1) || FUNC_2(VAR_9->f_mapping->host))
  return FUNC_20(VAR_9, VAR_24, VAR_24 + VAR_25 - 1,
          (VAR_9->f_flags & VAR_8) ? 0 : 1);
 return 0;

out_trans_fail:
 FUNC_7(VAR_15);
out_qunlock:
 FUNC_11(VAR_15);
 return VAR_23;
}

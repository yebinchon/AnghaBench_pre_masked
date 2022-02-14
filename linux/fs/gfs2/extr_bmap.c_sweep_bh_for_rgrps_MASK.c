
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_trans {scalar_t__ tr_num_buf_new; } ;
struct gfs2_sbd {int sd_log_thresh2; scalar_t__ sd_inptrs; } ;
struct gfs2_rgrpd {unsigned int rd_length; int rd_gl; } ;
struct TYPE_11__ {int i_ctime; int i_mtime; } ;
struct TYPE_9__ {struct gfs2_rgrpd* rgd; } ;
struct TYPE_10__ {TYPE_1__ rs_rbm; } ;
struct gfs2_inode {int i_rw_mutex; int i_gl; TYPE_4__ i_inode; scalar_t__ i_depth; TYPE_2__ i_res; } ;
struct gfs2_holder {int gh_gl; } ;
struct buffer_head {int b_data; } ;
typedef int s64 ;
typedef scalar_t__ __be64 ;
struct TYPE_12__ {struct gfs2_trans* journal_info; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct gfs2_inode*,struct gfs2_rgrpd*,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 () ;
 TYPE_7__* VAR_6 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (struct gfs2_sbd*,int ) ;
 struct gfs2_rgrpd* FUNC_10 (struct gfs2_sbd*,scalar_t__,int) ;
 int FUNC_11 (struct gfs2_inode*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 struct gfs2_rgrpd* FUNC_13 (int ) ;
 int FUNC_14 (struct gfs2_holder*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_17 (struct gfs2_holder*) ;
 int FUNC_18 (struct gfs2_inode*,struct buffer_head**) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int ,struct buffer_head*) ;
 int FUNC_22 (struct gfs2_sbd*,unsigned int,unsigned int) ;
 int FUNC_23 (struct gfs2_sbd*) ;
 int FUNC_24 (struct gfs2_rgrpd*,scalar_t__) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct gfs2_inode *VAR_7, struct gfs2_holder *VAR_8,
         struct buffer_head *VAR_9, __be64 *VAR_10, __be64 *VAR_11,
         bool VAR_12, u32 *VAR_13)
{
 struct gfs2_sbd *VAR_14 = FUNC_0(&VAR_7->i_inode);
 struct gfs2_rgrpd *VAR_15;
 struct gfs2_trans *VAR_16;
 __be64 *VAR_17;
 int VAR_18;
 u64 VAR_19, VAR_20, VAR_21;
 s64 VAR_22;
 int VAR_23 = 0;
 bool VAR_24 = 0;

more_rgrps:
 VAR_15 = ((void*)0);
 if (FUNC_17(VAR_8)) {
  VAR_15 = FUNC_13(VAR_8->gh_gl);
  FUNC_9(VAR_14,
        FUNC_15(VAR_8->gh_gl));
 }
 VAR_18 = 0;
 VAR_20 = 0;
 VAR_22 = 0;

 for (VAR_17 = VAR_10; VAR_17 < VAR_11; VAR_17++) {
  if (!*VAR_17)
   continue;
  VAR_19 = FUNC_3(*VAR_17);

  if (VAR_15) {
   if (!FUNC_24(VAR_15, VAR_19)) {
    VAR_18++;
    continue;
   }
  } else {
   VAR_15 = FUNC_10(VAR_14, VAR_19, 1);
   if (FUNC_25(!VAR_15)) {
    VAR_23 = -VAR_0;
    goto out;
   }
   VAR_23 = FUNC_16(VAR_15->rd_gl, VAR_1,
       0, VAR_8);
   if (VAR_23)
    goto out;


   if (FUNC_19(&VAR_7->i_res) &&
       VAR_15 == VAR_7->i_res.rs_rbm.rgd)
    FUNC_20(&VAR_7->i_res);
  }






  if (VAR_6->journal_info == ((void*)0)) {
   unsigned int VAR_25, VAR_26;

   VAR_25 = VAR_15->rd_length + VAR_2 +
    VAR_3;
   VAR_21 = FUNC_12(&VAR_7->i_inode);
   if (VAR_21 > FUNC_2(&VAR_14->sd_log_thresh2))
    VAR_25 +=
     FUNC_2(&VAR_14->sd_log_thresh2);
   else
    VAR_25 += VAR_21;
   VAR_26 = VAR_25;
   if (VAR_12)
    VAR_26 += VAR_11 - VAR_10;
   else if (VAR_7->i_depth)
    VAR_26 += VAR_14->sd_inptrs;
   VAR_23 = FUNC_22(VAR_14, VAR_25, VAR_26);
   if (VAR_23)
    goto out_unlock;
   FUNC_7(&VAR_7->i_rw_mutex);
  }

  VAR_16 = VAR_6->journal_info;
  if (VAR_16->tr_num_buf_new + VAR_5 +
      VAR_4 >= FUNC_2(&VAR_14->sd_log_thresh2)) {



   VAR_18++;
   if (VAR_24)
    break;
   goto out_unlock;
  }

  FUNC_21(VAR_7->i_gl, VAR_9);
  VAR_24 = 1;
  *VAR_17 = 0;
  if (VAR_20 + VAR_22 == VAR_19) {
   VAR_22++;
   continue;
  }
  if (VAR_20) {
   FUNC_1(VAR_7, VAR_15, VAR_20, (u32)VAR_22, VAR_12);
   (*VAR_13) += VAR_22;
   FUNC_8(&VAR_7->i_inode, -VAR_22);
  }
  VAR_20 = VAR_19;
  VAR_22 = 1;
 }
 if (VAR_20) {
  FUNC_1(VAR_7, VAR_15, VAR_20, (u32)VAR_22, VAR_12);
  (*VAR_13) += VAR_22;
  FUNC_8(&VAR_7->i_inode, -VAR_22);
 }
out_unlock:
 if (!VAR_23 && VAR_18) {


  if (VAR_6->journal_info) {
   struct buffer_head *VAR_27;

   VAR_23 = FUNC_18(VAR_7, &VAR_27);
   if (VAR_23)
    goto out;



   VAR_7->i_inode.i_mtime = VAR_7->i_inode.i_ctime =
    FUNC_6(&VAR_7->i_inode);
   FUNC_21(VAR_7->i_gl, VAR_27);
   FUNC_11(VAR_7, VAR_27->b_data);
   FUNC_4(VAR_27);
   FUNC_26(&VAR_7->i_rw_mutex);
   FUNC_23(VAR_14);
   VAR_24 = 0;
  }
  FUNC_14(VAR_8);
  FUNC_5();
  goto more_rgrps;
 }
out:
 return VAR_23;
}

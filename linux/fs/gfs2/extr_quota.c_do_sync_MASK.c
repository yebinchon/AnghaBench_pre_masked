
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_inode; } ;
struct gfs2_quota_data {int qd_flags; int qd_change_sync; TYPE_2__* qd_gl; } ;
struct gfs2_quota {int dummy; } ;
struct gfs2_inode {TYPE_2__* i_gl; int i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
typedef int loff_t ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_5__ {TYPE_1__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct gfs2_quota_data*,int ) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ,struct gfs2_quota_data*,int *) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_7 (struct gfs2_sbd*,TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*,unsigned int) ;
 int FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_sbd*,unsigned int,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 scalar_t__ FUNC_12 (struct gfs2_inode*,int ,int) ;
 int FUNC_13 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct gfs2_holder*) ;
 struct gfs2_holder* FUNC_17 (unsigned int,int,int ) ;
 int FUNC_18 (struct gfs2_quota_data*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct gfs2_quota_data**,unsigned int,int,int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_21(unsigned int VAR_10, struct gfs2_quota_data **VAR_11)
{
 struct gfs2_sbd *VAR_12 = (*VAR_11)->qd_gl->gl_name.ln_sbd;
 struct gfs2_inode *VAR_13 = FUNC_0(VAR_12->sd_quota_inode);
 struct gfs2_alloc_parms VAR_14 = { .aflags = 0, };
 unsigned int VAR_15, VAR_16;
 struct gfs2_holder *VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20;
 struct gfs2_quota_data *VAR_21;
 unsigned VAR_22;
 loff_t VAR_23;
 unsigned int VAR_24 = 0, VAR_25;
 int VAR_26;

 VAR_26 = FUNC_9(VAR_13);
 if (VAR_26)
  return VAR_26;

 FUNC_13(VAR_13, sizeof(struct gfs2_quota),
         &VAR_15, &VAR_16);

 VAR_17 = FUNC_17(VAR_10, sizeof(struct gfs2_holder), VAR_1);
 if (!VAR_17)
  return -VAR_0;

 FUNC_20(VAR_11, VAR_10, sizeof(struct gfs2_quota_data *), VAR_9, ((void*)0));
 FUNC_14(&VAR_13->i_inode);
 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_26 = FUNC_4(VAR_11[VAR_19]->qd_gl, VAR_5,
        VAR_4, &VAR_17[VAR_19]);
  if (VAR_26)
   goto out;
 }

 VAR_26 = FUNC_4(VAR_13->i_gl, VAR_5, 0, &VAR_18);
 if (VAR_26)
  goto out;

 for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
  VAR_23 = FUNC_18(VAR_11[VAR_20]);
  if (FUNC_12(VAR_13, VAR_23,
           sizeof(struct gfs2_quota)))
   VAR_24++;
 }
 VAR_25 = VAR_10 * VAR_15 + VAR_7 + VAR_10 + 3;

 VAR_22 = 1 + (VAR_24 * (VAR_15 + VAR_16));
 VAR_14.target = VAR_22;
 VAR_26 = FUNC_6(VAR_13, &VAR_14);
 if (VAR_26)
  goto out_alloc;

 if (VAR_24)
  VAR_25 += FUNC_8(VAR_13, VAR_22) + VAR_24 * VAR_16 + VAR_8;

 VAR_26 = FUNC_10(VAR_12, VAR_25, 0);
 if (VAR_26)
  goto out_ipres;

 for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
  VAR_21 = VAR_11[VAR_20];
  VAR_23 = FUNC_18(VAR_21);
  VAR_26 = FUNC_2(VAR_13, VAR_23, VAR_21->qd_change_sync, VAR_21, ((void*)0));
  if (VAR_26)
   goto out_end_trans;

  FUNC_1(VAR_21, -VAR_21->qd_change_sync);
  FUNC_19(VAR_6, &VAR_21->qd_flags);
 }

 VAR_26 = 0;

out_end_trans:
 FUNC_11(VAR_12);
out_ipres:
 FUNC_5(VAR_13);
out_alloc:
 FUNC_3(&VAR_18);
out:
 while (VAR_19--)
  FUNC_3(&VAR_17[VAR_19]);
 FUNC_15(&VAR_13->i_inode);
 FUNC_16(VAR_17);
 FUNC_7(VAR_13->i_gl->gl_name.ln_sbd, VAR_13->i_gl,
         VAR_3 | VAR_2);
 return VAR_26;
}

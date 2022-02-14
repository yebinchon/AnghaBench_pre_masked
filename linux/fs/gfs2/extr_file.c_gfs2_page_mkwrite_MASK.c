
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
typedef int u64 ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {scalar_t__ mapping; unsigned long index; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_flags; TYPE_2__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
typedef int loff_t ;
struct TYPE_4__ {int gl_flags; } ;
struct TYPE_3__ {int vm_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct page*) ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,struct gfs2_holder*) ;
 int FUNC_10 (struct gfs2_holder*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_13 (struct gfs2_inode*) ;
 scalar_t__ FUNC_14 (struct gfs2_inode*) ;
 int FUNC_15 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_16 (struct gfs2_inode*) ;
 scalar_t__ FUNC_17 (struct gfs2_inode*,unsigned int) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct gfs2_inode*) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (struct gfs2_sbd*,unsigned int,int ) ;
 int FUNC_22 (struct gfs2_sbd*) ;
 int FUNC_23 (struct gfs2_inode*,struct page*) ;
 int FUNC_24 (struct gfs2_inode*,int ,int ) ;
 int FUNC_25 (struct gfs2_inode*,int ,unsigned int*,unsigned int*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ,int *) ;
 int FUNC_32 (struct page*) ;
 int FUNC_33 (struct page*) ;
 int FUNC_34 (struct page*) ;

__attribute__((used)) static vm_fault_t FUNC_35(struct vm_fault *VAR_10)
{
 struct page *VAR_11 = VAR_10->page;
 struct inode *VAR_12 = FUNC_4(VAR_10->vma->vm_file);
 struct gfs2_inode *VAR_13 = FUNC_0(VAR_12);
 struct gfs2_sbd *VAR_14 = FUNC_1(VAR_12);
 struct gfs2_alloc_parms VAR_15 = { .aflags = 0, };
 unsigned long VAR_16;
 u64 VAR_17 = FUNC_28(VAR_11);
 unsigned int VAR_18, VAR_19, VAR_20;
 struct gfs2_holder VAR_21;
 loff_t VAR_22;
 int VAR_23;

 FUNC_30(VAR_12->i_sb);

 VAR_23 = FUNC_19(VAR_13);
 if (VAR_23)
  goto out;

 FUNC_20(VAR_10->vma->vm_file, VAR_17, VAR_6);

 FUNC_9(VAR_13->i_gl, VAR_4, 0, &VAR_21);
 VAR_23 = FUNC_8(&VAR_21);
 if (VAR_23)
  goto out_uninit;


 FUNC_5(VAR_10->vma->vm_file);

 FUNC_31(VAR_3, &VAR_13->i_gl->gl_flags);
 FUNC_31(VAR_2, &VAR_13->i_flags);

 if (!FUNC_24(VAR_13, VAR_17, VAR_6)) {
  FUNC_27(VAR_11);
  if (!FUNC_2(VAR_11) || VAR_11->mapping != VAR_12->i_mapping) {
   VAR_23 = -VAR_0;
   FUNC_33(VAR_11);
  }
  goto out_unlock;
 }

 VAR_23 = FUNC_18(VAR_14);
 if (VAR_23)
  goto out_unlock;

 FUNC_25(VAR_13, VAR_6, &VAR_18, &VAR_19);
 VAR_15.target = VAR_18 + VAR_19;
 VAR_23 = FUNC_15(VAR_13, &VAR_15);
 if (VAR_23)
  goto out_unlock;
 VAR_23 = FUNC_12(VAR_13, &VAR_15);
 if (VAR_23)
  goto out_quota_unlock;

 VAR_20 = VAR_7 + VAR_19;
 if (FUNC_13(VAR_13))
  VAR_20 += VAR_18 ? VAR_18 : 1;
 if (VAR_19 || VAR_18) {
  VAR_20 += VAR_9 + VAR_8;
  VAR_20 += FUNC_17(VAR_13, VAR_18 + VAR_19);
 }
 VAR_23 = FUNC_21(VAR_14, VAR_20, 0);
 if (VAR_23)
  goto out_trans_fail;

 FUNC_27(VAR_11);
 VAR_23 = -VAR_1;
 VAR_22 = FUNC_26(VAR_12);
 VAR_16 = (VAR_22 - 1) >> VAR_5;

 if (VAR_22 == 0 || (VAR_11->index > VAR_16))
  goto out_trans_end;

 VAR_23 = -VAR_0;



 if (!FUNC_2(VAR_11) || VAR_11->mapping != VAR_12->i_mapping)
  goto out_trans_end;


 VAR_23 = 0;
 if (FUNC_14(VAR_13))
  VAR_23 = FUNC_23(VAR_13, VAR_11);
 if (VAR_23 == 0)
  VAR_23 = FUNC_6(VAR_11);

out_trans_end:
 if (VAR_23)
  FUNC_33(VAR_11);
 FUNC_22(VAR_14);
out_trans_fail:
 FUNC_11(VAR_13);
out_quota_unlock:
 FUNC_16(VAR_13);
out_unlock:
 FUNC_7(&VAR_21);
out_uninit:
 FUNC_10(&VAR_21);
 if (VAR_23 == 0) {
  FUNC_32(VAR_11);
  FUNC_34(VAR_11);
 }
out:
 FUNC_29(VAR_12->i_sb);
 return FUNC_3(VAR_23);
}

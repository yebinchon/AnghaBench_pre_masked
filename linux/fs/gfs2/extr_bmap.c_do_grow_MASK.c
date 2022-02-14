
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_3__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct TYPE_4__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_gl; TYPE_2__ i_inode; } ;
struct gfs2_alloc_parms {int target; } ;
struct buffer_head {int b_data; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct gfs2_inode*,int ) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 scalar_t__ FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_11 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_12 (struct gfs2_inode*) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_15 (struct gfs2_sbd*) ;
 int FUNC_16 (struct gfs2_inode*,int *) ;
 int FUNC_17 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_6, u64 VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_6);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_6);
 struct gfs2_alloc_parms VAR_10 = { .target = 1, };
 struct buffer_head *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 if (FUNC_8(VAR_8) && VAR_7 > FUNC_9(VAR_8)) {
  VAR_12 = FUNC_11(VAR_8, &VAR_10);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_6(VAR_8, &VAR_10);
  if (VAR_12)
   goto do_grow_qunlock;
  VAR_13 = 1;
 }

 VAR_12 = FUNC_14(VAR_9, VAR_1 + VAR_5 + VAR_4 +
     (VAR_13 &&
      FUNC_7(VAR_8) ? VAR_2 : 0) +
     (VAR_9->sd_args.ar_quota == VAR_0 ?
      0 : VAR_3), 0);
 if (VAR_12)
  goto do_grow_release;

 if (VAR_13) {
  VAR_12 = FUNC_16(VAR_8, ((void*)0));
  if (VAR_12)
   goto do_end_trans;
 }

 VAR_12 = FUNC_10(VAR_8, &VAR_11);
 if (VAR_12)
  goto do_end_trans;

 FUNC_17(VAR_6, VAR_7);
 VAR_8->i_inode.i_mtime = VAR_8->i_inode.i_ctime = FUNC_3(&VAR_8->i_inode);
 FUNC_13(VAR_8->i_gl, VAR_11);
 FUNC_4(VAR_8, VAR_11->b_data);
 FUNC_2(VAR_11);

do_end_trans:
 FUNC_15(VAR_9);
do_grow_release:
 if (VAR_13) {
  FUNC_5(VAR_8);
do_grow_qunlock:
  FUNC_12(VAR_8);
 }
 return VAR_12;
}

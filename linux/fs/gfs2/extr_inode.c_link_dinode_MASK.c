
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_inode; } ;
struct gfs2_diradd {scalar_t__ nr_blocks; } ;
struct gfs2_alloc_parms {scalar_t__ target; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct qstr const*,struct gfs2_inode*,struct gfs2_diradd*) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_sbd*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*,struct gfs2_diradd*,int) ;
 int FUNC_8 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_9(struct gfs2_inode *VAR_2, const struct qstr *VAR_3,
         struct gfs2_inode *VAR_4, struct gfs2_diradd *VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_0(&VAR_2->i_inode);
 struct gfs2_alloc_parms VAR_7 = { .target = VAR_5->nr_blocks, };
 int VAR_8;

 if (VAR_5->nr_blocks) {
  VAR_8 = FUNC_4(VAR_2, &VAR_7);
  if (VAR_8)
   goto fail_quota_locks;

  VAR_8 = FUNC_3(VAR_2, &VAR_7);
  if (VAR_8)
   goto fail_quota_locks;

  VAR_8 = FUNC_6(VAR_6, FUNC_7(VAR_2, VAR_5, 2), 0);
  if (VAR_8)
   goto fail_ipreserv;
 } else {
  VAR_8 = FUNC_6(VAR_6, VAR_1 + 2 * VAR_0, 0);
  if (VAR_8)
   goto fail_quota_locks;
 }

 VAR_8 = FUNC_1(&VAR_2->i_inode, VAR_3, VAR_4, VAR_5);

 FUNC_8(VAR_6);
fail_ipreserv:
 FUNC_2(VAR_2);
fail_quota_locks:
 FUNC_5(VAR_2);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {int sd_flags; } ;
struct gfs2_inode {TYPE_1__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct buffer_head {int b_data; } ;
struct TYPE_6__ {int * journal_info; } ;
struct TYPE_5__ {scalar_t__ gl_state; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (struct gfs2_sbd*,char*,int) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int ,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_10 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_11 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct inode *VAR_5, int VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_5);
 struct buffer_head *VAR_9;
 struct gfs2_holder VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;

 if (!(VAR_6 & VAR_0))
  return;
 if (FUNC_14(FUNC_13(VAR_3, &VAR_8->sd_flags)))
  return;
 if (!FUNC_7(VAR_7->i_gl)) {
  VAR_13 = FUNC_8(VAR_7->i_gl, VAR_1, 0, &VAR_10);
  if (VAR_13) {
   FUNC_4(VAR_8, "dirty_inode: glock %d\n", VAR_13);
   return;
  }
  VAR_11 = 1;
 } else if (FUNC_2(VAR_7->i_gl->gl_state != VAR_1))
  return;

 if (VAR_4->journal_info == ((void*)0)) {
  VAR_13 = FUNC_11(VAR_8, VAR_2, 0);
  if (VAR_13) {
   FUNC_4(VAR_8, "dirty_inode: gfs2_trans_begin %d\n", VAR_13);
   goto out;
  }
  VAR_12 = 1;
 }

 VAR_13 = FUNC_9(VAR_7, &VAR_9);
 if (VAR_13 == 0) {
  FUNC_10(VAR_7->i_gl, VAR_9);
  FUNC_5(VAR_7, VAR_9->b_data);
  FUNC_3(VAR_9);
 }

 if (VAR_12)
  FUNC_12(VAR_8);
out:
 if (VAR_11)
  FUNC_6(&VAR_10);
}

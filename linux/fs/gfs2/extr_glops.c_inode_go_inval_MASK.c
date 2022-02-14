
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct address_space* i_mapping; int i_mode; } ;
struct gfs2_inode {TYPE_2__ i_inode; int i_flags; } ;
struct TYPE_6__ {TYPE_3__* ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_name; int gl_ail_count; } ;
struct address_space {int dummy; } ;
struct TYPE_8__ {scalar_t__ sd_rindex_uptodate; int sd_rindex; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 struct address_space* FUNC_7 (struct gfs2_glock*) ;
 struct gfs2_inode* FUNC_8 (struct gfs2_glock*) ;
 int FUNC_9 (TYPE_3__*,int *,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct address_space*,int ) ;

__attribute__((used)) static void FUNC_13(struct gfs2_glock *VAR_4, int VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_8(VAR_4);

 FUNC_4(VAR_4->gl_name.ln_sbd, !FUNC_2(&VAR_4->gl_ail_count));

 if (VAR_5 & VAR_0) {
  struct address_space *VAR_7 = FUNC_7(VAR_4);
  FUNC_12(VAR_7, 0);
  if (VAR_6) {
   FUNC_11(VAR_3, &VAR_6->i_flags);
   FUNC_3(&VAR_6->i_inode);
   FUNC_10(&VAR_6->i_inode);
   FUNC_6(VAR_6);
  }
 }

 if (VAR_6 == FUNC_0(VAR_4->gl_name.ln_sbd->sd_rindex)) {
  FUNC_9(VAR_4->gl_name.ln_sbd, ((void*)0),
          VAR_2 |
          VAR_1);
  VAR_4->gl_name.ln_sbd->sd_rindex_uptodate = 0;
 }
 if (VAR_6 && FUNC_1(VAR_6->i_inode.i_mode))
  FUNC_12(VAR_6->i_inode.i_mapping, 0);

 FUNC_5(VAR_6);
}

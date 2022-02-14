
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct address_space* i_mapping; int i_mode; } ;
struct gfs2_inode {TYPE_2__ i_inode; int i_flags; } ;
struct TYPE_3__ {int ln_sbd; } ;
struct gfs2_glock {scalar_t__ gl_state; int gl_flags; TYPE_1__ gl_name; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gfs2_glock*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct gfs2_glock*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 struct address_space* FUNC_7 (struct gfs2_glock*) ;
 struct gfs2_inode* FUNC_8 (struct gfs2_glock*) ;
 int FUNC_9 (int ,struct gfs2_glock*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct address_space*,int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (struct address_space*,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct gfs2_glock *VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_8(VAR_5);
 int VAR_7 = VAR_6 && FUNC_1(VAR_6->i_inode.i_mode);
 struct address_space *VAR_8 = FUNC_7(VAR_5);
 int VAR_9;

 if (VAR_7) {
  if (FUNC_13(VAR_2, &VAR_6->i_flags))
   FUNC_14(VAR_6->i_inode.i_mapping, 0, 0);
  FUNC_10(&VAR_6->i_inode);
 }
 if (!FUNC_13(VAR_3, &VAR_5->gl_flags))
  goto out;

 FUNC_0(VAR_5, VAR_5->gl_state != VAR_4);

 FUNC_9(VAR_5->gl_name.ln_sbd, VAR_5, VAR_1 |
         VAR_0);
 FUNC_4(VAR_8);
 if (VAR_7) {
  struct address_space *VAR_10 = VAR_6->i_inode.i_mapping;
  FUNC_4(VAR_10);
  VAR_9 = FUNC_3(VAR_10);
  FUNC_11(VAR_10, VAR_9);
 }
 VAR_9 = FUNC_3(VAR_8);
 FUNC_11(VAR_8, VAR_9);
 FUNC_5(VAR_5);




 FUNC_12();
 FUNC_2(VAR_3, &VAR_5->gl_flags);

out:
 FUNC_6(VAR_6);
}

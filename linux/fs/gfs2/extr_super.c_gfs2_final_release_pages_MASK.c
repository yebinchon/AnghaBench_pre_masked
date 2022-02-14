
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; struct inode i_inode; } ;
struct gfs2_glock {int gl_flags; int gl_revokes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (struct gfs2_glock*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct gfs2_inode *VAR_2)
{
 struct inode *VAR_3 = &VAR_2->i_inode;
 struct gfs2_glock *VAR_4 = VAR_2->i_gl;

 FUNC_3(FUNC_2(VAR_2->i_gl), 0);
 FUNC_3(&VAR_3->i_data, 0);

 if (FUNC_0(&VAR_4->gl_revokes) == 0) {
  FUNC_1(VAR_1, &VAR_4->gl_flags);
  FUNC_1(VAR_0, &VAR_4->gl_flags);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrpd {int rd_flags; struct gfs2_glock* rd_gl; } ;
struct gfs2_glock {scalar_t__ gl_state; int gl_flags; int gl_holders; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct gfs2_rgrpd *VAR_4)
{
 struct gfs2_glock *VAR_5 = VAR_4->rd_gl;

 if (VAR_5->gl_state != VAR_3 && FUNC_0(&VAR_5->gl_holders) &&
     !FUNC_1(VAR_2, &VAR_5->gl_flags) &&
     !FUNC_1(VAR_1, &VAR_5->gl_flags))
  return 1;
 if (VAR_4->rd_flags & VAR_0)
  return 1;
 return 0;
}

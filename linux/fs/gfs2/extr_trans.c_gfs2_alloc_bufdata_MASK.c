
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int dummy; } ;
struct gfs2_bufdata {int bd_list; struct gfs2_glock* bd_gl; struct buffer_head* bd_bh; } ;
struct buffer_head {struct gfs2_bufdata* b_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_bufdata* FUNC_1 (int ,int) ;

__attribute__((used)) static struct gfs2_bufdata *FUNC_2(struct gfs2_glock *VAR_3,
            struct buffer_head *VAR_4)
{
 struct gfs2_bufdata *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0 | VAR_1);
 VAR_5->bd_bh = VAR_4;
 VAR_5->bd_gl = VAR_3;
 FUNC_0(&VAR_5->bd_list);
 VAR_4->b_private = VAR_5;
 return VAR_5;
}

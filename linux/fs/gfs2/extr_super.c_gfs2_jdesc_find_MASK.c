
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_jindex_spin; int sd_jindex_list; } ;
struct gfs2_jdesc {int dummy; } ;


 struct gfs2_jdesc* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct gfs2_jdesc *FUNC_3(struct gfs2_sbd *VAR_0, unsigned int VAR_1)
{
 struct gfs2_jdesc *VAR_2;

 FUNC_1(&VAR_0->sd_jindex_spin);
 VAR_2 = FUNC_0(&VAR_0->sd_jindex_list, VAR_1);
 FUNC_2(&VAR_0->sd_jindex_spin);

 return VAR_2;
}

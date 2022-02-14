
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {unsigned int sd_journals; int sd_jindex_spin; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct gfs2_sbd *VAR_0)
{
 unsigned int VAR_1;
 FUNC_0(&VAR_0->sd_jindex_spin);
 VAR_1 = VAR_0->sd_journals;
 FUNC_1(&VAR_0->sd_jindex_spin);
 return VAR_1;
}

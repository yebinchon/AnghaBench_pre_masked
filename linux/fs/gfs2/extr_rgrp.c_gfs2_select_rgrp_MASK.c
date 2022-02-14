
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
typedef struct gfs2_rgrpd {struct gfs2_sbd* rd_sbd; } const gfs2_rgrpd ;


 struct gfs2_rgrpd const* FUNC_0 (struct gfs2_sbd*) ;
 struct gfs2_rgrpd const* FUNC_1 (struct gfs2_rgrpd const*) ;

__attribute__((used)) static bool FUNC_2(struct gfs2_rgrpd **VAR_0, const struct gfs2_rgrpd *VAR_1)
{
 struct gfs2_rgrpd *VAR_2 = *VAR_0;
 struct gfs2_sbd *VAR_3 = VAR_2->rd_sbd;

 VAR_2 = FUNC_1(VAR_2);
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_0(VAR_3);
 *VAR_0 = VAR_2;
 if (VAR_2 != VAR_1)
  return 1;
 return 0;
}

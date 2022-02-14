
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ls_jid; } ;
struct gfs2_sbd {int sd_journals; TYPE_1__ sd_lockstruct; } ;
struct gfs2_rgrpd {int rd_flags; } ;


 int VAR_0 ;
 struct gfs2_rgrpd* FUNC_0 (struct gfs2_sbd*) ;
 struct gfs2_rgrpd* FUNC_1 (struct gfs2_rgrpd*) ;

__attribute__((used)) static void FUNC_2(struct gfs2_sbd *VAR_1)
{
 struct gfs2_rgrpd *VAR_2, *VAR_3;
 int VAR_4;



 VAR_2 = FUNC_0(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_1->sd_lockstruct.ls_jid; VAR_4++)
  VAR_2 = FUNC_1(VAR_2);
 VAR_3 = VAR_2;

 do {
  VAR_2->rd_flags |= VAR_0;
  for (VAR_4 = 0; VAR_4 < VAR_1->sd_journals; VAR_4++) {
   VAR_2 = FUNC_1(VAR_2);
   if (!VAR_2 || VAR_2 == VAR_3)
    break;
  }
 } while (VAR_2 && VAR_2 != VAR_3);
}

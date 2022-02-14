
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dlm_rsb {scalar_t__ res_nodeid; } ;
struct dlm_lkb {scalar_t__ lkb_status; scalar_t__ lkb_nodeid; scalar_t__ lkb_wait_type; scalar_t__ lkb_remid; int lkb_rqmode; int lkb_grmode; int lkb_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__,...) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2, struct dlm_lkb *VAR_3,
          struct dlm_rsb *VAR_4)
{
 FUNC_1(VAR_2, "%08x %s", VAR_3->lkb_id, FUNC_0(VAR_3->lkb_grmode));

 if (VAR_3->lkb_status == VAR_0 ||
     VAR_3->lkb_status == VAR_1)
  FUNC_1(VAR_2, " (%s)", FUNC_0(VAR_3->lkb_rqmode));

 if (VAR_3->lkb_nodeid) {
  if (VAR_3->lkb_nodeid != VAR_4->res_nodeid)
   FUNC_1(VAR_2, " Remote: %3d %08x", VAR_3->lkb_nodeid,
       VAR_3->lkb_remid);
  else
   FUNC_1(VAR_2, " Master:     %08x", VAR_3->lkb_remid);
 }

 if (VAR_3->lkb_wait_type)
  FUNC_1(VAR_2, " wait_type: %d", VAR_3->lkb_wait_type);

 FUNC_2(VAR_2, '\n');
}

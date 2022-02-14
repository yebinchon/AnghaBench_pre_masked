
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flag; } ;
struct TYPE_5__ {int fcf_flag; TYPE_1__ current_rec; } ;
struct lpfc_hba {scalar_t__ link_state; TYPE_3__* pport; int hbalock; TYPE_2__ fcf; } ;
struct TYPE_6__ {int load_flag; int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,int) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct lpfc_hba *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_7, VAR_2, VAR_3,
    "2748 Failed to prepare for unregistering "
    "HBA's FCF record: rc=%d\n", VAR_8);
  return;
 }


 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  return;

 VAR_7->fcf.fcf_flag = 0;
 VAR_7->fcf.current_rec.flag = 0;





 if ((VAR_7->pport->load_flag & VAR_1) ||
     (VAR_7->link_state < VAR_6))
  return;


 FUNC_5(&VAR_7->hbalock);
 VAR_7->fcf.fcf_flag |= VAR_0;
 FUNC_6(&VAR_7->hbalock);


 FUNC_1(VAR_7);

 VAR_8 = FUNC_2(VAR_7, VAR_5);

 if (VAR_8) {
  FUNC_5(&VAR_7->hbalock);
  VAR_7->fcf.fcf_flag &= ~VAR_0;
  FUNC_6(&VAR_7->hbalock);
  FUNC_0(VAR_7, VAR_2, VAR_3|VAR_4,
    "2553 lpfc_unregister_unused_fcf failed "
    "to read FCF record HBA state x%x\n",
    VAR_7->pport->port_state);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_5__ {int fcf_indx; } ;
struct TYPE_6__ {int fcf_flag; int fcf_redisc_attempted; TYPE_2__ current_rec; } ;
struct lpfc_hba {int hba_flag; TYPE_3__ fcf; TYPE_1__* pport; int hbalock; } ;
struct TYPE_4__ {int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct lpfc_vport *VAR_10, uint16_t VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_10->phba;
 int VAR_13;

 if (VAR_11 == VAR_8) {
  FUNC_7(&VAR_12->hbalock);
  if (VAR_12->hba_flag & VAR_3) {
   FUNC_8(&VAR_12->hbalock);
   FUNC_1(VAR_12, VAR_4, VAR_7,
     "2872 Devloss tmo with no eligible "
     "FCF, unregister in-use FCF (x%x) "
     "and rescan FCF table\n",
     VAR_12->fcf.current_rec.fcf_indx);
   FUNC_6(VAR_12);
   goto stop_flogi_current_fcf;
  }

  VAR_12->hba_flag &= ~VAR_1;

  VAR_12->fcf.fcf_flag &= ~(VAR_0 | VAR_2);
  FUNC_8(&VAR_12->hbalock);
  FUNC_1(VAR_12, VAR_4, VAR_7,
    "2865 No FCF available, stop roundrobin FCF "
    "failover and change port state:x%x/x%x\n",
    VAR_12->pport->port_state, VAR_9);
  VAR_12->pport->port_state = VAR_9;

  if (!VAR_12->fcf.fcf_redisc_attempted) {
   FUNC_5(VAR_12);

   VAR_13 = FUNC_4(VAR_12);
   if (!VAR_13) {
    FUNC_1(VAR_12, VAR_4, VAR_7,
      "3195 Rediscover FCF table\n");
    VAR_12->fcf.fcf_redisc_attempted = 1;
    FUNC_2(VAR_12);
   } else {
    FUNC_1(VAR_12, VAR_5, VAR_7,
      "3196 Rediscover FCF table "
      "failed. Status:x%x\n", VAR_13);
   }
  } else {
   FUNC_1(VAR_12, VAR_5, VAR_7,
     "3197 Already rediscover FCF table "
     "attempted. No more retry\n");
  }
  goto stop_flogi_current_fcf;
 } else {
  FUNC_1(VAR_12, VAR_4, VAR_7 | VAR_6,
    "2794 Try FLOGI roundrobin FCF failover to "
    "(x%x)\n", VAR_11);
  VAR_13 = FUNC_3(VAR_12, VAR_11);
  if (VAR_13)
   FUNC_1(VAR_12, VAR_5, VAR_7 | VAR_6,
     "2761 FLOGI roundrobin FCF failover "
     "failed (rc:x%x) to read FCF (x%x)\n",
     VAR_13, VAR_12->fcf.current_rec.fcf_indx);
  else
   goto stop_flogi_current_fcf;
 }
 return 0;

stop_flogi_current_fcf:
 FUNC_0(VAR_10);
 return 1;
}

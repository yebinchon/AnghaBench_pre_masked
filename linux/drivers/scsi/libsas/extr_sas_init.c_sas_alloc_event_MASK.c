
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {scalar_t__ event_thres; TYPE_2__ core; } ;
struct asd_sas_phy {int event_nr; int id; int in_shutdown; struct sas_ha_struct* ha; } ;
struct asd_sas_event {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {scalar_t__ lldd_control_phy; } ;
struct TYPE_4__ {int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,struct asd_sas_event*) ;
 struct asd_sas_event* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct asd_sas_phy*,int ) ;
 struct sas_internal* FUNC_10 (int ) ;

struct asd_sas_event *FUNC_11(struct asd_sas_phy *VAR_4)
{
 struct asd_sas_event *VAR_5;
 gfp_t VAR_6 = FUNC_5() ? VAR_0 : VAR_1;
 struct sas_ha_struct *VAR_7 = VAR_4->ha;
 struct sas_internal *VAR_8 =
  FUNC_10(VAR_7->core.shost->transportt);

 VAR_5 = FUNC_7(VAR_3, VAR_6);
 if (!VAR_5)
  return ((void*)0);

 FUNC_2(&VAR_4->event_nr);

 if (FUNC_3(&VAR_4->event_nr) > VAR_4->ha->event_thres) {
  if (VAR_8->dft->lldd_control_phy) {
   if (FUNC_4(&VAR_4->in_shutdown, 0, 1) == 0) {
    FUNC_8("The phy%d bursting events, shut it down.\n",
       VAR_4->id);
    FUNC_9(VAR_4, VAR_2);
   }
  } else {

   FUNC_0(1, "PHY control not supported.\n");
   FUNC_6(VAR_3, VAR_5);
   FUNC_1(&VAR_4->event_nr);
   VAR_5 = ((void*)0);
  }
 }

 return VAR_5;
}

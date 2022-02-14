
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_state {int unused_service; struct vchiq_service** services; } ;
struct TYPE_2__ {int fourcc; } ;
struct vchiq_service {scalar_t__ srvstate; scalar_t__ service_use_count; int client_id; TYPE_1__ base; } ;
struct vchiq_arm_state {int vc_suspend_state; int vc_resume_state; int peer_use_count; int videocore_use_count; int susp_res_lock; } ;
struct service_data_struct {scalar_t__ use_count; int clientid; int fourcc; } ;
typedef enum vc_suspend_status { ____Placeholder_vc_suspend_status } vc_suspend_status ;
typedef enum vc_resume_status { ____Placeholder_vc_resume_status } vc_resume_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct service_data_struct*) ;
 struct service_data_struct* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_5 (struct vchiq_state*) ;
 int FUNC_6 (int ,char*,int,...) ;
 struct vchiq_arm_state* FUNC_7 (struct vchiq_state*) ;
 int VAR_7 ;

void
FUNC_8(struct vchiq_state *VAR_8)
{
 struct vchiq_arm_state *VAR_9 = FUNC_7(VAR_8);
 struct service_data_struct *VAR_10;
 int VAR_11, VAR_12 = 0;


 int VAR_13 = 0;
 static const char *VAR_14 = "<-- preventing suspend";

 enum vc_suspend_status VAR_15;
 enum vc_resume_status VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 if (!VAR_9)
  return;

 VAR_10 = FUNC_2(VAR_1, sizeof(*VAR_10),
         VAR_0);
 if (!VAR_10)
  return;

 FUNC_3(&VAR_9->susp_res_lock);
 VAR_15 = VAR_9->vc_suspend_state;
 VAR_16 = VAR_9->vc_resume_state;
 VAR_17 = VAR_9->peer_use_count;
 VAR_18 = VAR_9->videocore_use_count;
 VAR_19 = VAR_8->unused_service;
 if (VAR_19 > VAR_1)
  VAR_13 = 1;

 for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11++) {
  struct vchiq_service *VAR_20 = VAR_8->services[VAR_11];

  if (!VAR_20)
   continue;

  if (VAR_13 && !VAR_20->service_use_count)
   continue;

  if (VAR_20->srvstate == VAR_2)
   continue;

  VAR_10[VAR_12].fourcc = VAR_20->base.fourcc;
  VAR_10[VAR_12].clientid = VAR_20->client_id;
  VAR_10[VAR_12].use_count = VAR_20->service_use_count;
  VAR_12++;
  if (VAR_12 >= VAR_1)
   break;
 }

 FUNC_4(&VAR_9->susp_res_lock);

 FUNC_6(VAR_7,
  "-- Videcore suspend state: %s --",
  VAR_6[VAR_15 + VAR_4]);
 FUNC_6(VAR_7,
  "-- Videcore resume state: %s --",
  VAR_5[VAR_16 + VAR_3]);

 if (VAR_13)
  FUNC_6(VAR_7, "Too many active "
   "services (%d).  Only dumping up to first %d services "
   "with non-zero use-count", VAR_19, VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  FUNC_6(VAR_7,
   "----- %c%c%c%c:%d service count %d %s",
   FUNC_0(VAR_10[VAR_11].fourcc),
   VAR_10[VAR_11].clientid,
   VAR_10[VAR_11].use_count,
   VAR_10[VAR_11].use_count ? VAR_14 : "");
 }
 FUNC_6(VAR_7,
  "----- VCHIQ use count count %d", VAR_17);
 FUNC_6(VAR_7,
  "--- Overall vchiq instance use count %d", VAR_18);

 FUNC_1(VAR_10);

 FUNC_5(VAR_8);
}

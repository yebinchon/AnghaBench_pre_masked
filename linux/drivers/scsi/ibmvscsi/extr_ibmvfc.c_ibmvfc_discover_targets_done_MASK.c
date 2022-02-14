
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ibmvfc_host {int work_wait_q; int dev; int num_targets; } ;
struct ibmvfc_event {TYPE_1__* xfer_iu; struct ibmvfc_host* vhost; } ;
struct TYPE_4__ {int status; } ;
struct ibmvfc_discover_targets {int error; int status; int num_written; TYPE_2__ common; } ;
struct TYPE_3__ {struct ibmvfc_discover_targets discover_targets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ibmvfc_host*,char*) ;
 int FUNC_4 (struct ibmvfc_event*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct ibmvfc_host*,int ) ;
 int FUNC_7 (struct ibmvfc_host*,int,char*,int ,int,int) ;
 int FUNC_8 (struct ibmvfc_host*) ;
 int FUNC_9 (struct ibmvfc_host*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ibmvfc_event *VAR_3)
{
 struct ibmvfc_host *VAR_4 = VAR_3->vhost;
 struct ibmvfc_discover_targets *VAR_5 = &VAR_3->xfer_iu->discover_targets;
 u32 VAR_6 = FUNC_0(VAR_5->common.status);
 int VAR_7 = VAR_0;

 switch (VAR_6) {
 case 128:
  FUNC_3(VAR_4, "Discover Targets succeeded\n");
  VAR_4->num_targets = FUNC_1(VAR_5->num_written);
  FUNC_9(VAR_4, VAR_1);
  break;
 case 129:
  VAR_7 += FUNC_8(VAR_4);
  FUNC_7(VAR_4, VAR_7, "Discover Targets failed: %s (%x:%x)\n",
      FUNC_5(FUNC_0(VAR_5->status), FUNC_0(VAR_5->error)),
      FUNC_0(VAR_5->status), FUNC_0(VAR_5->error));
  break;
 case 130:
  break;
 default:
  FUNC_2(VAR_4->dev, "Invalid Discover Targets response: 0x%x\n", VAR_6);
  FUNC_6(VAR_4, VAR_2);
  break;
 }

 FUNC_4(VAR_3);
 FUNC_10(&VAR_4->work_wait_q);
}

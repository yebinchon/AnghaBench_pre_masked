
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; void* opcode; void* version; } ;
struct ibmvfc_npiv_logout_mad {TYPE_1__ common; } ;
struct ibmvfc_host {int dummy; } ;
struct TYPE_4__ {struct ibmvfc_npiv_logout_mad npiv_logout; } ;
struct ibmvfc_event {TYPE_2__ iu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct ibmvfc_host*,char*) ;
 struct ibmvfc_event* FUNC_3 (struct ibmvfc_host*) ;
 int FUNC_4 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_5 (struct ibmvfc_host*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_7 (struct ibmvfc_host*,int ) ;
 int FUNC_8 (struct ibmvfc_npiv_logout_mad*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ibmvfc_host *VAR_6)
{
 struct ibmvfc_npiv_logout_mad *VAR_7;
 struct ibmvfc_event *VAR_8;

 VAR_8 = FUNC_3(VAR_6);
 FUNC_4(VAR_8, VAR_5, VAR_2);

 VAR_7 = &VAR_8->iu.npiv_logout;
 FUNC_8(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->common.version = FUNC_1(1);
 VAR_7->common.opcode = FUNC_1(VAR_3);
 VAR_7->common.length = FUNC_0(sizeof(struct ibmvfc_npiv_logout_mad));

 FUNC_7(VAR_6, VAR_0);

 if (!FUNC_6(VAR_8, VAR_6, VAR_4))
  FUNC_2(VAR_6, "Sent NPIV logout\n");
 else
  FUNC_5(VAR_6, VAR_1);
}

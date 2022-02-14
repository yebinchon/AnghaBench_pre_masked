
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int vdm_state; int vdo_count; int vdm_retries; int vdo_retry; int * vdo_data; int vdm_state_machine; int wq; int message_id; int negotiated_rev; int data_role; int pwr_role; int state; int attached; } ;
struct pd_message {int * payload; int header; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct pd_message*,int ,int) ;
 int FUNC_3 (int ,int *,unsigned long) ;
 int FUNC_4 (struct tcpm_port*,char*) ;
 int FUNC_5 (struct tcpm_port*,int ,struct pd_message*) ;
 unsigned long FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct tcpm_port *VAR_6)
{
 struct pd_message VAR_7;
 int VAR_8, VAR_9;

 switch (VAR_6->vdm_state) {
 case 129:

  if (!VAR_6->attached) {
   VAR_6->vdm_state = VAR_4;
   break;
  }





  if (VAR_6->state != VAR_2 && VAR_6->state != VAR_1)
   break;


  FUNC_2(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.header = FUNC_0(VAR_0,
       VAR_6->pwr_role,
       VAR_6->data_role,
       VAR_6->negotiated_rev,
       VAR_6->message_id, VAR_6->vdo_count);
  for (VAR_8 = 0; VAR_8 < VAR_6->vdo_count; VAR_8++)
   VAR_7.payload[VAR_8] = FUNC_1(VAR_6->vdo_data[VAR_8]);
  VAR_9 = FUNC_5(VAR_6, VAR_3, &VAR_7);
  if (VAR_9 < 0) {
   VAR_6->vdm_state = 130;
  } else {
   unsigned long VAR_10;

   VAR_6->vdm_retries = 0;
   VAR_6->vdm_state = 131;
   VAR_10 = FUNC_6(VAR_6->vdo_data[0]);
   FUNC_3(VAR_6->wq, &VAR_6->vdm_state_machine,
      VAR_10);
  }
  break;
 case 128:
  VAR_6->vdo_data[0] = VAR_6->vdo_retry;
  VAR_6->vdo_count = 1;
  VAR_6->vdm_state = 129;
  break;
 case 131:
  VAR_6->vdm_state = VAR_5;
  break;
 case 130:






  if (VAR_6->vdm_retries < 3) {
   FUNC_4(VAR_6, "VDM Tx error, retry");
   VAR_6->vdm_retries++;
   VAR_6->vdm_state = 129;
  }
  break;
 default:
  break;
 }
}

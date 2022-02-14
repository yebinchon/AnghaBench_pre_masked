
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int port_state; struct fc_vport* fc_vport; } ;
struct fc_vport {int vport_last_state; int vport_state; } ;
typedef enum fc_vport_state { ____Placeholder_fc_vport_state } fc_vport_state ;





 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

inline void FUNC_0(struct lpfc_vport *VAR_3,
     enum fc_vport_state VAR_4)
{
 struct fc_vport *VAR_5 = VAR_3->fc_vport;

 if (VAR_5) {





  if (VAR_4 != VAR_0)
   VAR_5->vport_last_state = VAR_5->vport_state;
  VAR_5->vport_state = VAR_4;
 }


 switch (VAR_4) {
 case 128:
 case 129:
 case 133:
 case 132:
 case 131:
  VAR_3->port_state = VAR_1;
  break;
 case 130:
  VAR_3->port_state = VAR_2;
  break;
 default:

  break;
 }
}

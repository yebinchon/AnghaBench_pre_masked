
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int vbus_present; int vbus_never_low; int state; int attached; int pwr_role; } ;





 int VAR_0 ;



 int VAR_1 ;






 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct tcpm_port*) ;
 int FUNC_1 (struct tcpm_port*,char*) ;
 int FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (struct tcpm_port*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tcpm_port *VAR_6)
{
 FUNC_1(VAR_6, "VBUS off");
 VAR_6->vbus_present = 0;
 VAR_6->vbus_never_low = 0;
 switch (VAR_6->state) {
 case 138:
  FUNC_3(VAR_6, VAR_1, 0);
  break;
 case 131:
  FUNC_3(VAR_6, VAR_3, 0);
  break;
 case 143:
  break;

 case 136:

  break;
 case 130:

  if (FUNC_2(VAR_6))
   FUNC_3(VAR_6, VAR_4, 0);
  break;
 case 132:

  break;
 case 135:
 case 133:
 case 134:
  break;
 case 139:
  FUNC_3(VAR_6, VAR_2, 0);
  break;

 case 137:
  break;

 case 140:
  FUNC_3(VAR_6, VAR_0, 0);
  break;

 case 141:

  break;

 case 142:
  FUNC_3(VAR_6, FUNC_0(VAR_6), 0);
  break;
 case 128:
 case 129:

  break;
 default:
  if (VAR_6->pwr_role == VAR_5 &&
      VAR_6->attached)
   FUNC_3(VAR_6, VAR_2, 0);
  break;
 }
}

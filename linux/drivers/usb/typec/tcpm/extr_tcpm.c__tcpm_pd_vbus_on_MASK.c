
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int vbus_present; int state; int explicit_contract; } ;


 int const VAR_0 ;


 int const VAR_1 ;

 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;




 int FUNC_0 (struct tcpm_port*,char*) ;
 int FUNC_1 (struct tcpm_port*) ;
 int FUNC_2 (struct tcpm_port*,int const,int ) ;
 int FUNC_3 (struct tcpm_port*) ;

__attribute__((used)) static void FUNC_4(struct tcpm_port *VAR_5)
{
 FUNC_0(VAR_5, "VBUS on");
 VAR_5->vbus_present = 1;
 switch (VAR_5->state) {
 case 139:
  VAR_5->explicit_contract = 1;
  FUNC_2(VAR_5, VAR_2, 0);
  break;
 case 141:
  FUNC_2(VAR_5, 141, 0);
  break;

 case 142:
  FUNC_2(VAR_5, FUNC_3(VAR_5) ? VAR_4
       : VAR_0,
           0);
  break;
 case 140:
  FUNC_2(VAR_5, VAR_1, 0);
  break;
 case 133:
  FUNC_2(VAR_5, VAR_3, 0);
  break;
 case 132:
  FUNC_2(VAR_5, VAR_3, 0);
  break;

 case 138:

  break;
 case 131:

  break;
 case 130:
  FUNC_2(VAR_5, 131, 0);
  break;
 case 134:

  break;
 case 137:

  break;
 case 135:
  if (FUNC_1(VAR_5))
   FUNC_2(VAR_5, VAR_0, 0);
  break;
 case 136:

  break;
 case 128:
 case 129:

  break;
 default:
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int state; int mutex; } ;
typedef enum srp_rport_state { ____Placeholder_srp_rport_state } srp_rport_state ;


 int VAR_0 ;




 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct srp_rport *VAR_1,
          enum srp_rport_state VAR_2)
{
 enum srp_rport_state VAR_3 = VAR_1->state;

 FUNC_0(&VAR_1->mutex);

 switch (VAR_2) {
 case 128:
  switch (VAR_3) {
  case 129:
   goto invalid;
  default:
   break;
  }
  break;
 case 131:
  switch (VAR_3) {
  case 128:
   break;
  default:
   goto invalid;
  }
  break;
 case 130:
  switch (VAR_3) {
  case 129:
   goto invalid;
  default:
   break;
  }
  break;
 case 129:
  break;
 }
 VAR_1->state = VAR_2;
 return 0;

invalid:
 return -VAR_0;
}

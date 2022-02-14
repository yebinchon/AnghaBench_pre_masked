
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* pass_llc_promisc; void* pass_DB; void* pass_NSA; void* pass_SMT; } ;
struct TYPE_4__ {TYPE_1__ hwm; } ;
struct s_smc {TYPE_2__ os; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct s_smc*,int) ;

void FUNC_1(struct s_smc *VAR_2, int VAR_3)
{
 switch(VAR_3) {
 case 129:
  VAR_2->os.hwm.pass_SMT = VAR_1 ;
  break ;
 case 136:
  VAR_2->os.hwm.pass_SMT = VAR_0 ;
  break ;
 case 130:
  VAR_2->os.hwm.pass_NSA = VAR_1 ;
  break ;
 case 137:
  VAR_2->os.hwm.pass_NSA = VAR_0 ;
  break ;
 case 131:
  VAR_2->os.hwm.pass_DB = VAR_1 ;
  break ;
 case 138:
  VAR_2->os.hwm.pass_DB = VAR_0 ;
  break ;
 case 139:
  VAR_2->os.hwm.pass_SMT = VAR_2->os.hwm.pass_NSA = VAR_0 ;
  VAR_2->os.hwm.pass_DB = VAR_0 ;
  VAR_2->os.hwm.pass_llc_promisc = VAR_1 ;
  FUNC_0(VAR_2,140) ;
  break ;
 case 141:
  VAR_2->os.hwm.pass_llc_promisc = VAR_0 ;
  break ;
 case 133:
  VAR_2->os.hwm.pass_llc_promisc = VAR_1 ;
  break ;
 case 134:
 case 142:
 case 128:
 case 135:
 case 132:
 case 140:
 default:
  FUNC_0(VAR_2,VAR_3) ;
  break ;
 }
}

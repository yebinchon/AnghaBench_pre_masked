
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fib {scalar_t__ hw_fib_va; } ;
struct aac_hba_resp {int service_response; } ;
struct TYPE_2__ {struct aac_hba_resp err; } ;
struct aac_native_hba {TYPE_1__ resp; } ;
struct aac_hba_map_info {int reset_state; } ;






 int FUNC_0 (struct fib*) ;

void FUNC_1(void *VAR_0, struct fib *VAR_1)
{
 struct aac_hba_resp *VAR_2 =
  &((struct aac_native_hba *)VAR_1->hw_fib_va)->resp.err;
 struct aac_hba_map_info *VAR_3 = VAR_0;
 int VAR_4;

 switch (VAR_2->service_response) {
 case 129:
  VAR_4 = -1;
  break;
 case 130:
  VAR_4 = 0;
  break;
 case 131:
 case 128:
  VAR_4 = 0;
  break;
 default:
  VAR_4 = -2;
  break;
 }
 FUNC_0(VAR_1);

 VAR_3->reset_state = VAR_4;
}

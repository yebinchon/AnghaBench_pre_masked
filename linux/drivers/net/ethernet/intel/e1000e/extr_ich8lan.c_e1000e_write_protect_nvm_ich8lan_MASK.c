
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flockdn; } ;
union ich8_hws_flash_status {void* regval; TYPE_2__ hsf_status; } ;
struct TYPE_4__ {int base; int limit; int wpe; } ;
union ich8_flash_protected_range {void* regval; TYPE_1__ range; } ;
typedef int u32 ;
struct TYPE_6__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {TYPE_3__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

void FUNC_5(struct e1000_hw *VAR_4)
{
 struct e1000_nvm_info *VAR_5 = &VAR_4->nvm;
 union ich8_flash_protected_range VAR_6;
 union ich8_hws_flash_status VAR_7;
 u32 VAR_8;

 VAR_5->ops.acquire(VAR_4);

 VAR_8 = FUNC_1(VAR_1);


 VAR_6 = FUNC_1(VAR_3);
 VAR_6 = VAR_8 & VAR_0;
 VAR_6 = ((VAR_8 >> 16) & VAR_0);
 VAR_6 = 1;
 FUNC_2(VAR_3, VAR_6);






 VAR_7.regval = FUNC_0(VAR_2);
 VAR_7.hsf_status.flockdn = 1;
 FUNC_2(VAR_2, VAR_7.regval);

 VAR_5->ops.release(VAR_4);
}

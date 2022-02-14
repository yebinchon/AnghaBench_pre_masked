
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ext_info; } ;
struct ath10k_sdio {int func; TYPE_2__ mbox_info; int * mbox_size; int * mbox_addr; } ;
struct ath10k {int dummy; } ;
struct TYPE_3__ {int htc_ext_sz; int htc_ext_addr; } ;


 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int) ;
 int VAR_0 ;
 struct ath10k_sdio* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_1)
{
 struct ath10k_sdio *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;





 FUNC_5(20);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;




 VAR_2->mbox_addr[0] = VAR_2->mbox_info.ext_info[0].htc_ext_addr;
 VAR_2->mbox_size[0] = VAR_2->mbox_info.ext_info[0].htc_ext_sz;

 FUNC_6(VAR_2->func);


 VAR_3 = FUNC_7(VAR_2->func, VAR_0);
 if (VAR_3) {
  FUNC_4(VAR_1, "failed to claim sdio interrupt: %d\n", VAR_3);
  FUNC_8(VAR_2->func);
  return VAR_3;
 }

 FUNC_8(VAR_2->func);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  FUNC_4(VAR_1, "failed to enable sdio interrupts: %d\n", VAR_3);


 VAR_3 = FUNC_2(VAR_1, 1);
 if (VAR_3)
  return VAR_3;


 FUNC_5(20);

 VAR_3 = FUNC_2(VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ath10k_pci {TYPE_1__* pipe_info; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int ce_hdl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 struct ath10k_pci* FUNC_2 (struct ath10k*) ;

u16 FUNC_3(struct ath10k *VAR_1, u8 VAR_2)
{
 struct ath10k_pci *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_0, "pci hif get free queue number\n");

 return FUNC_0(VAR_3->pipe_info[VAR_2].ce_hdl);
}

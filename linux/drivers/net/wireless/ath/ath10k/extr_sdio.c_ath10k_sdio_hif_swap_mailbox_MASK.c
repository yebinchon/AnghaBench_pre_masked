
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_sdio {int swap_mbox; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,int,int*) ;
 struct ath10k_sdio* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_3)
{
 struct ath10k_sdio *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_5(FUNC_0(VAR_2));

 VAR_7 = FUNC_2(VAR_3, VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_3, "unable to read hi_acs_flags : %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_6 & VAR_1) {
  FUNC_1(VAR_3, VAR_0,
      "sdio mailbox swap service enabled\n");
  VAR_4->swap_mbox = 1;
 } else {
  FUNC_1(VAR_3, VAR_0,
      "sdio mailbox swap service disabled\n");
  VAR_4->swap_mbox = 0;
 }

 return 0;
}

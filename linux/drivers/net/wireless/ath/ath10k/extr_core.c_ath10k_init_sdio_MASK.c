
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;
typedef enum ath10k_firmware_mode { ____Placeholder_ath10k_firmware_mode } ath10k_firmware_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,int ,int*) ;
 int FUNC_1 (struct ath10k*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_9, enum ath10k_firmware_mode VAR_10)
{
 u32 VAR_11 = 0;

 FUNC_1(VAR_9, VAR_6, 256);
 FUNC_1(VAR_9, VAR_7, 99);
 FUNC_0(VAR_9, VAR_5, &VAR_11);




 VAR_11 &= ~VAR_2;




 VAR_11 &= ~VAR_1;

 if (VAR_10 == VAR_0)
  VAR_11 &= ~VAR_3;
 else
  VAR_11 |= VAR_3;

 FUNC_1(VAR_9, VAR_5, VAR_11);




 FUNC_0(VAR_9, VAR_8, &VAR_11);
 VAR_11 |= VAR_4;
 FUNC_1(VAR_9, VAR_8, VAR_11);
}

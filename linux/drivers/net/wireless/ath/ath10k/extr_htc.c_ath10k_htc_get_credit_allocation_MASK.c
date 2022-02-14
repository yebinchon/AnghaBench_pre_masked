
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ath10k_htc {int total_transmit_credits; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct ath10k_htc *VAR_1,
        u16 VAR_2)
{
 u8 VAR_3 = 0;




 if (VAR_2 == VAR_0)
  VAR_3 = VAR_1->total_transmit_credits;

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {unsigned int sw_beacon_response_time; } ;
struct ath_hw {TYPE_1__ config; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned int*) ;

__attribute__((used)) static u32 FUNC_2(struct ath_hw *VAR_1, u64 VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_2 += FUNC_0(VAR_0 + VAR_1->config.sw_beacon_response_time);
 VAR_5 = FUNC_0(VAR_3);
 FUNC_1(VAR_2, VAR_5, &VAR_4);

 return (u32) VAR_2 + VAR_5 - VAR_4;
}

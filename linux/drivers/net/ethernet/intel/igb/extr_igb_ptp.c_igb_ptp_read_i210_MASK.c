
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct timespec64 {void* tv_nsec; void* tv_sec; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_3,
         struct timespec64 *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 u32 VAR_6, VAR_7;





 FUNC_0(VAR_2);
 VAR_7 = FUNC_0(VAR_1);
 VAR_6 = FUNC_0(VAR_0);

 VAR_4->tv_sec = VAR_6;
 VAR_4->tv_nsec = VAR_7;
}

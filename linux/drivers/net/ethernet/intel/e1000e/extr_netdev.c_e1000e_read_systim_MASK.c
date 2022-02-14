
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ptp_system_timestamp {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags2; struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct e1000_hw*,int,struct ptp_system_timestamp*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ptp_system_timestamp*) ;
 int FUNC_3 (struct ptp_system_timestamp*) ;

u64 FUNC_4(struct e1000_adapter *VAR_4,
         struct ptp_system_timestamp *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_4->hw;
 u32 VAR_7, VAR_8, VAR_9;
 u64 VAR_10;






 FUNC_3(VAR_5);
 VAR_7 = FUNC_1(VAR_3);
 FUNC_2(VAR_5);
 VAR_9 = FUNC_1(VAR_2);

 if (VAR_7 >= (u32)0xffffffff - VAR_0) {
  FUNC_3(VAR_5);
  VAR_8 = FUNC_1(VAR_3);
  FUNC_2(VAR_5);
  if (VAR_7 > VAR_8) {



   VAR_9 = FUNC_1(VAR_2);
   VAR_7 = VAR_8;
  }
 }
 VAR_10 = (u64)VAR_7;
 VAR_10 |= (u64)VAR_9 << 32;

 if (VAR_4->flags2 & VAR_1)
  VAR_10 = FUNC_0(VAR_6, VAR_10, VAR_5);

 return VAR_10;
}

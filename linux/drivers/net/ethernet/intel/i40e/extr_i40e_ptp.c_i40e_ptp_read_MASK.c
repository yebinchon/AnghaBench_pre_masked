
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timespec64 {int dummy; } ;
struct ptp_system_timestamp {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct timespec64 FUNC_0 (int) ;
 int FUNC_1 (struct ptp_system_timestamp*) ;
 int FUNC_2 (struct ptp_system_timestamp*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_pf *VAR_2, struct timespec64 *VAR_3,
     struct ptp_system_timestamp *VAR_4)
{
 struct i40e_hw *VAR_5 = &VAR_2->hw;
 u32 VAR_6, VAR_7;
 u64 VAR_8;


 FUNC_2(VAR_4);
 VAR_7 = FUNC_3(VAR_5, VAR_1);
 FUNC_1(VAR_4);
 VAR_6 = FUNC_3(VAR_5, VAR_0);

 VAR_8 = (((u64)VAR_6) << 32) | VAR_7;

 *VAR_3 = FUNC_0(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct iwl_mvm {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,scalar_t__*,int*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u64 FUNC_2(struct iwl_mvm *VAR_1, __le32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5;
 u64 VAR_6;

 FUNC_0(VAR_1, &VAR_4, &VAR_6);

 if (VAR_4 >= VAR_3)
  VAR_5 = VAR_4 - VAR_3;
 else
  VAR_5 = VAR_4 + (VAR_0 - VAR_3 + 1);

 return VAR_6 - (u64)VAR_5 * 1000;
}

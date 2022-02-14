
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_mvm {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static inline __le16 FUNC_2(struct iwl_mvm *VAR_4)
{
 u16 VAR_5;
 u8 VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 VAR_5 = VAR_6 << VAR_3;
 VAR_5 |= VAR_6 << VAR_1;
 VAR_5 |= VAR_6 << VAR_2;
 VAR_5 |= 0x1 << VAR_0;
 return FUNC_0(VAR_5);
}

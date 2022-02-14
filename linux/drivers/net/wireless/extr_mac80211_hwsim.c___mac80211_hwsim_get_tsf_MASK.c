
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mac80211_hwsim_data {scalar_t__ tsf_offset; } ;
typedef int __le64 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static __le64 FUNC_2(struct mac80211_hwsim_data *VAR_0)
{
 u64 VAR_1 = FUNC_1();
 return FUNC_0(VAR_1 + VAR_0->tsf_offset);
}

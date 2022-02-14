
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qeth_ipa_caps {int enabled; } ;



__attribute__((used)) static inline bool FUNC_0(struct qeth_ipa_caps *VAR_0, u32 VAR_1)
{
 return (VAR_0->enabled & VAR_1) == VAR_1;
}

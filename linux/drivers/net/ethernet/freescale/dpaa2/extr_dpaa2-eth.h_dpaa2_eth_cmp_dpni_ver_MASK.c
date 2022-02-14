
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dpaa2_eth_priv {scalar_t__ dpni_ver_major; int dpni_ver_minor; } ;



__attribute__((used)) static inline int FUNC_0(struct dpaa2_eth_priv *VAR_0,
      u16 VAR_1, u16 VAR_2)
{
 if (VAR_0->dpni_ver_major == VAR_1)
  return VAR_0->dpni_ver_minor - VAR_2;
 return VAR_0->dpni_ver_major - VAR_1;
}

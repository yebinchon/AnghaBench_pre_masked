
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_wlan_private {int dummy; } ;


 int FUNC_0 (struct ks_wlan_private*) ;

__attribute__((used)) static inline u16 FUNC_1(struct ks_wlan_private *VAR_0)
{
 u16 VAR_1;

 VAR_1 = (FUNC_0(VAR_0) & 0xff);
 VAR_1 |= ((FUNC_0(VAR_0) << 8) & 0xff00);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ks_wlan_private {int dummy; } ;


 int FUNC_0 (struct ks_wlan_private*) ;

__attribute__((used)) static inline u32 FUNC_1(struct ks_wlan_private *VAR_0)
{
 u32 VAR_1;

 VAR_1 = (FUNC_0(VAR_0) & 0xff);
 VAR_1 |= ((FUNC_0(VAR_0) << 8) & 0x0000ff00);
 VAR_1 |= ((FUNC_0(VAR_0) << 16) & 0x00ff0000);
 VAR_1 |= ((FUNC_0(VAR_0) << 24) & 0xff000000);
 return VAR_1;
}

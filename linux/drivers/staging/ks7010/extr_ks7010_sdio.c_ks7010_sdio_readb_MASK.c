
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdio_func {int dummy; } ;
struct ks_wlan_private {int dummy; } ;


 struct sdio_func* FUNC_0 (struct ks_wlan_private*) ;
 int FUNC_1 (struct sdio_func*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct ks_wlan_private *VAR_0,
        u32 VAR_1, u8 *VAR_2)
{
 struct sdio_func *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 *VAR_2 = FUNC_1(VAR_3, VAR_1, &VAR_4);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsaf_drv_priv {int * soft_mac_tbl; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (struct dsaf_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_0)
{
 struct dsaf_drv_priv *VAR_1 =
     (struct dsaf_drv_priv *)FUNC_0(VAR_0);

 FUNC_1(VAR_0);


 FUNC_2(VAR_1->soft_mac_tbl);
 VAR_1->soft_mac_tbl = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_priv {int rx_mem_addr; } ;
struct wl1271 {struct wl12xx_priv* priv; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct wl1271* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct wl1271 *VAR_1 = FUNC_1(VAR_0);
 struct wl12xx_priv *VAR_2;

 if (!VAR_1)
  goto out;
 VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2->rx_mem_addr);

out:
 return FUNC_2(VAR_0);
}

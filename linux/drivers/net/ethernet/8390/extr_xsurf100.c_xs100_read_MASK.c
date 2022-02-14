
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct xsurf100_ax_plat_data {scalar_t__ data_area; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ei_device {scalar_t__ mem; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xsurf100_ax_plat_data* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct ei_device* FUNC_3 (struct net_device*) ;
 struct platform_device* FUNC_4 (int ) ;
 int FUNC_5 (void*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct ei_device *VAR_6 = FUNC_3(VAR_3);
 struct platform_device *VAR_7 = FUNC_4(VAR_3->dev.parent);
 struct xsurf100_ax_plat_data *VAR_8 = FUNC_0(&VAR_7->dev);


 while (VAR_5 > VAR_1) {
  FUNC_5(VAR_4, VAR_8->data_area +
      VAR_2,
      VAR_1);
  VAR_4 += VAR_1;
  VAR_5 -= VAR_1;
 }

 FUNC_5(VAR_4, VAR_8->data_area + VAR_2,
     VAR_5 & ~3);
 VAR_4 += VAR_5 & ~3;
 if (VAR_5 & 2) {
  *(uint16_t *)VAR_4 = FUNC_2(VAR_6->mem + VAR_0);
  VAR_4 += 2;
 }
 if (VAR_5 & 1)
  *(uint8_t *)VAR_4 = FUNC_1(VAR_6->mem + VAR_0);
}

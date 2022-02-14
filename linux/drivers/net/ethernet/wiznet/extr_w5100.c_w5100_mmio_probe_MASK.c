
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiznet_platform_data {void* mac_addr; int link_gpio; } ;
struct w5100_ops {int dummy; } ;
struct w5100_mmio_priv {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wiznet_platform_data* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 struct w5100_ops VAR_3 ;
 struct w5100_ops VAR_4 ;
 int FUNC_5 (int *,struct w5100_ops const*,int,void const*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct wiznet_platform_data *VAR_6 = FUNC_0(&VAR_5->dev);
 const void *VAR_7 = ((void*)0);
 struct resource *VAR_8;
 const struct w5100_ops *VAR_9;
 int VAR_10;

 if (VAR_6 && FUNC_1(VAR_6->mac_addr))
  VAR_7 = VAR_6->mac_addr;

 VAR_8 = FUNC_3(VAR_5, VAR_1, 0);
 if (FUNC_4(VAR_8) < VAR_2)
  VAR_9 = &VAR_4;
 else
  VAR_9 = &VAR_3;

 VAR_10 = FUNC_2(VAR_5, 0);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_5(&VAR_5->dev, VAR_9, sizeof(struct w5100_mmio_priv),
      VAR_7, VAR_10, VAR_6 ? VAR_6->link_gpio : -VAR_0);
}

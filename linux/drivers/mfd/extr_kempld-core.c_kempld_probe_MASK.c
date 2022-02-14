
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct kempld_platform_data {int pld_clock; } ;
struct kempld_device_data {int lock; struct device* dev; int pld_clock; scalar_t__ io_base; scalar_t__ io_data; scalar_t__ io_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kempld_platform_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*,int ,int ) ;
 struct kempld_device_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (int *) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct kempld_device_data*) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 const struct kempld_platform_data *VAR_5 =
  FUNC_0(&VAR_4->dev);
 struct device *VAR_6 = &VAR_4->dev;
 struct kempld_device_data *VAR_7;
 struct resource *VAR_8;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_4, VAR_3, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->io_base = FUNC_1(VAR_6, VAR_8->start,
     FUNC_7(VAR_8));
 if (!VAR_7->io_base)
  return -VAR_1;

 VAR_7->io_index = VAR_7->io_base;
 VAR_7->io_data = VAR_7->io_base + 1;
 VAR_7->pld_clock = VAR_5->pld_clock;
 VAR_7->dev = VAR_6;

 FUNC_4(&VAR_7->lock);
 FUNC_6(VAR_4, VAR_7);

 return FUNC_3(VAR_7);
}

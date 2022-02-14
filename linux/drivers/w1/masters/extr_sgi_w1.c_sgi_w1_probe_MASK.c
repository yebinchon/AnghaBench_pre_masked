
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgi_w1_platform_data {int dev_id; } ;
struct TYPE_2__ {int dev_id; int touch_bit; int reset_bus; struct sgi_w1_device* data; } ;
struct sgi_w1_device {TYPE_1__ bus_master; int dev_id; int mcr; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sgi_w1_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct resource*) ;
 struct sgi_w1_device* FUNC_4 (int *,int,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct sgi_w1_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct sgi_w1_device *VAR_6;
 struct sgi_w1_platform_data *VAR_7;
 struct resource *VAR_8;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(struct sgi_w1_device),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_5, VAR_2, 0);
 VAR_6->mcr = FUNC_3(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_6->mcr))
  return FUNC_1(VAR_6->mcr);

 VAR_6->bus_master.data = VAR_6;
 VAR_6->bus_master.reset_bus = VAR_3;
 VAR_6->bus_master.touch_bit = VAR_4;

 VAR_7 = FUNC_2(&VAR_5->dev);
 if (VAR_7) {
  FUNC_7(VAR_6->dev_id, VAR_7->dev_id, sizeof(VAR_6->dev_id));
  VAR_6->bus_master.dev_id = VAR_6->dev_id;
 }

 FUNC_6(VAR_5, VAR_6);

 return FUNC_8(&VAR_6->bus_master);
}

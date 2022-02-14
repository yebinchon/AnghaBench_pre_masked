
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nvec_chip {int dummy; } ;
struct TYPE_4__ {int ser_dev; int notifier; } ;


 int VAR_0 ;
 struct nvec_chip* FUNC_0 (int ) ;
 int FUNC_1 (struct nvec_chip*,int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct nvec_chip *VAR_3 = FUNC_0(VAR_2->dev.parent);

 FUNC_2(VAR_1.ser_dev, VAR_0);
 FUNC_3(VAR_1.ser_dev);
 FUNC_1(VAR_3, &VAR_1.notifier);
 FUNC_4(VAR_1.ser_dev);

 return 0;
}

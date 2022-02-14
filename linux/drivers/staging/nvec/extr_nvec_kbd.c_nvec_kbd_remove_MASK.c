
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nvec_chip {int dummy; } ;
struct TYPE_4__ {int notifier; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 struct nvec_chip* FUNC_0 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (struct nvec_chip*,int *) ;
 int FUNC_2 (struct nvec_chip*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4)
{
 struct nvec_chip *VAR_5 = FUNC_0(VAR_4->dev.parent);
 char VAR_6[] = { VAR_2, VAR_1 },
      VAR_7[] = { VAR_2, VAR_0,
      0 };
 FUNC_2(VAR_5, VAR_7, 3);
 FUNC_2(VAR_5, VAR_6, 2);
 FUNC_1(VAR_5, &VAR_3.notifier);

 return 0;
}

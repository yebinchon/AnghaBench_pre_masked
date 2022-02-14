
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssc_device {TYPE_2__* pdev; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct ssc_device *VAR_1)
{
 if (FUNC_0(VAR_1->pdev->dev.of_node, "#sound-dai-cells"))
  return -VAR_0;

 return 0;
}

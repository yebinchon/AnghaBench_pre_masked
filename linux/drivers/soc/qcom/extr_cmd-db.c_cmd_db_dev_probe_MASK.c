
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reserved_mem {int size; int base; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (int ,int ,int ) ;
 struct reserved_mem* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct reserved_mem *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_3(VAR_4->dev.of_node);
 if (!VAR_5) {
  FUNC_1(&VAR_4->dev, "failed to acquire memory region\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_5->base, VAR_5->size, VAR_2);
 if (!VAR_3) {
  VAR_6 = -VAR_1;
  VAR_3 = ((void*)0);
  return VAR_6;
 }

 if (!FUNC_0(VAR_3)) {
  FUNC_1(&VAR_4->dev, "Invalid Command DB Magic\n");
  return -VAR_0;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct velocity_info {int no_eeprom; TYPE_1__* dev; int memaddr; } ;
struct resource {int start; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ,struct resource*) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (struct resource*) ;

__attribute__((used)) static int FUNC_4(struct velocity_info *VAR_2)
{
 struct resource VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_2->dev->of_node, "no-eeprom", ((void*)0)))
  VAR_2->no_eeprom = 1;

 VAR_4 = FUNC_1(VAR_2->dev->of_node, 0, &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "unable to find memory address\n");
  return VAR_4;
 }

 VAR_2->memaddr = VAR_3.start;

 if (FUNC_3(&VAR_3) < VAR_1) {
  FUNC_0(VAR_2->dev, "memory region is too small.\n");
  return -VAR_0;
 }

 return 0;
}

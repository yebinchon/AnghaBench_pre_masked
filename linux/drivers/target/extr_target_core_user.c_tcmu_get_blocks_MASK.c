
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmu_dev {scalar_t__ dev_size; } ;
struct TYPE_2__ {scalar_t__ block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
typedef int sector_t ;


 struct tcmu_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static sector_t FUNC_2(struct se_device *VAR_0)
{
 struct tcmu_dev *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->dev_size - VAR_0->dev_attrib.block_size,
         VAR_0->dev_attrib.block_size);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pmu {TYPE_1__* info; int regmap; } ;
struct TYPE_2__ {int ack_offset; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct rockchip_pmu *VAR_0)
{
 unsigned int VAR_1;

 FUNC_0(VAR_0->regmap, VAR_0->info->ack_offset, &VAR_1);
 return VAR_1;
}

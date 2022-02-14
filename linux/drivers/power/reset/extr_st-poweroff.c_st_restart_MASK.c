
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int mask_rst_msk; int offset_rst_msk; int regmap; int mask_rst; int offset_rst; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2, unsigned long VAR_3,
        void *VAR_4)
{

 FUNC_0(VAR_1->regmap,
      VAR_1->offset_rst,
      VAR_1->mask_rst,
      0);


 FUNC_0(VAR_1->regmap,
      VAR_1->offset_rst_msk,
      VAR_1->mask_rst_msk,
      0);

 return VAR_0;
}

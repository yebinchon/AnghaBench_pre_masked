
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ntb_dev {int mw_count; TYPE_1__* reg; } ;
struct TYPE_2__ {int* mw_bar; } ;


 int VAR_0 ;

int FUNC_0(struct intel_ntb_dev *VAR_1, int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_1->mw_count)
  return -VAR_0;
 return VAR_1->reg->mw_bar[VAR_2];
}

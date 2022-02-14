
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int pdev; } ;
struct intel_ntb_dev {int b2b_idx; int b2b_off; TYPE_1__ ntb; } ;
typedef scalar_t__ resource_size_t ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (struct intel_ntb_dev*,int) ;
 struct intel_ntb_dev* FUNC_1 (struct ntb_dev*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

int FUNC_4(struct ntb_dev *VAR_0, int VAR_1,
          phys_addr_t *VAR_2, resource_size_t *VAR_3)
{
 struct intel_ntb_dev *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 if (VAR_1 >= VAR_4->b2b_idx && !VAR_4->b2b_off)
  VAR_1 += 1;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2)
  *VAR_2 = FUNC_3(VAR_4->ntb.pdev, VAR_5) +
   (VAR_1 == VAR_4->b2b_idx ? VAR_4->b2b_off : 0);

 if (VAR_3)
  *VAR_3 = FUNC_2(VAR_4->ntb.pdev, VAR_5) -
   (VAR_1 == VAR_4->b2b_idx ? VAR_4->b2b_off : 0);

 return 0;
}

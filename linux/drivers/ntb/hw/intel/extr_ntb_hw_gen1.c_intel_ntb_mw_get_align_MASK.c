
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int pdev; } ;
struct intel_ntb_dev {int b2b_idx; int b2b_off; TYPE_1__ ntb; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_ntb_dev*,int) ;
 struct intel_ntb_dev* FUNC_1 (struct ntb_dev*) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct ntb_dev *VAR_2, int VAR_3, int VAR_4,
      resource_size_t *VAR_5,
      resource_size_t *VAR_6,
      resource_size_t *VAR_7)
{
 struct intel_ntb_dev *VAR_8 = FUNC_1(VAR_2);
 resource_size_t VAR_9, VAR_10;
 int VAR_11;

 if (VAR_3 != VAR_1)
  return -VAR_0;

 if (VAR_4 >= VAR_8->b2b_idx && !VAR_8->b2b_off)
  VAR_4 += 1;

 VAR_11 = FUNC_0(VAR_8, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9 = FUNC_2(VAR_8->ntb.pdev, VAR_11);

 if (VAR_4 == VAR_8->b2b_idx)
  VAR_10 = VAR_9 - VAR_8->b2b_off;
 else
  VAR_10 = VAR_9;

 if (VAR_5)
  *VAR_5 = FUNC_2(VAR_8->ntb.pdev, VAR_11);

 if (VAR_6)
  *VAR_6 = 1;

 if (VAR_7)
  *VAR_7 = VAR_10;

 return 0;
}

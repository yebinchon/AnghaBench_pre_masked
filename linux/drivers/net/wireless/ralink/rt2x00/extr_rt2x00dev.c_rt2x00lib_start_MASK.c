
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {int flags; scalar_t__ intf_associated; scalar_t__ intf_sta_count; scalar_t__ intf_ap_count; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* pre_reset_hw ) (struct rt2x00_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct rt2x00_dev *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_7(VAR_1, &VAR_2->flags)) {




  FUNC_5(VAR_0, &VAR_2->flags);
  VAR_2->ops->lib->pre_reset_hw(VAR_2);
  FUNC_4(VAR_2);
 }





 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto out;




 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out;

 VAR_2->intf_ap_count = 0;
 VAR_2->intf_sta_count = 0;
 VAR_2->intf_associated = 0;


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto out;

 FUNC_5(VAR_1, &VAR_2->flags);

out:
 FUNC_0(VAR_0, &VAR_2->flags);
 return VAR_3;
}

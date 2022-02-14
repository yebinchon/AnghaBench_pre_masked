
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hinic_dev {TYPE_2__* hwdev; } ;
struct TYPE_3__ {int max_qps; } ;
struct TYPE_4__ {TYPE_1__ nic_cap; } ;


 int FUNC_0 (struct hinic_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct hinic_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->hwdev->nic_cap.max_qps);
 if (VAR_1)
  return VAR_1;

 return 0;
}

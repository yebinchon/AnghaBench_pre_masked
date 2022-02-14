
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_hwfns; scalar_t__ smart_an; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct qede_dev {TYPE_2__ dev_info; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = 0;

 if (VAR_3->dev_info.common.num_hwfns > 1)
  VAR_4 |= FUNC_0(VAR_0);

 if (VAR_3->dev_info.common.smart_an)
  VAR_4 |= FUNC_0(VAR_1);

 return VAR_4;
}

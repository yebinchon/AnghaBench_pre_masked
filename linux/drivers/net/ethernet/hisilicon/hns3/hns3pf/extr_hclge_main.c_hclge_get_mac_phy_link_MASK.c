
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* phydev; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;
struct hclge_dev {TYPE_3__ hw; int state; } ;
struct TYPE_4__ {scalar_t__ state; unsigned int link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct hclge_dev*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 if (FUNC_1(VAR_0, &VAR_2->state))
  return 0;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->hw.mac.phydev) {
  if (VAR_2->hw.mac.phydev->state == VAR_1)
   VAR_4 = VAR_3 &
    VAR_2->hw.mac.phydev->link;
  else
   VAR_4 = 0;

 } else {
  VAR_4 = VAR_3;
 }

 return !!VAR_4;
}

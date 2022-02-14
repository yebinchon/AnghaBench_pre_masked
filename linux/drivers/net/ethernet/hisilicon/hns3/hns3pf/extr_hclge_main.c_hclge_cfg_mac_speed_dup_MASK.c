
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int speed; scalar_t__ duplex; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int FUNC_0 (struct hclge_dev*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

int FUNC_2(struct hclge_dev *VAR_0, int VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_2 = FUNC_1(VAR_2, VAR_1);
 if (VAR_0->hw.mac.speed == VAR_1 && VAR_0->hw.mac.duplex == VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->hw.mac.speed = VAR_1;
 VAR_0->hw.mac.duplex = VAR_2;

 return 0;
}

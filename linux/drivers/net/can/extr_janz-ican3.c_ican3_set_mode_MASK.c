
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct ican3_dev {TYPE_1__ can; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ican3_dev*,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ican3_dev* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, enum can_mode VAR_4)
{
 struct ican3_dev *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 if (VAR_4 != VAR_0)
  return -VAR_2;


 VAR_6 = FUNC_0(VAR_5, 1);
 if (VAR_6) {
  FUNC_1(VAR_3, "unable to set bus-on\n");
  return VAR_6;
 }


 VAR_5->can.state = VAR_1;

 if (FUNC_3(VAR_3))
  FUNC_4(VAR_3);

 return 0;
}

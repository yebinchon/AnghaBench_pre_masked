
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct ican3_dev {TYPE_1__ can; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ican3_dev*,int) ;
 int FUNC_2 (int ,char*) ;
 struct ican3_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct ican3_dev *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;


 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_2->ndev, "unable to start CAN layer\n");
  return VAR_3;
 }


 VAR_3 = FUNC_1(VAR_2, 1);
 if (VAR_3) {
  FUNC_2(VAR_2->ndev, "unable to set bus-on\n");
  FUNC_0(VAR_1);
  return VAR_3;
 }


 VAR_2->can.state = VAR_0;
 FUNC_4(VAR_1);

 return 0;
}

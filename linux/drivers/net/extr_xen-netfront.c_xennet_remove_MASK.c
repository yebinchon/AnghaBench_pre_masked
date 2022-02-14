
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_device {int otherend; int nodename; int dev; } ;
struct netfront_info {TYPE_1__* netdev; scalar_t__ queues; } ;
struct TYPE_3__ {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct netfront_info* FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct xenbus_device*,scalar_t__) ;
 int FUNC_8 (struct netfront_info*) ;
 int FUNC_9 (struct netfront_info*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct xenbus_device *VAR_5)
{
 struct netfront_info *VAR_6 = FUNC_1(&VAR_5->dev);

 FUNC_0(&VAR_5->dev, "%s\n", VAR_5->nodename);

 if (FUNC_6(VAR_5->otherend) != VAR_1) {
  FUNC_7(VAR_5, VAR_2);
  FUNC_5(VAR_4,
      FUNC_6(VAR_5->otherend) ==
      VAR_2 ||
      FUNC_6(VAR_5->otherend) ==
      VAR_3);

  FUNC_7(VAR_5, VAR_1);
  FUNC_5(VAR_4,
      FUNC_6(VAR_5->otherend) ==
      VAR_1 ||
      FUNC_6(VAR_5->otherend) ==
      VAR_3);
 }

 FUNC_9(VAR_6);

 if (VAR_6->netdev->reg_state == VAR_0)
  FUNC_4(VAR_6->netdev);

 if (VAR_6->queues) {
  FUNC_2();
  FUNC_8(VAR_6);
  FUNC_3();
 }
 FUNC_10(VAR_6->netdev);

 return 0;
}

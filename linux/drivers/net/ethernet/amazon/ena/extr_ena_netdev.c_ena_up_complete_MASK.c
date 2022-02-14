
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ena_adapter {TYPE_1__* netdev; } ;
struct TYPE_3__ {int mtu; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct ena_adapter*) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ena_adapter *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0->netdev, VAR_0->netdev->mtu);

 FUNC_2(VAR_0);


 FUNC_4(VAR_0->netdev);

 FUNC_1(VAR_0);

 return 0;
}

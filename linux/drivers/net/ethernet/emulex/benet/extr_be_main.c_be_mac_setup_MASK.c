
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct be_adapter {int dev_mac; TYPE_1__* netdev; } ;
struct TYPE_2__ {int perm_addr; int dev_addr; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (struct be_adapter*,int *) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct be_adapter *VAR_1)
{
 u8 VAR_2[VAR_0];
 int VAR_3;

 if (FUNC_3(VAR_1->netdev->dev_addr)) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;

  FUNC_4(VAR_1->netdev->dev_addr, VAR_2, VAR_0);
  FUNC_4(VAR_1->netdev->perm_addr, VAR_2, VAR_0);


  if (FUNC_0(VAR_1) && FUNC_2(VAR_1))
   FUNC_4(VAR_1->dev_mac, VAR_2, VAR_0);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_adapter {int* pmac_id; scalar_t__ vlans_added; TYPE_1__* netdev; int dev_mac; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int ,int ) ;
 int FUNC_2 (struct be_adapter*,int ) ;
 int FUNC_3 (struct be_adapter*,int) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct be_adapter *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;





 if (!FUNC_6(VAR_2->dev_mac, VAR_2->netdev->dev_addr)) {
  int VAR_4 = -1;


  if (!FUNC_7(VAR_2->dev_mac))
   VAR_4 = VAR_2->pmac_id[0];

  VAR_3 = FUNC_2(VAR_2, VAR_2->netdev->dev_addr);
  if (VAR_3)
   return VAR_3;




  if (VAR_4 >= 0 && VAR_4 != VAR_2->pmac_id[0])
   FUNC_3(VAR_2, VAR_4);

  FUNC_5(VAR_2->dev_mac, VAR_2->netdev->dev_addr);
 }

 if (VAR_2->vlans_added)
  FUNC_4(VAR_2);

 FUNC_0(VAR_2);

 return 0;
}

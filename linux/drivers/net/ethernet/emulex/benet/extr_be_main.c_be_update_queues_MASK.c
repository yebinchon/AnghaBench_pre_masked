
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {int if_flags; int if_handle; int num_msix_roce_vec; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct be_adapter*,int ,int ) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct be_adapter*) ;
 int FUNC_9 (struct be_adapter*) ;
 int FUNC_10 (struct be_adapter*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;

int FUNC_15(struct be_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 int VAR_3;

 if (FUNC_12(VAR_2)) {



  FUNC_13(VAR_2);

  FUNC_11(VAR_2);
  FUNC_14(VAR_2);

  FUNC_2(VAR_2);
 }

 FUNC_0(VAR_1);




 if (!VAR_1->num_msix_roce_vec)
  FUNC_5(VAR_1);

 FUNC_1(VAR_1);
 VAR_3 = FUNC_3(VAR_1, VAR_1->if_handle, 0);
 if (VAR_3)
  return VAR_3;

 if (!FUNC_10(VAR_1)) {
  VAR_3 = FUNC_6(VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_9(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_8(VAR_1);







 VAR_1->if_flags &= ~VAR_0;

 if (FUNC_12(VAR_2))
  VAR_3 = FUNC_7(VAR_2);

 return VAR_3;
}

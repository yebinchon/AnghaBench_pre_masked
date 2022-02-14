
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int type; int netdev; int netdev_registered; int state; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_vsi *VAR_1, bool VAR_2)
{
 if (!VAR_1 || FUNC_4(VAR_0, VAR_1->state))
  return;

 switch (VAR_1->type) {
 case 131:
  if (!VAR_1->netdev || !VAR_1->netdev_registered)
   break;

  if (VAR_2) {
   FUNC_1(VAR_1->netdev);
   FUNC_3(VAR_1->netdev);
  } else {
   FUNC_0(VAR_1->netdev);
   FUNC_2(VAR_1->netdev);
  }
  break;

 case 129:
 case 128:
 case 133:
 case 132:
 case 130:
 default:

  break;
 }
}

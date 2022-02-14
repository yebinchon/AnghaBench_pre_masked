
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {scalar_t__ type; int netdev; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ice_vsi *VAR_2, bool VAR_3)
{
 if (!VAR_2)
  return;

 if (FUNC_5(VAR_1, VAR_2->state) || !VAR_2->netdev)
  return;

 if (VAR_2->type == VAR_0) {
  if (VAR_3 == FUNC_1(VAR_2->netdev))
   return;

  if (VAR_3) {
   FUNC_2(VAR_2->netdev);
   FUNC_4(VAR_2->netdev);
  } else {
   FUNC_0(VAR_2->netdev);
   FUNC_3(VAR_2->netdev);
  }
 }
}

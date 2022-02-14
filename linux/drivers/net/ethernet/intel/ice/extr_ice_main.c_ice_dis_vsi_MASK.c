
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {scalar_t__ type; scalar_t__ netdev; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ice_vsi*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ice_vsi *VAR_3, bool VAR_4)
{
 if (FUNC_6(VAR_1, VAR_3->state))
  return;

 FUNC_5(VAR_2, VAR_3->state);

 if (VAR_3->type == VAR_0 && VAR_3->netdev) {
  if (FUNC_2(VAR_3->netdev)) {
   if (!VAR_4)
    FUNC_3();

   FUNC_0(VAR_3->netdev);

   if (!VAR_4)
    FUNC_4();
  } else {
   FUNC_1(VAR_3);
  }
 }
}

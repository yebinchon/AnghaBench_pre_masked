
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {scalar_t__ type; scalar_t__ netdev; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ice_vsi *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_5(VAR_1, VAR_2->state))
  return 0;

 FUNC_0(VAR_1, VAR_2->state);

 if (VAR_2->netdev && VAR_2->type == VAR_0) {
  if (FUNC_2(VAR_2->netdev)) {
   if (!VAR_3)
    FUNC_3();

   VAR_4 = FUNC_1(VAR_2->netdev);

   if (!VAR_3)
    FUNC_4();
  }
 }

 return VAR_4;
}

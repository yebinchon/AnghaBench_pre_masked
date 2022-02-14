
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_desc_if {int (* free_ring_resources ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {struct xgbe_desc_if desc_if; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_desc_if *VAR_1 = &VAR_0->desc_if;


 VAR_1->free_ring_resources(VAR_0);


 FUNC_1(VAR_0);
}

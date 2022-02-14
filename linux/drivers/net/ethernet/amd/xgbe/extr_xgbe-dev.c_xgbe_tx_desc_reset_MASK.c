
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_desc {scalar_t__ desc3; scalar_t__ desc2; scalar_t__ desc1; scalar_t__ desc0; } ;
struct xgbe_ring_data {struct xgbe_ring_desc* rdesc; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct xgbe_ring_data *VAR_0)
{
 struct xgbe_ring_desc *VAR_1 = VAR_0->rdesc;







 VAR_1->desc0 = 0;
 VAR_1->desc1 = 0;
 VAR_1->desc2 = 0;
 VAR_1->desc3 = 0;


 FUNC_0();
}

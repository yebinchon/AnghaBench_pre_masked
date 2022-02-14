
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct ice_vsi {scalar_t__ alloc_txq; } ;
struct ice_vf {int pf; } ;


 struct ice_vsi* FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct ice_vf *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct ice_vsi *VAR_3 = FUNC_0(VAR_0->pf, VAR_1);

 return (VAR_3 && (VAR_2 < VAR_3->alloc_txq));
}

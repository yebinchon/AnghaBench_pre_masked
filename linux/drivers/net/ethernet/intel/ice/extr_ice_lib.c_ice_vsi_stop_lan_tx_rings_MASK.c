
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_vsi {int tx_rings; } ;
typedef enum ice_disq_rst_src { ____Placeholder_ice_disq_rst_src } ice_disq_rst_src ;


 int FUNC_0 (struct ice_vsi*,int,int ,int ) ;

int
FUNC_1(struct ice_vsi *VAR_0, enum ice_disq_rst_src VAR_1,
     u16 VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->tx_rings);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_vlan_lookup_entry {int vlanid; int tag_port; int vlan_bc; int vmemb_port; int vegr_mirr; int ving_mirr; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

size_t FUNC_1(void *VAR_1, void *VAR_2,
      enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_vlan_lookup_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->ving_mirr, 63, 59, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vegr_mirr, 58, 54, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vmemb_port, 53, 49, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlan_bc, 48, 44, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tag_port, 43, 39, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlanid, 38, 27, VAR_4, VAR_3);
 return VAR_4;
}

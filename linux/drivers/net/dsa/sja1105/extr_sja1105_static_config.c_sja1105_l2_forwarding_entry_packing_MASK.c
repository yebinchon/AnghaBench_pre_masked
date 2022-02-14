
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_forwarding_entry {int * vlan_pmap; int fl_domain; int reach_port; int bc_domain; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

size_t FUNC_1(void *VAR_1, void *VAR_2,
        enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_l2_forwarding_entry *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 FUNC_0(VAR_1, &VAR_5->bc_domain, 63, 59, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->reach_port, 58, 54, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->fl_domain, 53, 49, VAR_4, VAR_3);
 for (VAR_7 = 0, VAR_6 = 25; VAR_7 < 8; VAR_7++, VAR_6 += 3)
  FUNC_0(VAR_1, &VAR_5->vlan_pmap[VAR_7],
    VAR_6 + 2, VAR_6 + 0, VAR_4, VAR_3);
 return VAR_4;
}

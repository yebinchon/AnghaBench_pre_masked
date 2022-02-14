
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_lookup_entry {int index; int enfport; int destports; int macaddr; int vlanid; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

size_t FUNC_1(void *VAR_1, void *VAR_2,
      enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_l2_lookup_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->vlanid, 95, 84, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->macaddr, 83, 36, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->destports, 35, 31, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->enfport, 30, 30, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->index, 29, 20, VAR_4, VAR_3);
 return VAR_4;
}

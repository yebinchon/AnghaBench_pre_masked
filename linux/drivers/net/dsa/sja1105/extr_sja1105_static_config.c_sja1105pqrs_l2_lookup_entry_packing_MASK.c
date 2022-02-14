
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_lookup_entry {int index; int enfport; int destports; int macaddr; int vlanid; int iotag; int mask_macaddr; int mask_vlanid; int mask_iotag; int age; int touched; int retag; int mirr; int takets; int mirrvlan; int tsreg; scalar_t__ lockeds; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

size_t FUNC_1(void *VAR_1, void *VAR_2,
        enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_l2_lookup_entry *VAR_5 = VAR_2;

 if (VAR_5->lockeds) {
  FUNC_0(VAR_1, &VAR_5->tsreg, 159, 159, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->mirrvlan, 158, 147, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->takets, 146, 146, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->mirr, 145, 145, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->retag, 144, 144, VAR_4, VAR_3);
 } else {
  FUNC_0(VAR_1, &VAR_5->touched, 159, 159, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->age, 158, 144, VAR_4, VAR_3);
 }
 FUNC_0(VAR_1, &VAR_5->mask_iotag, 143, 143, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mask_vlanid, 142, 131, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mask_macaddr, 130, 83, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->iotag, 82, 82, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlanid, 81, 70, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->macaddr, 69, 22, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->destports, 21, 17, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->enfport, 16, 16, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->index, 15, 6, VAR_4, VAR_3);
 return VAR_4;
}

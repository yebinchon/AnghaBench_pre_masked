
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pnv_php_slot {int dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,scalar_t__*) ;
 struct pnv_php_slot* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct pnv_php_slot*,int) ;
 int FUNC_3 (struct pnv_php_slot*) ;
 int FUNC_4 (struct pnv_php_slot*) ;
 int FUNC_5 (struct pnv_php_slot*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device_node *VAR_2)
{
 struct pnv_php_slot *VAR_3;
 u32 VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_2, "ibm,slot-pluggable", &VAR_4);
 if (VAR_5 || !VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2, "ibm,reset-by-firmware", &VAR_4);
 if (VAR_5 || !VAR_4)
  return -VAR_1;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto free_slot;

 VAR_5 = FUNC_2(VAR_3, 0);
 if (VAR_5)
  goto unregister_slot;


 VAR_5 = FUNC_0(VAR_2, "ibm,slot-surprise-pluggable", &VAR_4);
 if (!VAR_5 && VAR_4)
  FUNC_3(VAR_3);

 return 0;

unregister_slot:
 FUNC_6(VAR_3->dn);
free_slot:
 FUNC_4(VAR_3);
 return VAR_5;
}

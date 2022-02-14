
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_mgmt_entry {int enfport; int destports; int macaddr; int takets; int tsreg; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
       enum packing_op VAR_3)
{
 struct sja1105_mgmt_entry *VAR_4 = VAR_2;
 const size_t VAR_5 = VAR_0;







 FUNC_0(VAR_1, &VAR_4->tsreg, 85, 85, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->takets, 84, 84, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->macaddr, 83, 36, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->destports, 35, 31, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->enfport, 30, 30, VAR_5, VAR_3);
 return VAR_5;
}

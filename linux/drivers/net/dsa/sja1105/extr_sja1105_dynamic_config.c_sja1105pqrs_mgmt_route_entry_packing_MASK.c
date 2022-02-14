
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
 const size_t VAR_4 = VAR_0;
 struct sja1105_mgmt_entry *VAR_5 = VAR_2;





 FUNC_0(VAR_1, &VAR_5->tsreg, 71, 71, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->takets, 70, 70, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->macaddr, 69, 22, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->destports, 21, 17, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->enfport, 16, 16, VAR_4, VAR_3);
 return VAR_4;
}

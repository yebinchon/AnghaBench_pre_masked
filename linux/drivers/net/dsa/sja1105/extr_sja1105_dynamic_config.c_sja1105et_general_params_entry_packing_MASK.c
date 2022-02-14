
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_general_params_entry {int mirr_port; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int,int ,int const,int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_1, void *VAR_2,
           enum packing_op VAR_3)
{
 struct sja1105_general_params_entry *VAR_4 = VAR_2;
 const int VAR_5 = VAR_0;

 FUNC_0(VAR_1, &VAR_4->mirr_port, 2, 0, VAR_5, VAR_3);

 return 0;
}

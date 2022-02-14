
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_dyn_cmd {int errors; int valid; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int,int,int const,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct sja1105_dyn_cmd *VAR_2,
         enum packing_op VAR_3)
{
 const int VAR_4 = VAR_0;

 FUNC_0(VAR_1, &VAR_2->valid, 31, 31, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->errors, 30, 30, VAR_4, VAR_3);
}

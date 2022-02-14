
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_schedule_entry_points_params_entry {int actsubsch; int clksrc; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_1, void *VAR_2,
         enum packing_op VAR_3)
{
 struct sja1105_schedule_entry_points_params_entry *VAR_4 = VAR_2;
 const size_t VAR_5 = VAR_0;

 FUNC_0(VAR_1, &VAR_4->clksrc, 31, 30, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->actsubsch, 29, 27, VAR_5, VAR_3);
 return VAR_5;
}

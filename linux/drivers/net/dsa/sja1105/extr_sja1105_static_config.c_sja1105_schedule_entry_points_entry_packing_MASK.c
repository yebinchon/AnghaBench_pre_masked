
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_schedule_entry_points_entry {int address; int delta; int subschindx; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_1, void *VAR_2,
         enum packing_op VAR_3)
{
 struct sja1105_schedule_entry_points_entry *VAR_4 = VAR_2;
 const size_t VAR_5 = VAR_0;

 FUNC_0(VAR_1, &VAR_4->subschindx, 31, 29, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->delta, 28, 11, VAR_5, VAR_3);
 FUNC_0(VAR_1, &VAR_4->address, 10, 1, VAR_5, VAR_3);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_schedule_params_entry {int * subscheind; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,scalar_t__,size_t const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
          enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_schedule_params_entry *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 for (VAR_7 = 0, VAR_6 = 16; VAR_7 < 8; VAR_7++, VAR_6 += 10)
  FUNC_0(VAR_1, &VAR_5->subscheind[VAR_7],
    VAR_6 + 9, VAR_6 + 0, VAR_4, VAR_3);
 return VAR_4;
}

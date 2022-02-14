
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {scalar_t__ code; } ;


 struct unicode_data* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct unicode_data *FUNC_0(struct unicode_data *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 != VAR_1; VAR_3++)
  if (VAR_2->code == VAR_0[VAR_3].code)
   return &VAR_0[VAR_3];
 return VAR_2;
}

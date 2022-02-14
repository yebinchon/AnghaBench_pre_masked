
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct TYPE_5__ {int shift_nr; } ;
struct TYPE_4__ {int parent; int base_nr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_adapter* FUNC_1 (int) ;
 int FUNC_2 (struct i2c_adapter*) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(int *VAR_5)
{
 struct i2c_adapter *VAR_6;
 int VAR_7, VAR_8;


 *VAR_5 = VAR_2;
 for (VAR_8 = VAR_2; VAR_8 <
      VAR_1; VAR_8++) {
  VAR_6 = FUNC_1(VAR_8);
  if (VAR_6) {
   FUNC_2(VAR_6);
   continue;
  }


  if (VAR_8 == VAR_2)
   return 0;
  break;
 }


 if (VAR_8 == VAR_1)
  return -VAR_0;


 *VAR_5 = VAR_8;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_7 = *VAR_5 - VAR_4[VAR_8].parent;
  VAR_4[VAR_8].parent = *VAR_5;
  VAR_4[VAR_8].base_nr += VAR_7;
  if (VAR_7 > 0)
   VAR_3->shift_nr = VAR_7;
 }

 return 0;
}

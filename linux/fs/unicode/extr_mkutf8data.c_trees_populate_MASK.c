
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct unicode_data {scalar_t__ gen; scalar_t__ correction; } ;
struct TYPE_3__ {char* type; int maxage; } ;


 struct unicode_data* FUNC_0 (struct unicode_data*) ;
 int FUNC_1 (TYPE_1__*,char*,int,struct unicode_data*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 struct unicode_data* VAR_2 ;
 int FUNC_3 (char*,unsigned int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct unicode_data *VAR_4;
 unsigned int VAR_5;
 char VAR_6[4];
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 != VAR_1; VAR_8++) {
  if (VAR_3 > 0) {
   FUNC_2("Populating %s_%x\n",
    VAR_0[VAR_8].type, VAR_0[VAR_8].maxage);
  }
  for (VAR_5 = 0; VAR_5 != 0x110000; VAR_5++) {
   if (VAR_2[VAR_5].gen < 0)
    continue;
   VAR_7 = FUNC_3(VAR_6, VAR_5);
   VAR_4 = FUNC_0(&VAR_2[VAR_5]);
   if (VAR_4->correction <= VAR_0[VAR_8].maxage)
    VAR_4 = &VAR_2[VAR_5];
   FUNC_1(&VAR_0[VAR_8], VAR_6, VAR_7, VAR_4);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* type; int maxage; int index; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++)
  FUNC_5(&VAR_4[VAR_9]);
 for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++)
  FUNC_3(&VAR_4[VAR_9]);
 do {
  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++)
   VAR_10 = FUNC_2(&VAR_4[VAR_9], VAR_10);
  VAR_11 = 0;
  for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++)
   VAR_11 += FUNC_6(&VAR_4[VAR_9]);
 } while (VAR_11);

 VAR_6 = FUNC_0(VAR_10, 1);
 VAR_7 = VAR_10;
 for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++)
  FUNC_1(&VAR_4[VAR_9], VAR_6);

 if (VAR_8 > 0) {
  for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++) {
   FUNC_4("%s_%x idx %d\n",
    VAR_4[VAR_9].type, VAR_4[VAR_9].maxage, VAR_4[VAR_9].index);
  }
 }

 VAR_0 = VAR_6 + VAR_4[VAR_5-1].index;
 VAR_2 = VAR_6 + VAR_4[VAR_5-2].index;

 VAR_1 = &VAR_4[VAR_5-1];
 VAR_3 = &VAR_4[VAR_5-2];
}

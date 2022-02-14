
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum raid_level { ____Placeholder_raid_level } raid_level ;
struct TYPE_3__ {int value; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(enum raid_level VAR_1)
{
 int VAR_2;
 char *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].value == VAR_1) {
   VAR_3 = VAR_0[VAR_2].name;
   break;
  }
 }
 return VAR_3;
}

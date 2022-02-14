
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int type; int name; int module_name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,...) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(u64 *VAR_4)
{
 u64 VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if (VAR_3[VAR_6].type == VAR_0 ||
      VAR_3[VAR_6].type & (VAR_1 |
        VAR_2))
   continue;

  VAR_5 = FUNC_1();
  if (!(*VAR_4 & VAR_3[VAR_6].type & ~VAR_5))
   continue;

  if (!VAR_3[VAR_6].module_name) {
   FUNC_3("Can't enable IR protocol %s\n",
          VAR_3[VAR_6].name);
   *VAR_4 &= ~VAR_3[VAR_6].type;
   continue;
  }

  VAR_7 = FUNC_4("%s", VAR_3[VAR_6].module_name);
  if (VAR_7 < 0) {
   FUNC_3("Couldn't load IR protocol module %s\n",
          VAR_3[VAR_6].module_name);
   *VAR_4 &= ~VAR_3[VAR_6].type;
   continue;
  }
  FUNC_2(20);
  VAR_5 = FUNC_1();
  if (!(*VAR_4 & VAR_3[VAR_6].type & ~VAR_5))
   continue;

  FUNC_3("Loaded IR protocol module %s, but protocol %s still not available\n",
         VAR_3[VAR_6].module_name,
         VAR_3[VAR_6].name);
  *VAR_4 &= ~VAR_3[VAR_6].type;
 }
}

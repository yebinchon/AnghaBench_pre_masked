
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum chip_type { ____Placeholder_chip_type } chip_type ;
struct TYPE_2__ {char const* name; int chip_id; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(enum chip_type VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
  if (VAR_0[VAR_2].chip_id == VAR_1)
   break;
 return VAR_0[VAR_2].name;
}

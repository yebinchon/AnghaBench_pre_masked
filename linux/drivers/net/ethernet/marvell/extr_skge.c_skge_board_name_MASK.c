
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct skge_hw {int chip_id; } ;
typedef int buf ;
struct TYPE_3__ {int id; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static const char *FUNC_2(const struct skge_hw *VAR_1)
{
 int VAR_2;
 static char VAR_3[16];

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].id == VAR_1->chip_id)
   return VAR_0[VAR_2].name;

 FUNC_1(VAR_3, sizeof(VAR_3), "chipid 0x%x", VAR_1->chip_id);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned int id; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(u32 VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0 ; VAR_3 < FUNC_0(VAR_0) ; ++VAR_3) {
  if (VAR_0[VAR_3].id == VAR_2)
   return VAR_0[VAR_3].name;
 }

 return "Unknown";
}

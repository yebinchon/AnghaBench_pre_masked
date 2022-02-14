
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class; char const* class_name; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(const int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].class != -1; VAR_2++)
  if (VAR_0[VAR_2].class == VAR_1)
   break;
 return VAR_0[VAR_2].class_name;
}

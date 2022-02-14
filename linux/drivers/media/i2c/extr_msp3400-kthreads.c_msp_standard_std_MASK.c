
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_2__ {int retval; int std; int * name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static v4l2_std_id FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].name != ((void*)0); VAR_3++)
  if (VAR_1[VAR_3].retval == VAR_2)
   return VAR_1[VAR_3].std;
 return VAR_0;
}

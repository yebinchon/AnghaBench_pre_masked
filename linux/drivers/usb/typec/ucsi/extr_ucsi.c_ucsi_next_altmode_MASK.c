
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_altmode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct typec_altmode **VAR_2)
{
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (!VAR_2[VAR_3])
   return VAR_3;

 return -VAR_0;
}

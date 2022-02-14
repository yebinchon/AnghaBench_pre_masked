
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nsim_ipsec {scalar_t__ count; TYPE_1__* sa; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct nsim_ipsec *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->count == VAR_1)
  return -VAR_0;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!VAR_2->sa[VAR_3].used)
   return VAR_3;
 }

 return -VAR_0;
}

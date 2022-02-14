
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 short VAR_1 ;
 int FUNC_1 (struct xpc_partition*) ;
 scalar_t__ FUNC_2 (struct xpc_partition*) ;
 struct xpc_partition* VAR_2 ;
 int FUNC_3 (struct xpc_partition*) ;

void
FUNC_4(int VAR_3)
{
 short VAR_4;
 struct xpc_partition *VAR_5;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &VAR_2[VAR_4];

  if (FUNC_2(VAR_5)) {




   FUNC_3(VAR_5);
   FUNC_1(VAR_5);
  }
 }
}

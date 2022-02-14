
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp_count; int sp_owner; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_2(&VAR_1);
 FUNC_0(VAR_0 == ((void*)0));
 FUNC_0(VAR_0->sp_count == 0);

 VAR_0->sp_count--;
 if (!VAR_0->sp_count) {
  FUNC_1(VAR_0->sp_owner);
  VAR_0 = ((void*)0);
 }
 FUNC_3(&VAR_1);
}

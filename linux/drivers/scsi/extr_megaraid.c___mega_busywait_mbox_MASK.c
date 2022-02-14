
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int busy; } ;
struct TYPE_6__ {TYPE_1__ m_in; } ;
typedef TYPE_2__ mbox_t ;
struct TYPE_7__ {TYPE_2__* mbox; } ;
typedef TYPE_3__ adapter_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (adapter_t *VAR_0)
{
 volatile mbox_t *VAR_1 = VAR_0->mbox;
 long VAR_2;

 for (VAR_2 = 0; VAR_2 < 10000; VAR_2++) {
  if (!VAR_1->m_in.busy)
   return 0;
  FUNC_1(100);
  FUNC_0();
 }
 return -1;
}

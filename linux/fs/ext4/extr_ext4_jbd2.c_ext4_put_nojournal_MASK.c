
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int handle_t ;
struct TYPE_2__ {int * journal_info; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(handle_t *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;

 FUNC_0(VAR_2 == 0);

 VAR_2--;
 VAR_1 = (handle_t *)VAR_2;

 VAR_0->journal_info = VAR_1;
}

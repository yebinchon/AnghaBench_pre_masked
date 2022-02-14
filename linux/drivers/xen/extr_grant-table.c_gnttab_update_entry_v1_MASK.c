
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t grant_ref_t ;
typedef int domid_t ;
struct TYPE_4__ {TYPE_1__* v1; } ;
struct TYPE_3__ {unsigned long frame; unsigned int flags; int domid; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(grant_ref_t VAR_1, domid_t VAR_2,
       unsigned long VAR_3, unsigned VAR_4)
{
 VAR_0.v1[VAR_1].domid = VAR_2;
 VAR_0.v1[VAR_1].frame = VAR_3;
 FUNC_0();
 VAR_0.v1[VAR_1].flags = VAR_4;
}

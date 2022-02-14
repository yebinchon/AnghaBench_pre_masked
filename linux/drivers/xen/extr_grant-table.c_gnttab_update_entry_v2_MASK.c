
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t grant_ref_t ;
typedef int domid_t ;
struct TYPE_8__ {TYPE_3__* v2; } ;
struct TYPE_6__ {unsigned int flags; int domid; } ;
struct TYPE_5__ {unsigned long frame; } ;
struct TYPE_7__ {TYPE_2__ hdr; TYPE_1__ full_page; } ;


 unsigned int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(grant_ref_t VAR_2, domid_t VAR_3,
       unsigned long VAR_4, unsigned int VAR_5)
{
 VAR_1.v2[VAR_2].hdr.domid = VAR_3;
 VAR_1.v2[VAR_2].full_page.frame = VAR_4;
 FUNC_0();
 VAR_1.v2[VAR_2].hdr.flags = VAR_0 | VAR_5;
}

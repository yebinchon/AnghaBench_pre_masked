
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t grant_ref_t ;
struct TYPE_6__ {TYPE_2__* v2; } ;
struct TYPE_4__ {scalar_t__ flags; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(grant_ref_t VAR_4, int VAR_5)
{
 VAR_2.v2[VAR_4].hdr.flags = 0;
 FUNC_1();
 if (VAR_3[VAR_4] & (VAR_0|VAR_1)) {
  return 0;
 } else {
  FUNC_1();

 }

 return 1;
}

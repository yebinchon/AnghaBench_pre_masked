
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ uv; } ;
struct TYPE_6__ {TYPE_2__ sn; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(short VAR_2)
{
 return (VAR_1[VAR_2].sn.uv.flags & VAR_0) != 0;
}

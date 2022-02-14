
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int datadir; int statusdir; scalar_t__ status; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ amiga; } ;
struct parport_state {TYPE_2__ u; } ;
struct pardevice {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct pardevice *VAR_0, struct parport_state *VAR_1)
{
 VAR_1->u.amiga.data = 0;
 VAR_1->u.amiga.datadir = 255;
 VAR_1->u.amiga.status = 0;
 VAR_1->u.amiga.statusdir = 0xe0;
}

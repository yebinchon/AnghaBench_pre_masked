
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ curr; scalar_t__ filled; scalar_t__ dirty; } ;
struct velocity_info {TYPE_1__ rx; } ;



__attribute__((used)) static void FUNC_0(struct velocity_info *VAR_0)
{
 VAR_0->rx.dirty = VAR_0->rx.filled = VAR_0->rx.curr = 0;
}

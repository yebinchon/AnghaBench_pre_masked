
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {int vtu_miss_violation; int vtu_member_violation; int atu_full_violation; int atu_miss_violation; int atu_member_violation; } ;



__attribute__((used)) static void FUNC_0(struct mv88e6xxx_chip *VAR_0, int VAR_1,
     uint64_t *VAR_2)
{
 *VAR_2++ = VAR_0->ports[VAR_1].atu_member_violation;
 *VAR_2++ = VAR_0->ports[VAR_1].atu_miss_violation;
 *VAR_2++ = VAR_0->ports[VAR_1].atu_full_violation;
 *VAR_2++ = VAR_0->ports[VAR_1].vtu_member_violation;
 *VAR_2++ = VAR_0->ports[VAR_1].vtu_miss_violation;
}

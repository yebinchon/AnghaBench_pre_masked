
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raid_template {int dummy; } ;
struct TYPE_3__ {int ac; } ;
struct TYPE_4__ {TYPE_1__ raid_attrs; } ;
struct raid_internal {TYPE_2__ r; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct raid_internal*) ;
 struct raid_internal* FUNC_3 (struct raid_template*) ;

void
FUNC_4(struct raid_template *VAR_0)
{
 struct raid_internal *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(FUNC_1(&VAR_1->r.raid_attrs.ac));

 FUNC_2(VAR_1);
}

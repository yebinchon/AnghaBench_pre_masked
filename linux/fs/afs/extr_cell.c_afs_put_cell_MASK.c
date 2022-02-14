
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct afs_net {int dummy; } ;
struct afs_cell {int usage; TYPE_1__* vl_servers; scalar_t__ last_inactive; int name; } ;
struct TYPE_2__ {scalar_t__ nr_servers; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct afs_net*,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct afs_net *VAR_1, struct afs_cell *VAR_2)
{
 time64_t VAR_3, VAR_4;

 if (!VAR_2)
  return;

 FUNC_0("%s", VAR_2->name);

 VAR_3 = FUNC_3();
 VAR_2->last_inactive = VAR_3;
 VAR_4 = 0;
 if (VAR_2->vl_servers->nr_servers)
  VAR_4 = VAR_0;

 if (FUNC_2(&VAR_2->usage) > 1)
  return;


 FUNC_1(VAR_1, VAR_4);
}

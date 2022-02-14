
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vl_cursor {unsigned long untried; int index; TYPE_1__* server_list; int error; struct afs_cell* cell; } ;
struct afs_cell {scalar_t__ dns_source; scalar_t__ dns_expiry; int vl_servers_lock; int vl_servers; int dns_lookup_count; int manager; int flags; } ;
struct TYPE_2__ {unsigned long nr_servers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 unsigned int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int) ;

__attribute__((used)) static bool FUNC_10(struct afs_vl_cursor *VAR_5)
{
 struct afs_cell *VAR_6 = VAR_5->cell;
 unsigned int VAR_7;

 if (VAR_6->dns_source == VAR_1 ||
     VAR_6->dns_expiry <= FUNC_1()) {
  VAR_7 = FUNC_8(&VAR_6->dns_lookup_count);
  FUNC_7(VAR_0, &VAR_6->flags);
  FUNC_3(VAR_4, &VAR_6->manager);

  if (VAR_6->dns_source == VAR_1) {
   if (FUNC_9(
        &VAR_6->dns_lookup_count,
        FUNC_8(&VAR_6->dns_lookup_count)
        != VAR_7) < 0) {
    VAR_5->error = -VAR_3;
    return 0;
   }
  }


  if (VAR_6->dns_source == VAR_1) {
   VAR_5->error = -VAR_2;
   return 0;
  }
 }

 FUNC_5(&VAR_6->vl_servers_lock);
 VAR_5->server_list = FUNC_0(
  FUNC_4(VAR_6->vl_servers,
       FUNC_2(&VAR_6->vl_servers_lock)));
 FUNC_6(&VAR_6->vl_servers_lock);
 if (!VAR_5->server_list->nr_servers)
  return 0;

 VAR_5->untried = (1UL << VAR_5->server_list->nr_servers) - 1;
 VAR_5->index = -1;
 return 1;
}

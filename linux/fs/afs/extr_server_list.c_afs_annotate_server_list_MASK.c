
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_server_list {int nr_servers; size_t preferred; TYPE_1__* servers; } ;
struct afs_server {int dummy; } ;
struct afs_cb_interest {int usage; } ;
struct TYPE_2__ {struct afs_server* server; struct afs_cb_interest* cb_interest; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct afs_server_list *VAR_0,
         struct afs_server_list *VAR_1)
{
 struct afs_server *VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1->nr_servers != VAR_0->nr_servers)
  goto changed;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_servers; VAR_3++)
  if (VAR_1->servers[VAR_3].server != VAR_0->servers[VAR_3].server)
   goto changed;

 return 0;

changed:

 VAR_2 = VAR_1->servers[VAR_1->preferred].server;
 for (VAR_4 = 0; VAR_4 < VAR_0->nr_servers; VAR_4++) {
  if (VAR_0->servers[VAR_4].server == VAR_2) {
   VAR_0->preferred = VAR_4;
   break;
  }
 }




 VAR_3 = 0;
 VAR_4 = 0;
 while (VAR_3 < VAR_1->nr_servers && VAR_4 < VAR_0->nr_servers) {
  if (VAR_0->servers[VAR_4].server == VAR_1->servers[VAR_3].server) {
   struct afs_cb_interest *VAR_5 = VAR_1->servers[VAR_3].cb_interest;
   if (VAR_5) {
    VAR_0->servers[VAR_4].cb_interest = VAR_5;
    FUNC_0(&VAR_5->usage);
   }
   VAR_3++;
   VAR_4++;
   continue;
  }

  if (VAR_0->servers[VAR_4].server < VAR_1->servers[VAR_3].server) {
   VAR_4++;
   continue;
  }

  VAR_3++;
  continue;
 }

 return 1;
}

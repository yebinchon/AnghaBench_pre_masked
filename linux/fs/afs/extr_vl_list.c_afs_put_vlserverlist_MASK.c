
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vlserver_list {int nr_servers; TYPE_1__* servers; int usage; } ;
struct afs_net {int dummy; } ;
struct TYPE_2__ {int server; } ;


 int FUNC_0 (struct afs_net*,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct afs_vlserver_list*,int ) ;
 int VAR_0 ;

void FUNC_3(struct afs_net *VAR_1, struct afs_vlserver_list *VAR_2)
{
 if (VAR_2) {
  unsigned int VAR_3 = FUNC_1(&VAR_2->usage);


  if (VAR_3 == 0) {
   int VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_2->nr_servers; VAR_4++) {
    FUNC_0(VAR_1, VAR_2->servers[VAR_4].server);
   }
   FUNC_2(VAR_2, VAR_0);
  }
 }
}

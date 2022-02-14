
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_server_list {int nr_servers; TYPE_1__* servers; int usage; } ;
struct afs_net {int dummy; } ;
struct TYPE_2__ {int server; int cb_interest; } ;


 int FUNC_0 (struct afs_net*,int ) ;
 int FUNC_1 (struct afs_net*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct afs_server_list*) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct afs_net *VAR_1, struct afs_server_list *VAR_2)
{
 int VAR_3;

 if (VAR_2 && FUNC_3(&VAR_2->usage)) {
  for (VAR_3 = 0; VAR_3 < VAR_2->nr_servers; VAR_3++) {
   FUNC_0(VAR_1, VAR_2->servers[VAR_3].cb_interest);
   FUNC_1(VAR_1, VAR_2->servers[VAR_3].server,
           VAR_0);
  }
  FUNC_2(VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_server_list {int nr_servers; TYPE_1__* servers; } ;
struct afs_net {int dummy; } ;
struct TYPE_2__ {int * cb_interest; } ;


 int FUNC_0 (struct afs_net*,int *) ;

void FUNC_1(struct afs_net *VAR_0, struct afs_server_list *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_servers; VAR_2++) {
  FUNC_0(VAR_0, VAR_1->servers[VAR_2].cb_interest);
  VAR_1->servers[VAR_2].cb_interest = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct afs_vlserver_list {int nr_servers; TYPE_1__* servers; } ;
struct afs_vlserver {int flags; } ;
struct afs_net {int dummy; } ;
struct afs_error {int error; int responded; } ;
struct TYPE_2__ {struct afs_vlserver* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct afs_net*,struct afs_vlserver*,struct key*,int,struct afs_error*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct afs_net *VAR_2, struct key *VAR_3,
         struct afs_vlserver_list *VAR_4)
{
 struct afs_vlserver *VAR_5;
 struct afs_error VAR_6;
 bool VAR_7 = 0;
 int VAR_8;

 VAR_6.error = 0;
 VAR_6.responded = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4->nr_servers; VAR_8++) {
  VAR_5 = VAR_4->servers[VAR_8].server;
  if (FUNC_2(VAR_0, &VAR_5->flags))
   continue;

  if (!FUNC_1(VAR_1, &VAR_5->flags) &&
      FUNC_0(VAR_2, VAR_5, VAR_3, VAR_8, &VAR_6))
   VAR_7 = 1;
 }

 return VAR_7 ? 0 : VAR_6.error;
}

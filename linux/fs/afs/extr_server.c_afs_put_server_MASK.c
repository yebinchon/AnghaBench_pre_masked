
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_server {int usage; int put_time; } ;
struct afs_net {int dummy; } ;
typedef enum afs_server_trace { ____Placeholder_afs_server_trace } afs_server_trace ;


 int VAR_0 ;
 int FUNC_0 (struct afs_net*,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct afs_server*,unsigned int,int) ;

void FUNC_5(struct afs_net *VAR_1, struct afs_server *VAR_2,
      enum afs_server_trace VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_2)
  return;

 VAR_2->put_time = FUNC_2();

 VAR_4 = FUNC_1(&VAR_2->usage);

 FUNC_4(VAR_2, VAR_4, VAR_3);

 if (FUNC_3(VAR_4 > 0))
  return;

 FUNC_0(VAR_1, VAR_0);
}

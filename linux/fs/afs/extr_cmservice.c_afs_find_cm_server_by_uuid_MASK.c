
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_uuid {int dummy; } ;
struct afs_server {int dummy; } ;
struct afs_call {struct afs_server* server; int request; int net; } ;


 struct afs_server* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct afs_call*,struct afs_server*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct afs_call*,int ) ;

__attribute__((used)) static int FUNC_5(struct afs_call *VAR_0,
          struct afs_uuid *VAR_1)
{
 struct afs_server *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0->net, VAR_0->request);
 FUNC_3();
 if (!VAR_2) {
  FUNC_4(VAR_0, VAR_0->request);
  return 0;
 }

 VAR_0->server = VAR_2;
 return FUNC_1(VAR_0, VAR_2);
}

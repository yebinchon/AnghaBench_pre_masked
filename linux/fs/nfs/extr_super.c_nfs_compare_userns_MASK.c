
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct nfs_server {TYPE_1__* client; } ;
struct TYPE_4__ {struct user_namespace* user_ns; } ;
struct TYPE_3__ {TYPE_2__* cl_cred; } ;


 struct user_namespace VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct nfs_server *VAR_1,
  const struct nfs_server *VAR_2)
{
 const struct user_namespace *VAR_3 = &VAR_0;
 const struct user_namespace *VAR_4 = &VAR_0;

 if (VAR_1->client && VAR_1->client->cl_cred)
  VAR_3 = VAR_1->client->cl_cred->user_ns;
 if (VAR_2->client && VAR_2->client->cl_cred)
  VAR_4 = VAR_2->client->cl_cred->user_ns;
 if (VAR_3 != VAR_4)
  return 0;
 return 1;
}

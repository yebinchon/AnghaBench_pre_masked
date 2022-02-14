
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct in6_addr {int dummy; } ;
struct afs_vl_cursor {int ac; int key; TYPE_1__* cell; } ;
struct afs_net {int dummy; } ;
struct afs_call {int * request; int max_lifespan; int * ret_alist; int key; } ;
struct afs_addr_list {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct afs_net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct afs_addr_list* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 scalar_t__ FUNC_4 (struct afs_call*,int *) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (struct afs_call*) ;

struct afs_addr_list *FUNC_8(struct afs_vl_cursor *VAR_6,
           const uuid_t *VAR_7)
{
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = VAR_6->cell->net;
 __be32 *VAR_10;

 FUNC_1("");

 VAR_8 = FUNC_2(VAR_9, &VAR_5,
       sizeof(__be32) * 2 + sizeof(*VAR_7),
       sizeof(struct in6_addr) + sizeof(__be32) * 3);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->key = VAR_6->key;
 VAR_8->ret_alist = ((void*)0);
 VAR_8->max_lifespan = VAR_0;


 VAR_10 = VAR_8->request;
 *VAR_10++ = FUNC_5(VAR_4);
 *VAR_10++ = FUNC_5(VAR_3);
 FUNC_6(VAR_10, VAR_7, sizeof(*VAR_7));

 FUNC_7(VAR_8);
 FUNC_3(&VAR_6->ac, VAR_8, VAR_2);
 return (struct afs_addr_list *)FUNC_4(VAR_8, &VAR_6->ac);
}

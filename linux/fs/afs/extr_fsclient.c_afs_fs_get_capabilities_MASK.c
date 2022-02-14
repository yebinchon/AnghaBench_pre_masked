
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct afs_server {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_call {unsigned int server_index; int upgrade; int async; int * request; int max_lifespan; int server; struct key* key; } ;
struct afs_addr_cursor {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct afs_call* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (struct afs_server*,int ) ;
 int FUNC_4 (struct afs_addr_cursor*,struct afs_call*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct afs_call*,int *) ;

struct afs_call *FUNC_7(struct afs_net *VAR_6,
      struct afs_server *VAR_7,
      struct afs_addr_cursor *VAR_8,
      struct key *VAR_9,
      unsigned int VAR_10)
{
 struct afs_call *VAR_11;
 __be32 *VAR_12;

 FUNC_1("");

 VAR_11 = FUNC_2(VAR_6, &VAR_4, 1 * 4, 16 * 4);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->key = VAR_9;
 VAR_11->server = FUNC_3(VAR_7, VAR_5);
 VAR_11->server_index = VAR_10;
 VAR_11->upgrade = 1;
 VAR_11->async = 1;
 VAR_11->max_lifespan = VAR_0;


 VAR_12 = VAR_11->request;
 *VAR_12++ = FUNC_5(VAR_2);


 FUNC_6(VAR_11, ((void*)0));
 FUNC_4(VAR_8, VAR_11, VAR_3);
 return VAR_11;
}

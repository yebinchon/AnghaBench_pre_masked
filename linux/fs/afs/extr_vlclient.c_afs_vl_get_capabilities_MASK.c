
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct afs_vlserver {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_call {unsigned int server_index; int upgrade; int async; int * request; int max_lifespan; int vlserver; struct key* key; } ;
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
 int FUNC_3 (struct afs_vlserver*) ;
 int FUNC_4 (struct afs_addr_cursor*,struct afs_call*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct afs_call*) ;

struct afs_call *FUNC_7(struct afs_net *VAR_5,
      struct afs_addr_cursor *VAR_6,
      struct key *VAR_7,
      struct afs_vlserver *VAR_8,
      unsigned int VAR_9)
{
 struct afs_call *VAR_10;
 __be32 *VAR_11;

 FUNC_1("");

 VAR_10 = FUNC_2(VAR_5, &VAR_4, 1 * 4, 16 * 4);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->key = VAR_7;
 VAR_10->vlserver = FUNC_3(VAR_8);
 VAR_10->server_index = VAR_9;
 VAR_10->upgrade = 1;
 VAR_10->async = 1;
 VAR_10->max_lifespan = VAR_0;


 VAR_11 = VAR_10->request;
 *VAR_11++ = FUNC_5(VAR_3);


 FUNC_6(VAR_10);
 FUNC_4(VAR_6, VAR_10, VAR_2);
 return VAR_10;
}

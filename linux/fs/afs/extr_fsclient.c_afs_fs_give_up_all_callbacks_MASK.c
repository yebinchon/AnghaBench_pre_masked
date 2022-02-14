
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct afs_server {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_call {int * request; struct key* key; } ;
struct afs_addr_cursor {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int ) ;
 int FUNC_2 (struct afs_addr_cursor*,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_addr_cursor*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct afs_net *VAR_4,
     struct afs_server *VAR_5,
     struct afs_addr_cursor *VAR_6,
     struct key *VAR_7)
{
 struct afs_call *VAR_8;
 __be32 *VAR_9;

 FUNC_0("");

 VAR_8 = FUNC_1(VAR_4, &VAR_3, 1 * 4, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->key = VAR_7;


 VAR_9 = VAR_8->request;
 *VAR_9++ = FUNC_4(VAR_1);


 FUNC_2(VAR_6, VAR_8, VAR_2);
 return FUNC_3(VAR_8, VAR_6);
}

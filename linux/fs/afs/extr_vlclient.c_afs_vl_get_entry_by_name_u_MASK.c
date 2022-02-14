
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vldb_entry {int dummy; } ;
struct afs_vl_cursor {int ac; int key; TYPE_1__* cell; } ;
struct afs_uvldbentry__xdr {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_call {int * request; int max_lifespan; struct afs_vldb_entry* ret_vldb; int key; } ;
typedef int __be32 ;
struct TYPE_2__ {struct afs_net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct afs_vldb_entry* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,size_t,int) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 scalar_t__ FUNC_4 (struct afs_call*,int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct afs_vldb_entry*) ;
 struct afs_vldb_entry* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (void*,int ,size_t) ;
 int FUNC_10 (struct afs_call*) ;

struct afs_vldb_entry *FUNC_11(struct afs_vl_cursor *VAR_5,
        const char *VAR_6,
        int VAR_7)
{
 struct afs_vldb_entry *VAR_8;
 struct afs_call *VAR_9;
 struct afs_net *VAR_10 = VAR_5->cell->net;
 size_t VAR_11, VAR_12;
 __be32 *VAR_13;

 FUNC_1("");

 VAR_12 = (4 - (VAR_7 & 3)) & 3;
 VAR_11 = 8 + VAR_7 + VAR_12;

 VAR_8 = FUNC_7(sizeof(struct afs_vldb_entry), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_2(VAR_10, &VAR_4, VAR_11,
       sizeof(struct afs_uvldbentry__xdr));
 if (!VAR_9) {
  FUNC_6(VAR_8);
  return FUNC_0(-VAR_1);
 }

 VAR_9->key = VAR_5->key;
 VAR_9->ret_vldb = VAR_8;
 VAR_9->max_lifespan = VAR_0;


 VAR_13 = VAR_9->request;
 *VAR_13++ = FUNC_5(VAR_3);
 *VAR_13++ = FUNC_5(VAR_7);
 FUNC_8(VAR_13, VAR_6, VAR_7);
 if (VAR_12 > 0)
  FUNC_9((void *)VAR_13 + VAR_7, 0, VAR_12);

 FUNC_10(VAR_9);
 FUNC_3(&VAR_5->ac, VAR_9, VAR_2);
 return (struct afs_vldb_entry *)FUNC_4(VAR_9, &VAR_5->ac);
}

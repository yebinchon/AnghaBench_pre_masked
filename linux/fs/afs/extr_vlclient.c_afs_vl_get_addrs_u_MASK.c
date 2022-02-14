
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
struct afs_vl_cursor {int ac; int key; TYPE_1__* cell; } ;
struct afs_uuid__xdr {int dummy; } ;
struct afs_uuid {int * node; int clock_seq_low; int clock_seq_hi_and_reserved; int time_hi_and_version; int time_mid; int time_low; } ;
struct afs_net {int dummy; } ;
struct afs_call {int * request; int max_lifespan; int * ret_alist; int key; } ;
struct afs_addr_list {int dummy; } ;
struct TYPE_4__ {void** node; void* clock_seq_low; void* clock_seq_hi_and_reserved; void* time_hi_and_version; void* time_mid; int time_low; } ;
struct afs_ListAddrByAttributes__xdr {TYPE_2__ uuid; scalar_t__ spare; scalar_t__ index; scalar_t__ ipaddr; void* Mask; } ;
typedef int __be32 ;
struct TYPE_3__ {struct afs_net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct afs_addr_list* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 scalar_t__ FUNC_4 (struct afs_call*,int *) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct afs_call*) ;

struct afs_addr_list *FUNC_8(struct afs_vl_cursor *VAR_6,
      const uuid_t *VAR_7)
{
 struct afs_ListAddrByAttributes__xdr *VAR_8;
 const struct afs_uuid *VAR_9 = (const struct afs_uuid *)VAR_7;
 struct afs_call *VAR_10;
 struct afs_net *VAR_11 = VAR_6->cell->net;
 __be32 *VAR_12;
 int VAR_13;

 FUNC_1("");

 VAR_10 = FUNC_2(VAR_11, &VAR_5,
       sizeof(__be32) + sizeof(struct afs_ListAddrByAttributes__xdr),
       sizeof(struct afs_uuid__xdr) + 3 * sizeof(__be32));
 if (!VAR_10)
  return FUNC_0(-VAR_2);

 VAR_10->key = VAR_6->key;
 VAR_10->ret_alist = ((void*)0);
 VAR_10->max_lifespan = VAR_1;


 VAR_12 = VAR_10->request;
 *VAR_12++ = FUNC_5(VAR_4);
 VAR_8 = (struct afs_ListAddrByAttributes__xdr *)VAR_12;
 VAR_8->Mask = FUNC_5(VAR_0);
 VAR_8->ipaddr = 0;
 VAR_8->index = 0;
 VAR_8->spare = 0;
 VAR_8->uuid.time_low = VAR_9->time_low;
 VAR_8->uuid.time_mid = FUNC_5(FUNC_6(VAR_9->time_mid));
 VAR_8->uuid.time_hi_and_version = FUNC_5(FUNC_6(VAR_9->time_hi_and_version));
 VAR_8->uuid.clock_seq_hi_and_reserved = FUNC_5(VAR_9->clock_seq_hi_and_reserved);
 VAR_8->uuid.clock_seq_low = FUNC_5(VAR_9->clock_seq_low);
 for (VAR_13 = 0; VAR_13 < 6; VAR_13++)
  VAR_8->uuid.node[VAR_13] = FUNC_5(VAR_9->node[VAR_13]);

 FUNC_7(VAR_10);
 FUNC_3(&VAR_6->ac, VAR_10, VAR_3);
 return (struct afs_addr_list *)FUNC_4(VAR_10, &VAR_6->ac);
}

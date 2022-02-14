
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {struct kvec* head; } ;
struct svc_rqst {int rq_flags; TYPE_1__ rq_res; struct svc_cacherep* rq_cacherep; } ;
struct kvec {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_4__ {int k_xid; } ;
struct svc_cacherep {int c_type; int c_state; int c_secure; struct kvec c_replvec; int c_replstat; TYPE_2__ c_key; } ;
struct nfsd_net {size_t drc_mem_usage; struct nfsd_drc_bucket* drc_hashtbl; } ;
struct nfsd_drc_bucket {int cache_lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct svc_rqst*) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct nfsd_drc_bucket*,struct svc_cacherep*) ;
 int FUNC_3 (scalar_t__,int *,size_t) ;
 struct nfsd_net* FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int ,struct nfsd_net*) ;
 int VAR_3 ;
 int FUNC_6 (struct nfsd_drc_bucket*,struct svc_cacherep*,struct nfsd_net*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

void
FUNC_11(struct svc_rqst *VAR_4, int VAR_5, __be32 *VAR_6)
{
 struct nfsd_net *VAR_7 = FUNC_4(FUNC_0(VAR_4), VAR_3);
 struct svc_cacherep *VAR_8 = VAR_4->rq_cacherep;
 struct kvec *VAR_9 = &VAR_4->rq_res.head[0], *VAR_10;
 u32 VAR_11;
 struct nfsd_drc_bucket *VAR_12;
 int VAR_13;
 size_t VAR_14 = 0;

 if (!VAR_8)
  return;

 VAR_11 = FUNC_5(VAR_8->c_key.k_xid, VAR_7);
 VAR_12 = &VAR_7->drc_hashtbl[VAR_11];

 VAR_13 = VAR_9->iov_len - ((char*)VAR_6 - (char*)VAR_9->iov_base);
 VAR_13 >>= 2;


 if (!VAR_6 || VAR_13 > (256 >> 2)) {
  FUNC_6(VAR_12, VAR_8, VAR_7);
  return;
 }

 switch (VAR_5) {
 case 128:
  if (VAR_13 != 1)
   FUNC_7("nfsd: RC_REPLSTAT/reply len %d!\n",VAR_13);
  VAR_8->c_replstat = *VAR_6;
  break;
 case 129:
  VAR_10 = &VAR_8->c_replvec;
  VAR_14 = VAR_13 << 2;
  VAR_10->iov_base = FUNC_1(VAR_14, VAR_0);
  if (!VAR_10->iov_base) {
   FUNC_6(VAR_12, VAR_8, VAR_7);
   return;
  }
  VAR_10->iov_len = VAR_14;
  FUNC_3(VAR_10->iov_base, VAR_6, VAR_14);
  break;
 case 130:
  FUNC_6(VAR_12, VAR_8, VAR_7);
  return;
 }
 FUNC_8(&VAR_12->cache_lock);
 VAR_7->drc_mem_usage += VAR_14;
 FUNC_2(VAR_12, VAR_8);
 VAR_8->c_secure = FUNC_10(VAR_2, &VAR_4->rq_flags);
 VAR_8->c_type = VAR_5;
 VAR_8->c_state = VAR_1;
 FUNC_9(&VAR_12->cache_lock);
 return;
}

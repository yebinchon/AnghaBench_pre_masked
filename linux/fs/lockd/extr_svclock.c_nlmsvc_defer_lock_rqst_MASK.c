
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * (* defer ) (TYPE_1__*) ;} ;
struct svc_rqst {TYPE_1__ rq_chandle; } ;
struct nlm_block {int b_flags; int * b_deferred_req; TYPE_1__* b_cache_req; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct nlm_block*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nlm_block*,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_4, struct nlm_block *VAR_5)
{
 __be32 VAR_6 = VAR_3;

 VAR_5->b_flags |= VAR_0;

 FUNC_1(VAR_5, VAR_1);

 VAR_5->b_cache_req = &VAR_4->rq_chandle;
 if (VAR_4->rq_chandle.defer) {
  VAR_5->b_deferred_req =
   VAR_4->rq_chandle.defer(VAR_5->b_cache_req);
  if (VAR_5->b_deferred_req != ((void*)0))
   VAR_6 = VAR_2;
 }
 FUNC_0("lockd: nlmsvc_defer_lock_rqst block %p flags %d status %d\n",
  VAR_5, VAR_5->b_flags, FUNC_2(VAR_6));

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfp_bpf_map {scalar_t__ cache_to; int cache_lock; TYPE_2__* cache; scalar_t__ cache_blockers; int cache_gen; struct nfp_app_bpf* bpf; TYPE_1__* offmap; } ;
struct nfp_app_bpf {int cmsg_cache_cnt; } ;
struct cmsg_reply_map_op {int count; } ;
struct bpf_map {int key_size; int value_size; } ;
typedef enum nfp_ccm_type { ____Placeholder_nfp_ccm_type } nfp_ccm_type ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {struct bpf_map map; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (void*,int const*,int ) ;
 int FUNC_4 (int *,void*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (struct nfp_app_bpf*,struct cmsg_reply_map_op*,unsigned int) ;
 void* FUNC_9 (struct nfp_app_bpf*,struct cmsg_reply_map_op*,unsigned int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static unsigned int
FUNC_12(struct nfp_bpf_map *VAR_2, enum nfp_ccm_type VAR_3,
     const u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
     u32 *VAR_7)
{
 struct bpf_map *VAR_8 = &VAR_2->offmap->map;
 struct nfp_app_bpf *VAR_9 = VAR_2->bpf;
 unsigned int VAR_10, VAR_11, VAR_12;
 struct cmsg_reply_map_op *VAR_13;

 VAR_12 = FUNC_6(VAR_3) ? VAR_9->cmsg_cache_cnt : 1;

 FUNC_10(&VAR_2->cache_lock);
 *VAR_7 = VAR_2->cache_gen;
 if (VAR_2->cache_blockers)
  VAR_12 = 1;

 if (FUNC_7(VAR_3))
  goto exit_block;
 if (!FUNC_5(VAR_3))
  goto exit_unlock;

 if (!VAR_2->cache)
  goto exit_unlock;
 if (VAR_2->cache_to < FUNC_2())
  goto exit_invalidate;

 VAR_13 = (void *)VAR_2->cache->data;
 VAR_11 = FUNC_0(VAR_13->count);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  void *VAR_14;

  VAR_14 = FUNC_8(VAR_9, VAR_13, VAR_10);
  if (FUNC_3(VAR_14, VAR_4, VAR_8->key_size))
   continue;

  if (VAR_3 == VAR_1)
   FUNC_4(VAR_6, FUNC_9(VAR_9, VAR_13, VAR_10),
          VAR_8->value_size);
  if (VAR_3 == VAR_0) {
   if (VAR_10 + 1 == VAR_11)
    break;

   FUNC_4(VAR_5,
          FUNC_8(VAR_9, VAR_13, VAR_10 + 1),
          VAR_8->key_size);
  }

  VAR_12 = 0;
  goto exit_unlock;
 }
 goto exit_unlock;

exit_block:
 VAR_2->cache_blockers++;
exit_invalidate:
 FUNC_1(VAR_2->cache);
 VAR_2->cache = ((void*)0);
exit_unlock:
 FUNC_11(&VAR_2->cache_lock);
 return VAR_12;
}

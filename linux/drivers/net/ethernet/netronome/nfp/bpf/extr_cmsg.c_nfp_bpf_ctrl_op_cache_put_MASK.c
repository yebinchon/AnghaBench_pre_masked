
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nfp_bpf_map {scalar_t__ cache_gen; int cache_lock; int cache; scalar_t__ cache_to; int cache_blockers; } ;
typedef enum nfp_ccm_type { ____Placeholder_nfp_ccm_type } nfp_ccm_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_7(struct nfp_bpf_map *VAR_1, enum nfp_ccm_type VAR_2,
     struct sk_buff *VAR_3, u32 VAR_4)
{
 bool VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_2(VAR_2);
 if (VAR_5 || VAR_6) {
  u64 VAR_7 = 0;

  if (VAR_6)
   VAR_7 = FUNC_1() + VAR_0;

  FUNC_4(&VAR_1->cache_lock);
  if (VAR_5) {
   VAR_1->cache_blockers--;
   VAR_1->cache_gen++;
  }
  if (VAR_6 && !VAR_1->cache_blockers &&
      VAR_1->cache_gen == VAR_4) {
   VAR_1->cache_to = VAR_7;
   FUNC_6(VAR_1->cache, VAR_3);
  }
  FUNC_5(&VAR_1->cache_lock);
 }

 FUNC_0(VAR_3);
}

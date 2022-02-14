
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mb_cache {int c_bucket_bits; struct hlist_bl_head* c_hash; } ;
struct hlist_bl_head {int dummy; } ;


 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct hlist_bl_head *FUNC_1(struct mb_cache *VAR_0,
       u32 VAR_1)
{
 return &VAR_0->c_hash[FUNC_0(VAR_1, VAR_0->c_bucket_bits)];
}

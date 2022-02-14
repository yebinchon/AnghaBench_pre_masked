
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct bpf_dtab {int n_buckets; struct hlist_head* dev_index_head; } ;



__attribute__((used)) static inline struct hlist_head *FUNC_0(struct bpf_dtab *VAR_0,
          int VAR_1)
{
 return &VAR_0->dev_index_head[VAR_1 & (VAR_0->n_buckets - 1)];
}

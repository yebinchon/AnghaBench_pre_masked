
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bpf_lru_locallist {struct list_head* lists; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct list_head *FUNC_0(struct bpf_lru_locallist *VAR_1)
{
 return &VAR_1->lists[VAR_0];
}

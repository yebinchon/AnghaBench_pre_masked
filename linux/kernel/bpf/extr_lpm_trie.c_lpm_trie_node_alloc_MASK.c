
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpm_trie_node {size_t data; scalar_t__ flags; } ;
struct TYPE_2__ {size_t value_size; int numa_node; } ;
struct lpm_trie {size_t data_size; TYPE_1__ map; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpm_trie_node* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (size_t,void const*,size_t) ;

__attribute__((used)) static struct lpm_trie_node *FUNC_2(const struct lpm_trie *VAR_2,
       const void *VAR_3)
{
 struct lpm_trie_node *VAR_4;
 size_t VAR_5 = sizeof(struct lpm_trie_node) + VAR_2->data_size;

 if (VAR_3)
  VAR_5 += VAR_2->map.value_size;

 VAR_4 = FUNC_0(VAR_5, VAR_0 | VAR_1,
       VAR_2->map.numa_node);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->flags = 0;

 if (VAR_3)
  FUNC_1(VAR_4->data + VAR_2->data_size, VAR_3,
         VAR_2->map.value_size);

 return VAR_4;
}

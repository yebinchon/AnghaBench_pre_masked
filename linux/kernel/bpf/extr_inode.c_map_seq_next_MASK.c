
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct bpf_map {TYPE_1__* ops; } ;
typedef int loff_t ;
struct TYPE_4__ {int done; void* key; } ;
struct TYPE_3__ {scalar_t__ (* map_get_next_key ) (struct bpf_map*,void*,void*) ;} ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (struct seq_file*) ;
 struct bpf_map* FUNC_1 (struct seq_file*) ;
 scalar_t__ FUNC_2 (struct bpf_map*,void*,void*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct bpf_map *VAR_4 = FUNC_1(VAR_1);
 void *VAR_5 = FUNC_0(VAR_1)->key;
 void *VAR_6;

 if (FUNC_0(VAR_1)->done)
  return ((void*)0);

 if (FUNC_3(VAR_2 == VAR_0))
  VAR_6 = ((void*)0);
 else
  VAR_6 = VAR_5;

 if (VAR_4->ops->map_get_next_key(VAR_4, VAR_6, VAR_5)) {
  FUNC_0(VAR_1)->done = 1;
  return ((void*)0);
 }

 ++(*VAR_3);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct bpf_map {TYPE_1__* ops; } ;
struct TYPE_4__ {void* key; } ;
struct TYPE_3__ {int (* map_seq_show_elem ) (struct bpf_map*,void*,struct seq_file*) ;} ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (struct seq_file*) ;
 struct bpf_map* FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct bpf_map*,void*,struct seq_file*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct bpf_map *VAR_3 = FUNC_1(VAR_1);
 void *VAR_4 = FUNC_0(VAR_1)->key;

 if (FUNC_4(VAR_2 == VAR_0)) {
  FUNC_2(VAR_1, "# WARNING!! The output is for debug purpose only\n");
  FUNC_2(VAR_1, "# WARNING!! The output format will change\n");
 } else {
  VAR_3->ops->map_seq_show_elem(VAR_3, VAR_4, VAR_1);
 }

 return 0;
}

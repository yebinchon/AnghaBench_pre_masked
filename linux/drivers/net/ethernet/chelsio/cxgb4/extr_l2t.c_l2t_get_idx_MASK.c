
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct l2t_data* private; } ;
struct l2t_data {size_t l2t_size; void* l2tab; } ;
typedef size_t loff_t ;



__attribute__((used)) static inline void *FUNC_0(struct seq_file *VAR_0, loff_t VAR_1)
{
 struct l2t_data *VAR_2 = VAR_0->private;

 return VAR_1 >= VAR_2->l2t_size ? ((void*)0) : &VAR_2->l2tab[VAR_1];
}

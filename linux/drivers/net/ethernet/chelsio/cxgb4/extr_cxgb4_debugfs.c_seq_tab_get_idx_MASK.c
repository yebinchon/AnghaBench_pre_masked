
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_tab {size_t rows; void* data; size_t width; scalar_t__ skip_first; } ;
typedef size_t loff_t ;



__attribute__((used)) static void *FUNC_0(struct seq_tab *VAR_0, loff_t VAR_1)
{
 VAR_1 -= VAR_0->skip_first;
 return VAR_1 >= VAR_0->rows ? ((void*)0) : &VAR_0->data[VAR_1 * VAR_0->width];
}

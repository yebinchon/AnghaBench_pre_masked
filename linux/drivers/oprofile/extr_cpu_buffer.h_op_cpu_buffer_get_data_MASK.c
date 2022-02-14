
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_entry {int size; unsigned long* data; } ;



__attribute__((used)) static inline
int FUNC_0(struct op_entry *VAR_0, unsigned long *VAR_1)
{
 int VAR_2 = VAR_0->size;
 if (!VAR_2)
  return 0;
 *VAR_1 = *VAR_0->data;
 VAR_0->size--;
 VAR_0->data++;
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ent16_p; } ;
struct fat_entry {TYPE_1__ u; int entry; struct buffer_head** bhs; } ;
struct buffer_head {int b_data; int b_size; } ;
typedef int __le16 ;



__attribute__((used)) static int FUNC_0(struct fat_entry *VAR_0)
{
 const struct buffer_head *VAR_1 = VAR_0->bhs[0];
 VAR_0->entry++;
 if (VAR_0->u.ent16_p < (__le16 *)(VAR_1->b_data + (VAR_1->b_size - 2))) {
  VAR_0->u.ent16_p++;
  return 1;
 }
 VAR_0->u.ent16_p = ((void*)0);
 return 0;
}

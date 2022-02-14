
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ** ent12_p; } ;
struct fat_entry {int entry; int nr_bhs; struct buffer_head** bhs; TYPE_1__ u; } ;
struct buffer_head {int b_data; int b_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_2(struct fat_entry *VAR_0)
{
 u8 **VAR_1 = VAR_0->u.ent12_p;
 struct buffer_head **VAR_2 = VAR_0->bhs;
 u8 *VAR_3 = VAR_1[1] + 1 + (VAR_0->entry & 1);

 VAR_0->entry++;
 if (VAR_0->nr_bhs == 1) {
  FUNC_0(VAR_1[0] > (u8 *)(VAR_2[0]->b_data +
       (VAR_2[0]->b_size - 2)));
  FUNC_0(VAR_1[1] > (u8 *)(VAR_2[0]->b_data +
       (VAR_2[0]->b_size - 1)));
  if (VAR_3 < (u8 *)(VAR_2[0]->b_data + (VAR_2[0]->b_size - 1))) {
   VAR_1[0] = VAR_3 - 1;
   VAR_1[1] = VAR_3;
   return 1;
  }
 } else {
  FUNC_0(VAR_1[0] != (u8 *)(VAR_2[0]->b_data +
       (VAR_2[0]->b_size - 1)));
  FUNC_0(VAR_1[1] != (u8 *)VAR_2[1]->b_data);
  VAR_1[0] = VAR_3 - 1;
  VAR_1[1] = VAR_3;
  FUNC_1(VAR_2[0]);
  VAR_2[0] = VAR_2[1];
  VAR_0->nr_bhs = 1;
  return 1;
 }
 VAR_1[0] = ((void*)0);
 VAR_1[1] = ((void*)0);
 return 0;
}

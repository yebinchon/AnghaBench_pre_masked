
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_spare_block {int hotfix_map; int n_spares_used; int n_spares; } ;
typedef int __le32 ;
struct TYPE_2__ {int n_hotfixes; void** hotfix_to; void** hotfix_from; } ;


 int FUNC_0 (struct quad_buffer_head*) ;
 int FUNC_1 (struct super_block*,char*,...) ;
 int * FUNC_2 (struct super_block*,void*,struct quad_buffer_head*,int ) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 void* FUNC_4 (int ) ;

void FUNC_5(struct super_block *VAR_0, struct hpfs_spare_block *VAR_1)
{
 struct quad_buffer_head VAR_2;
 __le32 *VAR_3;
 u32 VAR_4, VAR_5;
 unsigned VAR_6;

 VAR_4 = FUNC_4(VAR_1->n_spares);
 VAR_5 = FUNC_4(VAR_1->n_spares_used);

 if (VAR_4 > 256 || VAR_5 > VAR_4) {
  FUNC_1(VAR_0, "invalid number of hotfixes: %u, used: %u", VAR_4, VAR_5);
  return;
 }
 if (!(VAR_3 = FUNC_2(VAR_0, FUNC_4(VAR_1->hotfix_map), &VAR_2, 0))) {
  FUNC_1(VAR_0, "can't load hotfix map");
  return;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_3(VAR_0)->hotfix_from[VAR_6] = FUNC_4(VAR_3[VAR_6]);
  FUNC_3(VAR_0)->hotfix_to[VAR_6] = FUNC_4(VAR_3[VAR_4 + VAR_6]);
 }
 FUNC_3(VAR_0)->n_hotfixes = VAR_5;
 FUNC_0(&VAR_2);
}

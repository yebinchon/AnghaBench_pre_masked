
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct logicalVolIntegrityDesc {scalar_t__ integrityType; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int s_lvid_dirty; struct buffer_head* s_lvid_bh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct super_block *VAR_1)
{
 struct buffer_head *VAR_2 = FUNC_1(VAR_1)->s_lvid_bh;

 FUNC_0(!VAR_2);
 FUNC_2(((struct logicalVolIntegrityDesc *)
       VAR_2->b_data)->integrityType !=
       FUNC_3(VAR_0));
 FUNC_1(VAR_1)->s_lvid_dirty = 1;
}

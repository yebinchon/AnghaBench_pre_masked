
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fatent_operations {int (* ent_blocknr ) (struct super_block*,int ,int*,scalar_t__*) ;} ;
struct fat_entry {int entry; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct fatent_operations* fatent_ops; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,scalar_t__) ;
 int FUNC_2 (struct super_block*,int ,int*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, struct fat_entry *VAR_1,
     unsigned long VAR_2)
{
 const struct fatent_operations *VAR_3 = FUNC_0(VAR_0)->fatent_ops;
 sector_t VAR_4;
 int VAR_5, VAR_6;

 VAR_3->ent_blocknr(VAR_0, VAR_1->entry, &VAR_6, &VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_1(VAR_0, VAR_4 + VAR_5);
}

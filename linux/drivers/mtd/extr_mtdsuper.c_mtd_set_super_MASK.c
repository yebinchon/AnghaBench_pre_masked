
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdi; TYPE_1__* s_mtd; int s_dev; } ;
struct fs_context {TYPE_1__* sget_key; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_2, struct fs_context *VAR_3)
{
 VAR_2->s_mtd = VAR_3->sget_key;
 VAR_2->s_dev = FUNC_0(VAR_0, VAR_2->s_mtd->index);
 VAR_2->s_bdi = FUNC_1(VAR_1);
 return 0;
}

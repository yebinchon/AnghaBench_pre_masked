
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdev; TYPE_1__* s_op; } ;
struct TYPE_2__ {int (* sync_fs ) (struct super_block*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_2(VAR_1);
 else
  FUNC_3(VAR_1, VAR_0);

 if (VAR_1->s_op->sync_fs)
  VAR_1->s_op->sync_fs(VAR_1, VAR_2);
 return FUNC_0(VAR_1->s_bdev, VAR_2);
}

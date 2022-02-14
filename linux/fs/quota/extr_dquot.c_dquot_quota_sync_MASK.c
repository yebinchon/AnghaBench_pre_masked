
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_bdev; TYPE_1__* s_op; } ;
struct quota_info {int flags; TYPE_2__** files; } ;
struct TYPE_5__ {int i_data; } ;
struct TYPE_4__ {int (* sync_fs ) (struct super_block*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct quota_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(struct super_block *VAR_2, int VAR_3)
{
 struct quota_info *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;
 if (VAR_4->flags & VAR_0)
  return 0;




 if (VAR_2->s_op->sync_fs)
  VAR_2->s_op->sync_fs(VAR_2, 1);
 FUNC_6(VAR_2->s_bdev);





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3 != -1 && VAR_5 != VAR_3)
   continue;
  if (!FUNC_4(VAR_2, VAR_5))
   continue;
  FUNC_1(VAR_4->files[VAR_5]);
  FUNC_7(&VAR_4->files[VAR_5]->i_data, 0);
  FUNC_2(VAR_4->files[VAR_5]);
 }

 return 0;
}

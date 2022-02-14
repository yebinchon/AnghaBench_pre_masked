
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {int v_sem; scalar_t__ dev_ejected; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_3, bool VAR_4)
{
 int VAR_5 = VAR_1;
 struct fs_info_t *VAR_6 = &(FUNC_0(VAR_3)->fs_info);


 FUNC_1(&VAR_6->v_sem);


 FUNC_3(VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_2);

 if (VAR_6->dev_ejected)
  VAR_5 = VAR_0;


 FUNC_4(&VAR_6->v_sem);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ vol_type; int v_sem; scalar_t__ dev_ejected; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_5)
{
 struct fs_info_t *VAR_6 = &(FUNC_0(VAR_5)->fs_info);
 int VAR_7 = VAR_2;

 FUNC_10("[EXFAT] trying to unmount...\n");

 FUNC_5(&VAR_4);


 FUNC_5(&VAR_6->v_sem);

 FUNC_9(VAR_5, 0);
 FUNC_8(VAR_5, VAR_3);

 if (VAR_6->vol_type == VAR_0) {
  FUNC_7(VAR_5);
  FUNC_6(VAR_5);
 }

 FUNC_1(VAR_5);
 FUNC_3(VAR_5);


 FUNC_2(VAR_5);

 if (VAR_6->dev_ejected) {
  FUNC_10("[EXFAT] unmounted with media errors. Device is already ejected.\n");
  VAR_7 = VAR_1;
 }

 FUNC_4(VAR_5);


 FUNC_11(&VAR_6->v_sem);
 FUNC_11(&VAR_4);

 FUNC_10("[EXFAT] unmounted successfully\n");

 return VAR_7;
}

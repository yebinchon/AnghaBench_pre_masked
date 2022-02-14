
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int dummy; } ;
struct fs_info_t {int ** vol_utbl; } ;
struct TYPE_3__ {scalar_t__ casesensitive; } ;
struct TYPE_4__ {TYPE_1__ options; struct fs_info_t fs_info; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

u16 FUNC_3(struct super_block *VAR_0, u16 VAR_1)
{
 struct fs_info_t *VAR_2 = &(FUNC_0(VAR_0)->fs_info);

 if (FUNC_0(VAR_0)->options.casesensitive)
  return VAR_1;
 if (VAR_2->vol_utbl && VAR_2->vol_utbl[FUNC_1(VAR_1)])
  return VAR_2->vol_utbl[FUNC_1(VAR_1)][FUNC_2(VAR_1)];
 else
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_first_data_block; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_3 (struct super_block*,int,int*,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct super_block*,int ) ;

ext4_group_t FUNC_6(struct super_block *VAR_1,
       ext4_fsblk_t VAR_2)
{
 ext4_group_t VAR_3;

 if (FUNC_5(VAR_1, VAR_0))
  VAR_3 = (VAR_2 -
    FUNC_4(FUNC_2(VAR_1)->s_es->s_first_data_block)) >>
   (FUNC_0(VAR_1) + FUNC_1(VAR_1) + 3);
 else
  FUNC_3(VAR_1, VAR_2, &VAR_3, ((void*)0));
 return VAR_3;
}

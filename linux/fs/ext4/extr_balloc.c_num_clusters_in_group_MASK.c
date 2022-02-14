
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int ext4_group_t ;
struct TYPE_3__ {int s_es; } ;


 unsigned int FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (TYPE_1__*,unsigned int) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*) ;
 unsigned int FUNC_5 (struct super_block*,int) ;

__attribute__((used)) static unsigned int FUNC_6(struct super_block *VAR_0,
       ext4_group_t VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1 == FUNC_4(VAR_0) - 1) {






  VAR_2 = FUNC_3(FUNC_2(VAR_0)->s_es) -
   FUNC_5(VAR_0, VAR_1);
 } else
  VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(FUNC_2(VAR_0), VAR_2);
}

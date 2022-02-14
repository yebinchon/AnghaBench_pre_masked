
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dev; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;

void FUNC_2(struct super_block *VAR_0)
{
 dev_t VAR_1 = VAR_0->s_dev;
 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}

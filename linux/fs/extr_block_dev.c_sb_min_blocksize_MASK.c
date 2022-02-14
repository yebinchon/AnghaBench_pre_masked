
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,int) ;

int FUNC_2(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->s_bdev);
 if (VAR_1 < VAR_2)
  VAR_1 = VAR_2;
 return FUNC_1(VAR_0, VAR_1);
}

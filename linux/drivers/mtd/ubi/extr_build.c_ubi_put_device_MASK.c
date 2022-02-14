
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int ref_count; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct ubi_device *VAR_1)
{
 FUNC_1(&VAR_0);
 VAR_1->ref_count -= 1;
 FUNC_0(&VAR_1->dev);
 FUNC_2(&VAR_0);
}

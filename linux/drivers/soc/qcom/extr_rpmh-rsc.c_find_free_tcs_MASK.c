
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_group {int num_tcs; int offset; int drv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct tcs_group *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_tcs; VAR_2++) {
  if (FUNC_0(VAR_1->drv, VAR_1->offset + VAR_2))
   return VAR_1->offset + VAR_2;
 }

 return -VAR_0;
}

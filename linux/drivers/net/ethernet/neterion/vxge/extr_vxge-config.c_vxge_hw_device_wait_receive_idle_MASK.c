
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_device {int vpaths_deployed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct __vxge_hw_device*,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct __vxge_hw_device *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!(VAR_2->vpaths_deployed & FUNC_1(VAR_3)))
   continue;

  VAR_4 += FUNC_0(VAR_2, VAR_3);
  if (VAR_4 >= VAR_0)
   break;
 }
}

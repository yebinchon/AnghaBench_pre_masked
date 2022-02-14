
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_device {int dummy; } ;
struct imgu_css {int xmem_sp_group_ptrs; int dev; } ;


 unsigned int VAR_0 ;
 struct imgu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct imgu_css*) ;
 int FUNC_2 (struct imgu_css*,unsigned int) ;
 int FUNC_3 (struct imgu_css*) ;
 int FUNC_4 (struct imgu_device*,int *) ;

void FUNC_5(struct imgu_css *VAR_1)
{
 struct imgu_device *VAR_2 = FUNC_0(VAR_1->dev);
 unsigned int VAR_3;

 FUNC_3(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_1, VAR_3);
 FUNC_4(VAR_2, &VAR_1->xmem_sp_group_ptrs);
 FUNC_1(VAR_1);
}

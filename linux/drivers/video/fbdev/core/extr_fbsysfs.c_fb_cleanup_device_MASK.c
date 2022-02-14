
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int class_flag; int dev; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct fb_info *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->class_flag & VAR_0) {
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
   FUNC_1(VAR_2->dev, &VAR_1[VAR_3]);

  VAR_2->class_flag &= ~VAR_0;
 }
}

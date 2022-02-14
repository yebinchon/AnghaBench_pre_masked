
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int class_flag; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct fb_info*) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct fb_info *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_1(VAR_2->dev, VAR_2);

 VAR_2->class_flag |= VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2->dev, &VAR_1[VAR_3]);

  if (VAR_4)
   break;
 }

 if (VAR_4) {
  while (--VAR_3 >= 0)
   FUNC_3(VAR_2->dev, &VAR_1[VAR_3]);
  VAR_2->class_flag &= ~VAR_0;
 }

 return 0;
}

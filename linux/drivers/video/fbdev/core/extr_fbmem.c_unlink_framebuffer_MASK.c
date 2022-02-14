
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int node; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 struct fb_info** VAR_3 ;
 int FUNC_4 (struct fb_info*) ;

void FUNC_5(struct fb_info *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->node;
 if (FUNC_1(VAR_5 < 0 || VAR_5 >= VAR_1 || VAR_3[VAR_5] != VAR_4))
  return;

 if (!VAR_4->dev)
  return;

 FUNC_2(VAR_2, FUNC_0(VAR_0, VAR_5));

 FUNC_3(VAR_4->dev);

 FUNC_4(VAR_4);

 VAR_4->dev = ((void*)0);
}

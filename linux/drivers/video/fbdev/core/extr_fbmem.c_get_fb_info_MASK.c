
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int count; } ;


 int VAR_0 ;
 struct fb_info* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fb_info** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct fb_info *FUNC_4(unsigned int VAR_4)
{
 struct fb_info *VAR_5;

 if (VAR_4 >= VAR_1)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_3);
 VAR_5 = VAR_2[VAR_4];
 if (VAR_5)
  FUNC_1(&VAR_5->count);
 FUNC_3(&VAR_3);

 return VAR_5;
}

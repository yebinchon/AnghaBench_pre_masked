
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_mem_info {int type; int size; } ;
struct omapfb_info {int region; } ;
struct omapfb2_mem_region {int type; int size; } ;
struct fb_info {int dummy; } ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct omapfb_mem_info*,int ,int) ;
 struct omapfb2_mem_region* FUNC_2 (int ) ;
 int FUNC_3 (struct omapfb2_mem_region*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_0, struct omapfb_mem_info *VAR_1)
{
 struct omapfb_info *VAR_2 = FUNC_0(VAR_0);
 struct omapfb2_mem_region *VAR_3;

 VAR_3 = FUNC_2(VAR_2->region);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->size = VAR_3->size;
 VAR_1->type = VAR_3->type;

 FUNC_3(VAR_3);

 return 0;
}

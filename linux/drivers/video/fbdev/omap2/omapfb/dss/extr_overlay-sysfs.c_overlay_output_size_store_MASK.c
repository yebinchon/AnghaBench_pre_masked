
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_info {void* out_height; void* out_width; } ;
struct omap_overlay {int (* set_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;TYPE_1__* manager; int (* get_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;} ;
typedef int ssize_t ;
struct TYPE_2__ {int (* apply ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 void* FUNC_0 (char const*,char**,int) ;
 int FUNC_1 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_2 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_4(struct omap_overlay *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 char *VAR_5;
 struct omap_overlay_info VAR_6;

 VAR_1->get_overlay_info(VAR_1, &VAR_6);

 VAR_6.out_width = FUNC_0(VAR_2, &VAR_5, 10);
 ++VAR_5;
 if (VAR_5 - VAR_2 >= VAR_3)
  return -VAR_0;

 VAR_6.out_height = FUNC_0(VAR_5, &VAR_5, 10);

 VAR_4 = VAR_1->set_overlay_info(VAR_1, &VAR_6);
 if (VAR_4)
  return VAR_4;

 if (VAR_1->manager) {
  VAR_4 = VAR_1->manager->apply(VAR_1->manager);
  if (VAR_4)
   return VAR_4;
 }

 return VAR_3;
}

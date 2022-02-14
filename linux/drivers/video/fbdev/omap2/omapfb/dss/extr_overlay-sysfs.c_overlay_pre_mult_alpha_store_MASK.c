
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omap_overlay_info {int pre_mult_alpha; } ;
struct omap_overlay {int caps; int (* set_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;TYPE_1__* manager; int (* get_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;} ;
typedef int ssize_t ;
struct TYPE_2__ {int (* apply ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_2 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_4(struct omap_overlay *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct omap_overlay_info VAR_7;

 if ((VAR_2->caps & VAR_1) == 0)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_2->get_overlay_info(VAR_2, &VAR_7);

 VAR_7.pre_mult_alpha = VAR_6;

 VAR_5 = VAR_2->set_overlay_info(VAR_2, &VAR_7);
 if (VAR_5)
  return VAR_5;

 if (VAR_2->manager) {
  VAR_5 = VAR_2->manager->apply(VAR_2->manager);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_4;
}

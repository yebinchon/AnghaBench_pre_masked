
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay {int (* enable ) (struct omap_overlay*) ;int (* disable ) (struct omap_overlay*) ;} ;


 int FUNC_0 (struct omap_overlay*) ;
 int FUNC_1 (struct omap_overlay*) ;

__attribute__((used)) static inline int FUNC_2(struct omap_overlay *VAR_0,
  int VAR_1)
{
 if (VAR_1)
  return VAR_0->enable(VAR_0);
 else
  return VAR_0->disable(VAR_0);
}

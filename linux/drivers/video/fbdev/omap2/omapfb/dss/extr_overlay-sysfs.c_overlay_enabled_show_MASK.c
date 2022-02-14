
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay {int (* is_enabled ) (struct omap_overlay*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct omap_overlay*) ;
 int FUNC_2 (struct omap_overlay*) ;

__attribute__((used)) static ssize_t FUNC_3(struct omap_overlay *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0, "%d\n", VAR_1->is_enabled(VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay {int (* enable ) (struct omap_overlay*) ;int (* disable ) (struct omap_overlay*) ;} ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct omap_overlay*) ;
 int FUNC_2 (struct omap_overlay*) ;

__attribute__((used)) static ssize_t FUNC_3(struct omap_overlay *VAR_0, const char *VAR_1,
  size_t VAR_2)
{
 int VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 if (VAR_4)
  VAR_3 = VAR_0->enable(VAR_0);
 else
  VAR_3 = VAR_0->disable(VAR_0);

 if (VAR_3)
  return VAR_3;

 return VAR_2;
}

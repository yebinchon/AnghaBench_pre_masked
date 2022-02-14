
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_otg {int active; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mv_otg*) ;
 int FUNC_1 (struct mv_otg*) ;
 int FUNC_2 (struct mv_otg*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct mv_otg *VAR_3 = VAR_2;


 if (!VAR_3->active) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }

 FUNC_2(VAR_3, 0);

 return VAR_0;
}

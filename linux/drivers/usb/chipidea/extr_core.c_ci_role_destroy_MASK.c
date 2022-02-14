
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {scalar_t__* roles; scalar_t__ is_otg; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 (struct ci_hdrc*) ;

__attribute__((used)) static inline void FUNC_3(struct ci_hdrc *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 if (VAR_1->is_otg && VAR_1->roles[VAR_0])
  FUNC_2(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dwc3*) ;
 scalar_t__ FUNC_1 (struct dwc3*) ;

bool FUNC_2(struct dwc3 *VAR_2)
{
 return ((FUNC_0(VAR_2) &&
   VAR_2->revision >= VAR_0) ||
  (FUNC_1(VAR_2) &&
   VAR_2->revision >= VAR_1));
}

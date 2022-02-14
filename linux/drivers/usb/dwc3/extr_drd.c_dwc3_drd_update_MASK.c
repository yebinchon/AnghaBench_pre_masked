
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {scalar_t__ edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc3*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct dwc3 *VAR_3)
{
 int VAR_4;

 if (VAR_3->edev) {
  VAR_4 = FUNC_1(VAR_3->edev, VAR_2);
  if (VAR_4 < 0)
   VAR_4 = 0;
  FUNC_0(VAR_3, VAR_4 ?
         VAR_1 :
         VAR_0);
 }
}

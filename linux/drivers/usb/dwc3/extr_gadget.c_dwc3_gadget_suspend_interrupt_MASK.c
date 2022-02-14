
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int link_state; } ;
typedef enum dwc3_link_state { ____Placeholder_dwc3_link_state } dwc3_link_state ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3*) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_2,
       unsigned int VAR_3)
{
 enum dwc3_link_state VAR_4 = VAR_3 & VAR_0;

 if (VAR_2->link_state != VAR_4 && VAR_4 == VAR_1)
  FUNC_0(VAR_2);

 VAR_2->link_state = VAR_4;
}

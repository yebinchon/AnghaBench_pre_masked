
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg_ep {int dir_in; } ;
struct dwc2_hsotg {int num_of_eps; } ;


 int VAR_0 ;
 struct dwc2_hsotg_ep* FUNC_0 (struct dwc2_hsotg*,int,int) ;

__attribute__((used)) static struct dwc2_hsotg_ep *FUNC_1(struct dwc2_hsotg *VAR_1,
         u32 VAR_2)
{
 struct dwc2_hsotg_ep *VAR_3;
 int VAR_4 = (VAR_2 & VAR_0) ? 1 : 0;
 int VAR_5 = VAR_2 & 0x7F;

 if (VAR_2 >= 0x100)
  return ((void*)0);

 if (VAR_5 > VAR_1->num_of_eps)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1, VAR_5, VAR_4);

 if (VAR_5 && VAR_3->dir_in != VAR_4)
  return ((void*)0);

 return VAR_3;
}

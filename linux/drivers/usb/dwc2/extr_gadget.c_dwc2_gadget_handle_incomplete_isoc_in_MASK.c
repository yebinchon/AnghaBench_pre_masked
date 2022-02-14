
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dwc2_hsotg_ep {int isochronous; } ;
struct dwc2_hsotg {size_t num_of_eps; struct dwc2_hsotg_ep** eps_in; int dev; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct dwc2_hsotg_ep*) ;
 size_t FUNC_4 (struct dwc2_hsotg*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,size_t,int ) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_6)
{
 struct dwc2_hsotg_ep *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_2(VAR_6->dev, "Incomplete isoc in interrupt received:\n");

 VAR_9 = FUNC_4(VAR_6, VAR_0);

 for (VAR_10 = 1; VAR_10 < VAR_6->num_of_eps; VAR_10++) {
  VAR_7 = VAR_6->eps_in[VAR_10];

  if ((FUNC_0(VAR_10) & ~VAR_9) || !VAR_7->isochronous)
   continue;

  VAR_8 = FUNC_4(VAR_6, FUNC_1(VAR_10));
  if ((VAR_8 & VAR_2) &&
      FUNC_3(VAR_7)) {
   VAR_8 |= VAR_3;
   VAR_8 |= VAR_1;
   FUNC_5(VAR_6, VAR_8, FUNC_1(VAR_10));
  }
 }


 FUNC_5(VAR_6, VAR_5, VAR_4);
}

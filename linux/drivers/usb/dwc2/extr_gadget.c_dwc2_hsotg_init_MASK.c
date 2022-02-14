
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int,int ) ;
 scalar_t__ FUNC_5 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_17)
{


 FUNC_4(VAR_17, VAR_6 | VAR_4 |
      VAR_5 | VAR_7,
      VAR_3);

 FUNC_4(VAR_17, VAR_11 | VAR_9 |
      VAR_10 | VAR_12,
      VAR_8);

 FUNC_4(VAR_17, 0, VAR_0);


 FUNC_3(VAR_17, VAR_1, VAR_2);



 FUNC_0(VAR_17->dev, "GRXFSIZ=0x%08x, GNPTXFSIZ=0x%08x\n",
  FUNC_2(VAR_17, VAR_16),
  FUNC_2(VAR_17, VAR_15));

 FUNC_1(VAR_17);

 if (FUNC_5(VAR_17))
  FUNC_3(VAR_17, VAR_13, VAR_14);
}

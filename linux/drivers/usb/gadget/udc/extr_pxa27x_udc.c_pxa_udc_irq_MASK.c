
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_udc {int dev; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int,struct pxa_udc*) ;
 int FUNC_2 (struct pxa_udc*) ;
 int FUNC_3 (struct pxa_udc*) ;
 int FUNC_4 (struct pxa_udc*) ;
 int FUNC_5 (struct pxa_udc*) ;
 int FUNC_6 (struct pxa_udc*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 struct pxa_udc *VAR_12 = VAR_11;
 u32 VAR_13 = FUNC_6(VAR_12, VAR_4);
 u32 VAR_14 = FUNC_6(VAR_12, VAR_5);
 u32 VAR_15 = FUNC_6(VAR_12, VAR_3);
 u32 VAR_16;

 FUNC_0(VAR_12->dev, "Interrupt, UDCISR0:0x%08x, UDCISR1:0x%08x, "
   "UDCCR:0x%08x\n", VAR_13, VAR_14, VAR_15);

 VAR_16 = VAR_14 & 0xf8000000;
 if (FUNC_7(VAR_16 & VAR_9))
  FUNC_5(VAR_12);
 if (FUNC_7(VAR_16 & VAR_8))
  FUNC_4(VAR_12);
 if (FUNC_7(VAR_16 & VAR_6))
  FUNC_2(VAR_12);
 if (FUNC_7(VAR_16 & VAR_7))
  FUNC_3(VAR_12);

 if ((VAR_13 & VAR_1) | (VAR_14 & VAR_2))
  FUNC_1(VAR_10, VAR_12);

 return VAR_0;
}

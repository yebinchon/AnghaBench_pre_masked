
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fdp1_dev {int clk_rate; } ;
typedef int irqreturn_t ;
typedef int int_status ;


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
 int VAR_17 ;
 int FUNC_0 (struct fdp1_dev*,int ) ;
 int FUNC_1 (struct fdp1_dev*,char*,...) ;
 int FUNC_2 (struct fdp1_dev*,int ) ;
 int FUNC_3 (struct fdp1_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_18, void *VAR_19)
{
 struct fdp1_dev *VAR_20 = VAR_19;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 VAR_21 = FUNC_2(VAR_20, VAR_0);
 VAR_24 = FUNC_2(VAR_20, VAR_12);
 VAR_22 = FUNC_2(VAR_20, VAR_5);
 VAR_23 = (VAR_22 & VAR_10) >>
   VAR_11;


 FUNC_3(VAR_20, ~(VAR_21) & VAR_2, VAR_0);

 if (VAR_17 >= 2) {
  FUNC_1(VAR_20, "IRQ: 0x%x %s%s%s\n", VAR_21,
   VAR_21 & VAR_3 ? "[Error]" : "[!E]",
   VAR_21 & VAR_4 ? "[VSync]" : "[!V]",
   VAR_21 & VAR_1 ? "[FrameEnd]" : "[!F]");

  FUNC_1(VAR_20, "CycleStatus = %d (%dms)\n",
   VAR_24, VAR_24/(VAR_20->clk_rate/1000));

  FUNC_1(VAR_20,
   "Control Status = 0x%08x : VINT_CNT = %d %s:%s:%s:%s\n",
   VAR_22, VAR_23,
   VAR_22 & VAR_8 ? "RegSet" : "",
   VAR_22 & VAR_9 ? "Vsync Error" : "",
   VAR_22 & VAR_7 ? "FrameEnd" : "",
   VAR_22 & VAR_6 ? "Busy" : "");
  FUNC_1(VAR_20, "***********************************\n");
 }


 if (!(VAR_2 & VAR_21))
  return VAR_14;


 if (VAR_3 & VAR_21)
  FUNC_0(VAR_20, VAR_16);
 else if (VAR_1 & VAR_21)
  FUNC_0(VAR_20, VAR_15);

 return VAR_13;
}

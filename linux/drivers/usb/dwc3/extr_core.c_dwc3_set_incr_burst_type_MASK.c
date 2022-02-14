
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; struct device* dev; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static void FUNC_7(struct dwc3 *VAR_13)
{
 struct device *VAR_14 = VAR_13->dev;

 bool VAR_15;

 u32 VAR_16;
 u32 *VAR_17;
 u32 VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_18 = FUNC_3(VAR_13->regs, VAR_0);
 VAR_19 = FUNC_1(VAR_14, "snps,incr-burst-type-adjustment");
 if (VAR_19 <= 0)
  return;

 VAR_17 = FUNC_5(VAR_19, sizeof(u32), VAR_10);
 if (!VAR_17) {
  FUNC_0(VAR_14, "Error to get memory\n");
  return;
 }


 VAR_20 = FUNC_2(VAR_14,
   "snps,incr-burst-type-adjustment", VAR_17, VAR_19);
 if (VAR_20) {
  FUNC_6(VAR_17);
  FUNC_0(VAR_14, "Error to get property\n");
  return;
 }

 VAR_16 = *VAR_17;

 if (VAR_19 > 1) {

  VAR_15 = VAR_12;
  for (VAR_21 = 1; VAR_21 < VAR_19; VAR_21++) {
   if (VAR_17[VAR_21] > VAR_16)
    VAR_16 = VAR_17[VAR_21];
  }
 } else {

  VAR_15 = VAR_11;
 }

 FUNC_6(VAR_17);


 VAR_18 &= ~VAR_9;
 if (VAR_15)
  VAR_18 |= VAR_8;
 switch (VAR_16) {
 case 256:
  VAR_18 |= VAR_3;
  break;
 case 128:
  VAR_18 |= VAR_1;
  break;
 case 64:
  VAR_18 |= VAR_6;
  break;
 case 32:
  VAR_18 |= VAR_4;
  break;
 case 16:
  VAR_18 |= VAR_2;
  break;
 case 8:
  VAR_18 |= VAR_7;
  break;
 case 4:
  VAR_18 |= VAR_5;
  break;
 case 1:
  break;
 default:
  FUNC_0(VAR_14, "Invalid property\n");
  break;
 }

 FUNC_4(VAR_13->regs, VAR_0, VAR_18);
}

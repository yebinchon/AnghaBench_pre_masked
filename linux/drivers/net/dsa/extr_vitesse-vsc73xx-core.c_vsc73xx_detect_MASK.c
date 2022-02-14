
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsc73xx {int chipid; int dev; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct vsc73xx*,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct vsc73xx *VAR_12)
{
 bool VAR_13;
 bool VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_17 = FUNC_2(VAR_12, VAR_2, 0,
      VAR_11, &VAR_15);
 if (VAR_17) {
  FUNC_0(VAR_12->dev, "unable to read mailbox (%d)\n", VAR_17);
  return VAR_17;
 }

 if (VAR_15 == 0xffffffff) {
  FUNC_1(VAR_12->dev, "chip seems dead.\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_2(VAR_12, VAR_2, 0,
      VAR_3, &VAR_15);
 if (VAR_17) {
  FUNC_0(VAR_12->dev, "unable to read chip id (%d)\n", VAR_17);
  return VAR_17;
 }

 VAR_18 = (VAR_15 >> VAR_5) &
  VAR_4;
 switch (VAR_18) {
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_0(VAR_12->dev, "unsupported chip, id=%04x\n", VAR_18);
  return -VAR_1;
 }

 VAR_12->chipid = VAR_18;
 VAR_16 = (VAR_15 >> VAR_7) &
  VAR_6;
 FUNC_1(VAR_12->dev, "VSC%04X (rev: %d) switch found\n", VAR_18, VAR_16);

 VAR_17 = FUNC_2(VAR_12, VAR_2, 0,
      VAR_8, &VAR_15);
 if (VAR_17) {
  FUNC_0(VAR_12->dev, "unable to read iCPU control\n");
  return VAR_17;
 }







 VAR_14 = !!(VAR_15 & VAR_10);
 VAR_13 = !!(VAR_15 & VAR_9);
 if (VAR_13 && VAR_14) {
  FUNC_0(VAR_12->dev,
   "iCPU enabled boots from SI, has external memory\n");
  FUNC_0(VAR_12->dev, "no idea how to deal with this\n");
  return -VAR_1;
 }
 if (VAR_13 && !VAR_14) {
  FUNC_0(VAR_12->dev,
   "iCPU enabled boots from PI/SI, no external memory\n");
  return -VAR_0;
 }
 if (!VAR_13 && VAR_14) {
  FUNC_0(VAR_12->dev,
   "iCPU enabled, boots from PI external memory\n");
  FUNC_0(VAR_12->dev, "no idea how to deal with this\n");
  return -VAR_1;
 }

 FUNC_1(VAR_12->dev, "iCPU disabled, no external memory\n");

 return 0;
}

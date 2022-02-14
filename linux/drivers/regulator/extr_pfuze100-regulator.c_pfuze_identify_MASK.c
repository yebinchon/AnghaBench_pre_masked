
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfuze_chip {unsigned int chip_id; int dev; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct pfuze_chip *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (((VAR_6 & 0x0f) == 0x8) && (VAR_5->chip_id == VAR_1)) {




  FUNC_0(VAR_5->dev, "Assuming misprogrammed ID=0x8");
 } else if ((VAR_6 & 0x0f) != VAR_5->chip_id &&
     (VAR_6 & 0xf0) >> 4 != VAR_5->chip_id &&
     (VAR_6 != VAR_5->chip_id)) {

  FUNC_1(VAR_5->dev, "Illegal ID: %x\n", VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_0(VAR_5->dev,
   "Full layer: %x, Metal layer: %x\n",
   (VAR_6 & 0xf0) >> 4, VAR_6 & 0x0f);

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_0(VAR_5->dev, "FAB: %x, FIN: %x\n",
   (VAR_6 & 0xc) >> 2, VAR_6 & 0x3);

 return 0;
}

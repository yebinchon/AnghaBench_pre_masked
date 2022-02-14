
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5p_cec_dev {int dev; scalar_t__ reg; } ;


 char VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct s5p_cec_dev *VAR_7, char *VAR_8,
    size_t VAR_9, u8 VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12;

 while (VAR_11 < VAR_9) {
  FUNC_2(VAR_8[VAR_11], VAR_7->reg + (VAR_2 + (VAR_11 * 4)));
  VAR_11++;
 }

 FUNC_2(VAR_9, VAR_7->reg + VAR_3);
 VAR_12 = FUNC_1(VAR_7->reg + VAR_4);
 VAR_12 |= VAR_6;
 VAR_12 &= ~0x70;
 VAR_12 |= VAR_10 << 4;

 if ((VAR_8[0] & VAR_1) == VAR_0) {
  FUNC_0(VAR_7->dev, "Broadcast");
  VAR_12 |= VAR_5;
 } else {
  FUNC_0(VAR_7->dev, "No Broadcast");
  VAR_12 &= ~VAR_5;
 }

 FUNC_2(VAR_12, VAR_7->reg + VAR_4);
 FUNC_0(VAR_7->dev, "cec-tx: cec count (%zu): %*ph", VAR_9,
  (int)VAR_9, VAR_8);
}

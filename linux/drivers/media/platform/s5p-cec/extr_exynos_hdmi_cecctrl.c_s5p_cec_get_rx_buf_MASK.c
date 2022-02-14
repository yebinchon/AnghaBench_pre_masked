
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct s5p_cec_dev {int dev; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,size_t,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(struct s5p_cec_dev *VAR_1, u32 VAR_2, u8 *VAR_3)
{
 u32 VAR_4 = 0;
 char VAR_5[40];

 while (VAR_4 < VAR_2) {
  VAR_3[VAR_4] = FUNC_1(VAR_1->reg + VAR_0 + (VAR_4 * 4));
  FUNC_2(VAR_5 + VAR_4 * 2, "%02x ", VAR_3[VAR_4]);
  VAR_4++;
 }
 FUNC_0(VAR_1->dev, "cec-rx: cec size(%d): %s", VAR_2, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_cec_dev {int dev; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;

u32 FUNC_2(struct s5p_cec_dev *VAR_5)
{
 u32 VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_5->reg + VAR_0) & 0xf;
 VAR_6 |= (FUNC_1(VAR_5->reg + VAR_4) & 0xf) << 4;
 VAR_6 |= FUNC_1(VAR_5->reg + VAR_1) << 8;
 VAR_6 |= FUNC_1(VAR_5->reg + VAR_2) << 16;
 VAR_6 |= FUNC_1(VAR_5->reg + VAR_3) << 24;

 FUNC_0(VAR_5->dev, "status = 0x%x!\n", VAR_6);

 return VAR_6;
}

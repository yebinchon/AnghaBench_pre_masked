
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5p_cec_dev {scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct s5p_cec_dev *VAR_4)
{
 u8 VAR_5;

 FUNC_1(VAR_1, VAR_4->reg + VAR_0);
 FUNC_1(VAR_3, VAR_4->reg + VAR_2);

 VAR_5 = FUNC_0(VAR_4->reg + 0xc4);
 VAR_5 &= ~0x1;
 FUNC_1(VAR_5, VAR_4->reg + 0xc4);
}

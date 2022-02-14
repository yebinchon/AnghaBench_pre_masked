
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5p_cec_dev {scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct s5p_cec_dev *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2->reg + VAR_0);
 VAR_3 |= VAR_1;
 FUNC_1(VAR_3, VAR_2->reg + VAR_0);
}

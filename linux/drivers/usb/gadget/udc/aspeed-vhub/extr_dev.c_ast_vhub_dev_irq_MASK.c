
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_vhub_dev {int ep0; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct ast_vhub_dev *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_4->regs + VAR_0);

 FUNC_3(VAR_5, VAR_4->regs + VAR_0);

 if (VAR_5 & VAR_1)
  FUNC_0(&VAR_4->ep0, 1);
 if (VAR_5 & VAR_2)
  FUNC_0(&VAR_4->ep0, 0);
 if (VAR_5 & VAR_3)
  FUNC_1(&VAR_4->ep0);
}

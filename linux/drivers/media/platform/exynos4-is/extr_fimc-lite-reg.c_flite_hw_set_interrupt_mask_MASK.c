
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_lite {scalar_t__ regs; int out_path; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct fimc_lite *VAR_7)
{
 u32 VAR_8, VAR_9;


 if (FUNC_0(&VAR_7->out_path) == VAR_0) {
  VAR_9 = VAR_5 |
    VAR_4 |
    VAR_6 |
    VAR_3;
 } else {

  VAR_9 = VAR_5 |
    VAR_4;
 }

 VAR_8 = FUNC_1(VAR_7->regs + VAR_1);
 VAR_8 |= VAR_2;
 VAR_8 &= ~VAR_9;
 FUNC_2(VAR_8, VAR_7->regs + VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fimc_dev {TYPE_1__* drv_data; scalar_t__ regs; } ;
struct TYPE_2__ {int out_buf_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fimc_dev*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct fimc_dev *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->regs + VAR_3);
 VAR_6 |= VAR_4;
 FUNC_3(VAR_6, VAR_5->regs + VAR_3);


 VAR_6 = FUNC_1(VAR_5->regs + VAR_0);
 VAR_6 |= (VAR_2 | VAR_1);
 FUNC_3(VAR_6, VAR_5->regs + VAR_0);
 FUNC_2(10);

 VAR_6 = FUNC_1(VAR_5->regs + VAR_0);
 VAR_6 &= ~VAR_2;
 FUNC_3(VAR_6, VAR_5->regs + VAR_0);

 if (VAR_5->drv_data->out_buf_count > 4)
  FUNC_0(VAR_5, 0xF);
}

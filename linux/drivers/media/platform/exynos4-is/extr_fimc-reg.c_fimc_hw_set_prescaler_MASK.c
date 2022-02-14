
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_scaler {int hfactor; int vfactor; int pre_hratio; int pre_vratio; int pre_dst_width; int pre_dst_height; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {struct fimc_scaler scaler; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct fimc_ctx *VAR_2)
{
 struct fimc_dev *VAR_3 = VAR_2->fimc_dev;
 struct fimc_scaler *VAR_4 = &VAR_2->scaler;
 u32 VAR_5, VAR_6;

 VAR_6 = 10 - (VAR_4->hfactor + VAR_4->vfactor);
 VAR_5 = VAR_6 << 28;

 VAR_5 |= (VAR_4->pre_hratio << 16) | VAR_4->pre_vratio;
 FUNC_0(VAR_5, VAR_3->regs + VAR_1);

 VAR_5 = (VAR_4->pre_dst_width << 16) | VAR_4->pre_dst_height;
 FUNC_0(VAR_5, VAR_3->regs + VAR_0);
}

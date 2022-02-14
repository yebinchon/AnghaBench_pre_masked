
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_scaler {int pre_vratio; int pre_hratio; int pre_shfactor; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {struct gsc_scaler scaler; struct gsc_dev* gsc_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct gsc_ctx *VAR_1)
{
 struct gsc_dev *VAR_2 = VAR_1->gsc_dev;
 struct gsc_scaler *VAR_3 = &VAR_1->scaler;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->pre_shfactor);
 VAR_4 |= FUNC_0(VAR_3->pre_hratio);
 VAR_4 |= FUNC_2(VAR_3->pre_vratio);
 FUNC_3(VAR_4, VAR_2->regs + VAR_0);
}

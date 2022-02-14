
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_scaler {int main_vratio; int main_hratio; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {struct gsc_scaler scaler; struct gsc_dev* gsc_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct gsc_ctx *VAR_2)
{
 struct gsc_dev *VAR_3 = VAR_2->gsc_dev;
 struct gsc_scaler *VAR_4 = &VAR_2->scaler;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->main_hratio);
 FUNC_2(VAR_5, VAR_3->regs + VAR_0);

 VAR_5 = FUNC_1(VAR_4->main_vratio);
 FUNC_2(VAR_5, VAR_3->regs + VAR_1);
}

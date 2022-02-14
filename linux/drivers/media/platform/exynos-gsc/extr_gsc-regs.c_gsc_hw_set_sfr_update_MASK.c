
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {struct gsc_dev* gsc_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct gsc_ctx *VAR_2)
{
 struct gsc_dev *VAR_3 = VAR_2->gsc_dev;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->regs + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_4, VAR_3->regs + VAR_0);
}

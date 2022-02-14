
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xsdfec_dev {scalar_t__ regs; int dev; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct xsdfec_dev *VAR_0, u32 VAR_1,
       u32 VAR_2)
{
 FUNC_0(VAR_0->dev, "Writing 0x%x to offset 0x%x", VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0->regs + VAR_1);
}

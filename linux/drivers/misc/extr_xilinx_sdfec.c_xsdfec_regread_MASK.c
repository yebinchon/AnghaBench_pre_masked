
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xsdfec_dev {int dev; scalar_t__ regs; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct xsdfec_dev *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0->regs + VAR_1);
 FUNC_0(VAR_0->dev, "Read value = 0x%x from offset 0x%x", VAR_2, VAR_1);
 return VAR_2;
}

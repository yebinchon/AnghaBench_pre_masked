
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;
struct mt76_dev {TYPE_1__ mmio; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mt76_dev*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct mt76_dev *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0->mmio.regs + VAR_1);
 FUNC_1(VAR_0, VAR_1, VAR_2);

 return VAR_2;
}

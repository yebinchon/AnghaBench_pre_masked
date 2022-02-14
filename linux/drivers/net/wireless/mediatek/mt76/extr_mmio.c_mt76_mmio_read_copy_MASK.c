
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;
struct mt76_dev {TYPE_1__ mmio; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct mt76_dev *VAR_0, u32 VAR_1,
    void *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2, VAR_0->mmio.regs + VAR_1, FUNC_0(VAR_3, 4));
}

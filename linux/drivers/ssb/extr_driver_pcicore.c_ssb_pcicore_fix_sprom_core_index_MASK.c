
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ssb_pcicore {TYPE_1__* dev; } ;
struct TYPE_2__ {int core_index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ssb_pcicore*,int ) ;
 int FUNC_2 (struct ssb_pcicore*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ssb_pcicore *VAR_0)
{
 u16 VAR_1 = FUNC_1(VAR_0, FUNC_0(0));
 if (((VAR_1 & 0xF000) >> 12) != VAR_0->dev->core_index) {
  VAR_1 &= ~0xF000;
  VAR_1 |= (VAR_0->dev->core_index << 12);
  FUNC_2(VAR_0, FUNC_0(0), VAR_1);
 }
}

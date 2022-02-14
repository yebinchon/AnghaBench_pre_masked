
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; int rf; int rt; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;


 int FUNC_0 (struct rt2x00_dev*,char*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0,
       const u16 VAR_1, const u16 VAR_2, const u16 VAR_3)
{
 VAR_0->chip.rt = VAR_1;
 VAR_0->chip.rf = VAR_2;
 VAR_0->chip.rev = VAR_3;

 FUNC_0(VAR_0, "Chipset detected - rt: %04x, rf: %04x, rev: %04x\n",
      VAR_0->chip.rt, VAR_0->chip.rf,
      VAR_0->chip.rev);
}

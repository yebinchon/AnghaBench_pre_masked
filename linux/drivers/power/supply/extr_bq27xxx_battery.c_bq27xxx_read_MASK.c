
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read ) (struct bq27xxx_device_info*,scalar_t__,int) ;} ;
struct bq27xxx_device_info {scalar_t__* regs; int dev; TYPE_1__ bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct bq27xxx_device_info*,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_2(struct bq27xxx_device_info *VAR_2, int VAR_3,
          bool VAR_4)
{
 int VAR_5;

 if (!VAR_2 || VAR_2->regs[VAR_3] == VAR_1)
  return -VAR_0;

 VAR_5 = VAR_2->bus.read(VAR_2, VAR_2->regs[VAR_3], VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_2->dev, "failed to read register 0x%02x (index %d)\n",
   VAR_2->regs[VAR_3], VAR_3);

 return VAR_5;
}

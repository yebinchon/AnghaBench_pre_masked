
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* write_bulk ) (struct bq27xxx_device_info*,scalar_t__,int *,int) ;} ;
struct bq27xxx_device_info {scalar_t__* regs; int dev; TYPE_1__ bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct bq27xxx_device_info*,scalar_t__,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct bq27xxx_device_info *VAR_3, int VAR_4,
          u8 *VAR_5, int VAR_6)
{
 int VAR_7;

 if (!VAR_3 || VAR_3->regs[VAR_4] == VAR_2)
  return -VAR_0;

 if (!VAR_3->bus.write_bulk)
  return -VAR_1;

 VAR_7 = VAR_3->bus.write_bulk(VAR_3, VAR_3->regs[VAR_4], VAR_5, VAR_6);
 if (VAR_7 < 0)
  FUNC_0(VAR_3->dev, "failed to write_bulk register 0x%02x (index %d)\n",
   VAR_3->regs[VAR_4], VAR_4);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; int dev; } ;
union win_slot_encoding {TYPE_1__ bits; int slot; } ;
typedef int u32 ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(u32 VAR_0)
{
 union win_slot_encoding VAR_1;

 VAR_1.slot = VAR_0;
 return FUNC_0(VAR_1.bits.dev, VAR_1.bits.func);
}

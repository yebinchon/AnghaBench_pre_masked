
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; int dev; } ;
union win_slot_encoding {scalar_t__ slot; TYPE_1__ bits; } ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(int VAR_0)
{
 union win_slot_encoding VAR_1;

 VAR_1.slot = 0;
 VAR_1.bits.dev = FUNC_1(VAR_0);
 VAR_1.bits.func = FUNC_0(VAR_0);

 return VAR_1.slot;
}

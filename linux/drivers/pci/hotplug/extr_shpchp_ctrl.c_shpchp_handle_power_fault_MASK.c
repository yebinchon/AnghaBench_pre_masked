
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct slot {int status; TYPE_1__* hpc_ops; } ;
struct controller {int slot_device_offset; } ;
struct TYPE_2__ {int (* query_power_fault ) (struct slot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,char*,int) ;
 int FUNC_2 (struct slot*,int ) ;
 struct slot* FUNC_3 (struct controller*,int) ;
 int FUNC_4 (struct slot*) ;
 int FUNC_5 (struct slot*) ;

u8 FUNC_6(u8 VAR_2, struct controller *VAR_3)
{
 struct slot *VAR_4;
 u32 VAR_5;


 FUNC_0(VAR_3, "Power fault interrupt received\n");

 VAR_4 = FUNC_3(VAR_3, VAR_2 + VAR_3->slot_device_offset);

 if (!(VAR_4->hpc_ops->query_power_fault(VAR_4))) {



  FUNC_1(VAR_3, "Power fault cleared on Slot(%s)\n",
     FUNC_4(VAR_4));
  VAR_4->status = 0x00;
  VAR_5 = VAR_1;
 } else {



  FUNC_1(VAR_3, "Power fault on Slot(%s)\n", FUNC_4(VAR_4));
  VAR_5 = VAR_0;

  VAR_4->status = 0xFF;
  FUNC_1(VAR_3, "Power fault bit %x set\n", VAR_2);
 }

 FUNC_2(VAR_4, VAR_5);

 return 1;
}

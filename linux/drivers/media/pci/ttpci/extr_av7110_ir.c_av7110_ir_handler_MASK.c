
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {int dummy; } ;
struct TYPE_2__ {int ir_config; struct rc_dev* rcdev; } ;
struct av7110 {TYPE_1__ ir; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct rc_dev*,int,int,int) ;

void FUNC_3(struct av7110 *VAR_2, u32 VAR_3)
{
 struct rc_dev *VAR_4 = VAR_2->ir.rcdev;
 enum rc_proto VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 FUNC_1(4, "ir command = %08x\n", VAR_3);

 if (VAR_4) {
  switch (VAR_2->ir.ir_config) {
  case 130:
   VAR_6 = VAR_3 & 0x3f;
   VAR_7 = (VAR_3 >> 6) & 0x1f;
   VAR_8 = FUNC_0(VAR_7, VAR_6);
   VAR_9 = VAR_3 & 0x0800;
   VAR_5 = VAR_0;
   break;

  case 128:
   VAR_8 = VAR_3 & ~0x8000;
   VAR_9 = VAR_3 & 0x8000;
   VAR_5 = VAR_1;
   break;

  case 129:






   VAR_6 = VAR_3 & 0x3f;
   VAR_7 = (VAR_3 >> 6) & 0x1f;
   if (!(VAR_3 & 0x1000))
    VAR_6 |= 0x40;
   VAR_8 = FUNC_0(VAR_7, VAR_6);
   VAR_9 = VAR_3 & 0x0800;
   VAR_5 = VAR_0;
   break;
  default:
   FUNC_1(2, "unknown ir config %d\n",
    VAR_2->ir.ir_config);
   return;
  }

  FUNC_2(VAR_4, VAR_5, VAR_8, VAR_9 != 0);
 }
}

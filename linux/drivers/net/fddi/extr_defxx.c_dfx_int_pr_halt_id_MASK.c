
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int name; } ;
typedef int PI_UINT32 ;
typedef TYPE_2__ DFX_board_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int*) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void FUNC_2(DFX_board_t *VAR_3)
 {
 PI_UINT32 VAR_4;
 PI_UINT32 VAR_5;



 FUNC_0(VAR_3, VAR_0, &VAR_4);



 VAR_5 = (VAR_4 & VAR_1) >> VAR_2;
 switch (VAR_5)
  {
  case 129:
   FUNC_1("%s: Halt ID: Selftest Timeout\n", VAR_3->dev->name);
   break;

  case 131:
   FUNC_1("%s: Halt ID: Host Bus Parity Error\n", VAR_3->dev->name);
   break;

  case 134:
   FUNC_1("%s: Halt ID: Host-Directed Halt\n", VAR_3->dev->name);
   break;

  case 128:
   FUNC_1("%s: Halt ID: Adapter Software Fault\n", VAR_3->dev->name);
   break;

  case 133:
   FUNC_1("%s: Halt ID: Adapter Hardware Fault\n", VAR_3->dev->name);
   break;

  case 130:
   FUNC_1("%s: Halt ID: FDDI Network PC Trace Path Test\n", VAR_3->dev->name);
   break;

  case 135:
   FUNC_1("%s: Halt ID: Adapter DMA Error\n", VAR_3->dev->name);
   break;

  case 132:
   FUNC_1("%s: Halt ID: Firmware Image CRC Error\n", VAR_3->dev->name);
   break;

  case 136:
   FUNC_1("%s: Halt ID: 68000 Bus Exception\n", VAR_3->dev->name);
   break;

  default:
   FUNC_1("%s: Halt ID: Unknown (code = %X)\n", VAR_3->dev->name, VAR_5);
   break;
  }
 }


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {void* link_available; TYPE_1__* dev; scalar_t__ reset_type; } ;
struct TYPE_11__ {int name; } ;
typedef int PI_UINT32 ;
typedef TYPE_2__ DFX_board_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8(DFX_board_t *VAR_14)

 {
 PI_UINT32 VAR_15;
 PI_UINT32 VAR_16;







 FUNC_4(VAR_14, VAR_6, &VAR_15);
 FUNC_5(VAR_14, VAR_6, VAR_15);



 if (VAR_15 & (VAR_10 |
       VAR_11 |
       VAR_9))
  {


  if (VAR_15 & VAR_10)
   FUNC_7("%s: Non-Existent Memory Access Error\n", VAR_14->dev->name);



  if (VAR_15 & VAR_11)
   FUNC_7("%s: Packet Memory Parity Error\n", VAR_14->dev->name);



  if (VAR_15 & VAR_9)
   FUNC_7("%s: Host Bus Parity Error\n", VAR_14->dev->name);



  VAR_14->link_available = VAR_2;
  VAR_14->reset_type = 0;
  FUNC_7("%s: Resetting adapter...\n", VAR_14->dev->name);
  if (FUNC_0(VAR_14, 0) != VAR_0)
   {
   FUNC_7("%s: Adapter reset failed!  Disabling adapter interrupts.\n", VAR_14->dev->name);
   FUNC_5(VAR_14, VAR_5, VAR_1);
   return;
   }
  FUNC_7("%s: Adapter reset successful!\n", VAR_14->dev->name);
  return;
  }



 if (VAR_15 & VAR_13)
  {


  VAR_14->link_available = VAR_2;
  FUNC_6(VAR_14);
  (void) FUNC_2(VAR_14,
         VAR_4,
         0,
         0,
         ((void*)0));
  }



 if (VAR_15 & VAR_12)
  {


  VAR_16 = FUNC_1(VAR_14);
  if (VAR_16 == VAR_7)
   {






   FUNC_7("%s: Controller has transitioned to HALTED state!\n", VAR_14->dev->name);
   FUNC_3(VAR_14);



   VAR_14->link_available = VAR_2;
   VAR_14->reset_type = 0;
   FUNC_7("%s: Resetting adapter...\n", VAR_14->dev->name);
   if (FUNC_0(VAR_14, 0) != VAR_0)
    {
    FUNC_7("%s: Adapter reset failed!  Disabling adapter interrupts.\n", VAR_14->dev->name);
    FUNC_5(VAR_14, VAR_5, VAR_1);
    return;
    }
   FUNC_7("%s: Adapter reset successful!\n", VAR_14->dev->name);
   }
  else if (VAR_16 == VAR_8)
   {
   VAR_14->link_available = VAR_3;
   }
  }
 }

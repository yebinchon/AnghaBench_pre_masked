
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct kvaser_pciefd_can {scalar_t__ reg_base; TYPE_1__ can; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct kvaser_pciefd_can *VAR_9)
{
 u32 VAR_10 = FUNC_0(VAR_9->reg_base + VAR_4);

 if (VAR_10 & VAR_7)
  FUNC_2(VAR_9->can.dev, "Tx FIFO overflow\n");

 if (VAR_10 & VAR_6) {
  u8 VAR_11 = FUNC_0(VAR_9->reg_base +
        VAR_8) & 0xff;

  if (VAR_11 == 0)
   FUNC_1(VAR_0,
      VAR_9->reg_base + VAR_1);
 }

 if (VAR_10 & VAR_2)
  FUNC_2(VAR_9->can.dev,
      "Fail to change bittiming, when not in reset mode\n");

 if (VAR_10 & VAR_3)
  FUNC_2(VAR_9->can.dev, "CAN FD frame in CAN mode\n");

 if (VAR_10 & VAR_5)
  FUNC_2(VAR_9->can.dev, "Rx FIFO overflow\n");

 FUNC_1(VAR_10, VAR_9->reg_base + VAR_4);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct net_device {int mtu; TYPE_3__ dev; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct e1000_adapter {int flags; int flags2; int max_frame_size; int rx_buffer_len; int state; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct e1000_adapter*,int) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 struct e1000_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_9, int VAR_10)
{
 struct e1000_adapter *VAR_11 = FUNC_6(VAR_9);
 int VAR_12 = VAR_10 + VAR_6 + VAR_2;


 if ((VAR_10 > VAR_1) &&
     !(VAR_11->flags & VAR_4)) {
  FUNC_4("Jumbo Frames not supported.\n");
  return -VAR_0;
 }


 if ((VAR_11->hw.mac.type >= VAR_8) &&
     !(VAR_11->flags2 & VAR_3) &&
     (VAR_10 > VAR_1)) {
  FUNC_4("Jumbo Frames not supported on this device when CRC stripping is disabled.\n");
  return -VAR_0;
 }

 while (FUNC_10(VAR_7, &VAR_11->state))
  FUNC_11(1000, 1100);

 VAR_11->max_frame_size = VAR_12;
 FUNC_5("changing MTU from %d to %d\n", VAR_9->mtu, VAR_10);
 VAR_9->mtu = VAR_10;

 FUNC_8(VAR_9->dev.parent);

 if (FUNC_7(VAR_9))
  FUNC_1(VAR_11, 1);
 if (VAR_12 <= 2048)
  VAR_11->rx_buffer_len = 2048;
 else
  VAR_11->rx_buffer_len = 4096;


 if (VAR_12 <= (VAR_5 + VAR_2))
  VAR_11->rx_buffer_len = VAR_5 + VAR_2;

 if (FUNC_7(VAR_9))
  FUNC_3(VAR_11);
 else
  FUNC_2(VAR_11);

 FUNC_9(VAR_9->dev.parent);

 FUNC_0(VAR_7, &VAR_11->state);

 return 0;
}

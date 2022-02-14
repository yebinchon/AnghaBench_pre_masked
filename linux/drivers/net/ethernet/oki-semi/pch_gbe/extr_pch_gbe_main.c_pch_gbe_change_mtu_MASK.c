
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_frame_size; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct pch_gbe_adapter {unsigned long rx_buffer_len; TYPE_2__ hw; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*,int,int ,int,int) ;
 struct pch_gbe_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pch_gbe_adapter*) ;
 int FUNC_4 (struct pch_gbe_adapter*) ;
 int FUNC_5 (struct pch_gbe_adapter*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, int VAR_7)
{
 struct pch_gbe_adapter *VAR_8 = FUNC_1(VAR_6);
 int VAR_9 = VAR_7 + VAR_1 + VAR_0;
 unsigned long VAR_10 = VAR_8->rx_buffer_len;
 int VAR_11;

 if (VAR_9 <= VAR_2)
  VAR_8->rx_buffer_len = VAR_2;
 else if (VAR_9 <= VAR_3)
  VAR_8->rx_buffer_len = VAR_3;
 else if (VAR_9 <= VAR_4)
  VAR_8->rx_buffer_len = VAR_4;
 else
  VAR_8->rx_buffer_len = VAR_5;

 if (FUNC_2(VAR_6)) {
  FUNC_3(VAR_8);
  VAR_11 = FUNC_5(VAR_8);
  if (VAR_11) {
   VAR_8->rx_buffer_len = VAR_10;
   FUNC_5(VAR_8);
   return VAR_11;
  } else {
   VAR_6->mtu = VAR_7;
   VAR_8->hw.mac.max_frame_size = VAR_9;
  }
 } else {
  FUNC_4(VAR_8);
  VAR_6->mtu = VAR_7;
  VAR_8->hw.mac.max_frame_size = VAR_9;
 }

 FUNC_0(VAR_6,
     "max_frame : %d  rx_buffer_len : %d  mtu : %d  max_frame_size : %d\n",
     VAR_9, (u32) VAR_8->rx_buffer_len, VAR_6->mtu,
     VAR_8->hw.mac.max_frame_size);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lan_id; } ;
struct TYPE_4__ {int set_lben; } ;
struct ixgbe_hw {TYPE_3__ bus; TYPE_1__ mac; } ;
struct TYPE_5__ {int checksum; int buf_len; int cmd; } ;
struct ixgbe_hic_disable_rxen {int port_number; TYPE_2__ hdr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,struct ixgbe_hic_disable_rxen*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_8)
{
 u32 VAR_9, VAR_10;
 s32 VAR_11;
 struct ixgbe_hic_disable_rxen VAR_12;

 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if (VAR_9 & VAR_7) {
  VAR_10 = FUNC_0(VAR_8, VAR_4);
  if (VAR_10 & VAR_5) {
   VAR_10 &= ~VAR_5;
   FUNC_1(VAR_8, VAR_4, VAR_10);
   VAR_8->mac.set_lben = 1;
  } else {
   VAR_8->mac.set_lben = 0;
  }

  VAR_12.hdr.cmd = VAR_1;
  VAR_12.hdr.buf_len = VAR_2;
  VAR_12.hdr.checksum = VAR_0;
  VAR_12.port_number = VAR_8->bus.lan_id;

  VAR_11 = FUNC_2(VAR_8, &VAR_12,
     sizeof(struct ixgbe_hic_disable_rxen),
     VAR_3, 1);


  if (VAR_11) {
   VAR_9 = FUNC_0(VAR_8, VAR_6);
   if (VAR_9 & VAR_7) {
    VAR_9 &= ~VAR_7;
    FUNC_1(VAR_8, VAR_6, VAR_9);
   }
  }
 }
}

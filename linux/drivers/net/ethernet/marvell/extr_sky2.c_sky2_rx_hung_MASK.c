
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ last; scalar_t__ mac_rp; scalar_t__ mac_lev; scalar_t__ fifo_rp; scalar_t__ fifo_lev; } ;
struct sky2_port {unsigned int port; scalar_t__ last_rx; TYPE_1__ check; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,struct net_device*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct sky2_port* FUNC_3 (struct net_device*) ;
 unsigned int* VAR_6 ;
 scalar_t__ FUNC_4 (struct sky2_hw*,int ) ;
 scalar_t__ FUNC_5 (struct sky2_hw*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7)
{
 struct sky2_port *VAR_8 = FUNC_3(VAR_7);
 struct sky2_hw *VAR_9 = VAR_8->hw;
 unsigned VAR_10 = VAR_8->port;
 unsigned VAR_11 = VAR_6[VAR_10];
 u32 VAR_12 = FUNC_4(VAR_9, FUNC_1(VAR_10, VAR_5));
 u8 VAR_13 = FUNC_5(VAR_9, FUNC_1(VAR_10, VAR_4));
 u8 VAR_14 = FUNC_5(VAR_9, FUNC_0(VAR_11, VAR_2));
 u8 VAR_15 = FUNC_5(VAR_9, FUNC_0(VAR_11, VAR_1));


 if (VAR_8->check.last == VAR_8->last_rx &&
     ((VAR_12 == VAR_8->check.mac_rp &&
       VAR_13 != 0 && VAR_13 >= VAR_8->check.mac_lev) ||

      (VAR_14 == VAR_8->check.fifo_rp &&
       VAR_15 != 0 && VAR_15 >= VAR_8->check.fifo_lev))) {
  FUNC_2(VAR_0, VAR_7,
         "hung mac %d:%d fifo %d (%d:%d)\n",
         VAR_13, VAR_12, VAR_15,
         VAR_14, FUNC_5(VAR_9, FUNC_0(VAR_11, VAR_3)));
  return 1;
 } else {
  VAR_8->check.last = VAR_8->last_rx;
  VAR_8->check.mac_rp = VAR_12;
  VAR_8->check.mac_lev = VAR_13;
  VAR_8->check.fifo_rp = VAR_14;
  VAR_8->check.fifo_lev = VAR_15;
  return 0;
 }
}

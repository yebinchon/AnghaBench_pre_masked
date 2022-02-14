
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uli526x_board_info {int cr6_data; int lock; int ioaddr; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct uli526x_board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device * VAR_6)
{
 struct uli526x_board_info *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;

 FUNC_0(0, "uli526x_set_filter_mode()", 0);
 FUNC_4(&VAR_7->lock, VAR_8);

 if (VAR_6->flags & VAR_4) {
  FUNC_0(0, "Enable PROM Mode", 0);
  VAR_7->cr6_data |= VAR_2 | VAR_1;
  FUNC_6(VAR_7->cr6_data, VAR_7->ioaddr);
  FUNC_5(&VAR_7->lock, VAR_8);
  return;
 }

 if (VAR_6->flags & VAR_3 ||
     FUNC_1(VAR_6) > VAR_5) {
  FUNC_0(0, "Pass all multicast address",
        FUNC_1(VAR_6));
  VAR_7->cr6_data &= ~(VAR_2 | VAR_1);
  VAR_7->cr6_data |= VAR_0;
  FUNC_5(&VAR_7->lock, VAR_8);
  return;
 }

 FUNC_0(0, "Set multicast address", FUNC_1(VAR_6));
 FUNC_3(VAR_6, FUNC_1(VAR_6));
 FUNC_5(&VAR_7->lock, VAR_8);
}

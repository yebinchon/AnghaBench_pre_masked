
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct dmfe_board_info {int cr6_data; scalar_t__ chip_id; int lock; int ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct dmfe_board_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_7)
{
 struct dmfe_board_info *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;
 int VAR_10 = FUNC_2(VAR_7);

 FUNC_0(0, "dmfe_set_filter_mode()", 0);
 FUNC_5(&VAR_8->lock, VAR_9);

 if (VAR_7->flags & VAR_5) {
  FUNC_0(0, "Enable PROM Mode", 0);
  VAR_8->cr6_data |= VAR_2 | VAR_1;
  FUNC_7(VAR_8->cr6_data, VAR_8->ioaddr);
  FUNC_6(&VAR_8->lock, VAR_9);
  return;
 }

 if (VAR_7->flags & VAR_4 || VAR_10 > VAR_3) {
  FUNC_0(0, "Pass all multicast address", VAR_10);
  VAR_8->cr6_data &= ~(VAR_2 | VAR_1);
  VAR_8->cr6_data |= VAR_0;
  FUNC_6(&VAR_8->lock, VAR_9);
  return;
 }

 FUNC_0(0, "Set multicast address", VAR_10);
 if (VAR_8->chip_id == VAR_6)
  FUNC_1(VAR_7);
 else
  FUNC_4(VAR_7);
 FUNC_6(&VAR_8->lock, VAR_9);
}

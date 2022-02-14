
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_sa {int mode; int salt; int key; TYPE_2__* xs; scalar_t__ used; } ;
struct rx_sa {int mode; int iptbl_ind; int salt; int key; TYPE_2__* xs; scalar_t__ used; } ;
struct rx_ip_sa {int ipaddr; scalar_t__ used; } ;
struct ixgbe_ipsec {struct rx_ip_sa* ip_tbl; struct tx_sa* tx_tbl; struct rx_sa* rx_tbl; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags2; struct ixgbe_hw hw; struct ixgbe_ipsec* ipsec; } ;
struct TYPE_3__ {int spi; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int,int ,int ) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;

void FUNC_7(struct ixgbe_adapter *VAR_4)
{
 struct ixgbe_ipsec *VAR_5 = VAR_4->ipsec;
 struct ixgbe_hw *VAR_6 = &VAR_4->hw;
 int VAR_7;

 if (!(VAR_4->flags2 & VAR_0))
  return;


 FUNC_6(VAR_4);
 FUNC_0(VAR_4);
 FUNC_5(VAR_4);


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct rx_sa *VAR_8 = &VAR_5->rx_tbl[VAR_7];
  struct tx_sa *VAR_9 = &VAR_5->tx_tbl[VAR_7];

  if (VAR_8->used) {
   if (VAR_8->mode & VAR_3)
    FUNC_1(VAR_8->xs);
   else
    FUNC_3(VAR_6, VAR_7, VAR_8->xs->id.spi,
            VAR_8->key, VAR_8->salt,
            VAR_8->mode, VAR_8->iptbl_ind);
  }

  if (VAR_9->used) {
   if (VAR_9->mode & VAR_3)
    FUNC_1(VAR_9->xs);
   else
    FUNC_4(VAR_6, VAR_7, VAR_9->key, VAR_9->salt);
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct rx_ip_sa *VAR_10 = &VAR_5->ip_tbl[VAR_7];

  if (VAR_10->used)
   FUNC_2(VAR_6, VAR_7, VAR_10->ipaddr);
 }
}

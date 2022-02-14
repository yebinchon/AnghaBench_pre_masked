
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mac_device {int rx_pause_active; int (* set_rx_pause ) (struct fman_mac*,int) ;int tx_pause_active; int (* set_tx_pause ) (struct fman_mac*,int ,int ,int ) ;struct fman_mac* fman_mac; } ;
struct fman_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct fman_mac*,int) ;
 int FUNC_2 (struct fman_mac*,int ,int ,int ) ;

int FUNC_3(struct mac_device *VAR_2, bool VAR_3, bool VAR_4)
{
 struct fman_mac *VAR_5 = VAR_2->fman_mac;
 int VAR_6 = 0;

 if (VAR_3 != VAR_2->rx_pause_active) {
  VAR_6 = VAR_2->set_rx_pause(VAR_5, VAR_3);
  if (FUNC_0(VAR_6 == 0))
   VAR_2->rx_pause_active = VAR_3;
 }

 if (VAR_4 != VAR_2->tx_pause_active) {
  u16 VAR_7 = (VAR_4 ? VAR_1 :
      VAR_0);

  VAR_6 = VAR_2->set_tx_pause(VAR_5, 0, VAR_7, 0);

  if (FUNC_0(VAR_6 == 0))
   VAR_2->tx_pause_active = VAR_4;
 }

 return VAR_6;
}

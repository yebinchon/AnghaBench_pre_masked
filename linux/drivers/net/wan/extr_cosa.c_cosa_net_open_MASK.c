
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct channel_data {int usage; TYPE_1__* cosa; int rx_done; int tx_done; int setup_rx; int name; } ;
struct TYPE_2__ {int firmware_status; int lock; int usage; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct channel_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct channel_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6)
{
 struct channel_data *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;
 unsigned long VAR_9;

 if (!(VAR_7->cosa->firmware_status & VAR_0)) {
  FUNC_4("%s: start the firmware first (status %d)\n",
     VAR_7->cosa->name, VAR_7->cosa->firmware_status);
  return -VAR_2;
 }
 FUNC_6(&VAR_7->cosa->lock, VAR_9);
 if (VAR_7->usage != 0) {
  FUNC_5("%s: cosa_net_open called with usage count %d\n",
   VAR_7->name, VAR_7->usage);
  FUNC_7(&VAR_7->cosa->lock, VAR_9);
  return -VAR_1;
 }
 VAR_7->setup_rx = VAR_4;
 VAR_7->tx_done = VAR_5;
 VAR_7->rx_done = VAR_3;
 VAR_7->usage = -1;
 VAR_7->cosa->usage++;
 FUNC_7(&VAR_7->cosa->lock, VAR_9);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_6(&VAR_7->cosa->lock, VAR_9);
  VAR_7->usage = 0;
  VAR_7->cosa->usage--;
  FUNC_7(&VAR_7->cosa->lock, VAR_9);
  return VAR_8;
 }

 FUNC_3(VAR_6);
 FUNC_0(VAR_7);
 return 0;
}

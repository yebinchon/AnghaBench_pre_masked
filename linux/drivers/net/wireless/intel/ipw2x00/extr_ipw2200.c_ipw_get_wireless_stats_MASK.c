
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int code; scalar_t__ retries; } ;
struct TYPE_7__ {scalar_t__ beacon; } ;
struct TYPE_6__ {int updated; scalar_t__ noise; scalar_t__ level; scalar_t__ qual; } ;
struct iw_statistics {TYPE_3__ discard; TYPE_2__ miss; TYPE_1__ qual; } ;
struct ipw_priv {int status; TYPE_5__* ieee; scalar_t__ last_tx_failures; int average_missed_beacons; scalar_t__ exp_avg_noise; scalar_t__ exp_avg_rssi; scalar_t__ quality; struct iw_statistics wstats; } ;
struct TYPE_9__ {int rx_discards_undecryptable; } ;
struct TYPE_10__ {TYPE_4__ ieee_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct iw_statistics *FUNC_2(struct net_device *VAR_8)
{
 struct ipw_priv *VAR_9 = FUNC_1(VAR_8);
 struct iw_statistics *VAR_10;

 VAR_10 = &VAR_9->wstats;






 if (!(VAR_9->status & VAR_7)) {
  VAR_10->miss.beacon = 0;
  VAR_10->discard.retries = 0;
  VAR_10->qual.qual = 0;
  VAR_10->qual.level = 0;
  VAR_10->qual.noise = 0;
  VAR_10->qual.updated = 7;
  VAR_10->qual.updated |= VAR_3 |
      VAR_5 | VAR_1;
  return VAR_10;
 }

 VAR_10->qual.qual = VAR_9->quality;
 VAR_10->qual.level = VAR_9->exp_avg_rssi;
 VAR_10->qual.noise = VAR_9->exp_avg_noise;
 VAR_10->qual.updated = VAR_6 | VAR_2 |
     VAR_4 | VAR_0;

 VAR_10->miss.beacon = FUNC_0(&VAR_9->average_missed_beacons);
 VAR_10->discard.retries = VAR_9->last_tx_failures;
 VAR_10->discard.code = VAR_9->ieee->ieee_stats.rx_discards_undecryptable;





 return VAR_10;
}

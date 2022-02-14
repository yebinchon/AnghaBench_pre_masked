
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct noise_info {int bPauseDIG; int IGIValue; int max_time; int chan; } ;
struct net_device {int dummy; } ;
struct mlme_ext_priv {int cur_channel; } ;
struct TYPE_4__ {int qual; int level; int noise; int updated; } ;
struct iw_statistics {TYPE_2__ qual; } ;
struct hal_com_data {int odmpriv; } ;
struct TYPE_3__ {int signal_strength; int signal_qual; int noise; int rssi; } ;
struct adapter {struct iw_statistics iwstats; TYPE_1__ recvpriv; struct mlme_ext_priv mlmeextpriv; int mlmepriv; } ;


 int FUNC_0 (char*,int,int,...) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (struct adapter*,int ,int *,int*) ;
 int FUNC_6 (struct adapter*,int ,struct noise_info*,int) ;
 scalar_t__ FUNC_7 (struct adapter*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static struct iw_statistics *FUNC_12(struct net_device *VAR_5)
{
 struct adapter *VAR_6 = (struct adapter *)FUNC_8(VAR_5);
 struct iw_statistics *VAR_7 =&VAR_6->iwstats;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (FUNC_3(&VAR_6->mlmepriv, VAR_4) != 1) {
  VAR_7->qual.qual = 0;
  VAR_7->qual.level = 0;
  VAR_7->qual.noise = 0;

 } else {
  VAR_8 = VAR_6->recvpriv.signal_strength;



  VAR_9 = VAR_6->recvpriv.signal_qual;
  VAR_10 = VAR_6->recvpriv.noise;
  FUNC_0("level:%d, qual:%d, noise:%d, rssi (%d)\n", VAR_8, VAR_9, VAR_10, VAR_6->recvpriv.rssi);

  VAR_7->qual.level = VAR_8;
  VAR_7->qual.qual = VAR_9;
  VAR_7->qual.noise = VAR_10;
 }
 VAR_7->qual.updated = VAR_1 ;





 return &VAR_6->iwstats;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_cqe_compress_def; } ;
struct TYPE_3__ {TYPE_2__ params; } ;
struct mlx5e_priv {int netdev; int state_lock; int tstamp; TYPE_1__ channels; int mdev; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct hwtstamp_config*,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,struct hwtstamp_config*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5e_priv*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;

int FUNC_12(struct mlx5e_priv *VAR_5, struct ifreq *VAR_6)
{
 struct hwtstamp_config VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_5->mdev, VAR_4) ||
     (FUNC_5(VAR_5->mdev) == -1))
  return -VAR_1;

 if (FUNC_2(&VAR_7, VAR_6->ifr_data, sizeof(VAR_7)))
  return -VAR_0;


 switch (VAR_7.tx_type) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_2;
 }

 FUNC_7(&VAR_5->state_lock);

 switch (VAR_7.rx_filter) {
 case 144:

  FUNC_6(VAR_5, VAR_5->channels.params.rx_cqe_compress_def);
  break;
 case 145:
 case 130:
 case 141:
 case 140:
 case 142:
 case 133:
 case 132:
 case 134:
 case 136:
 case 135:
 case 137:
 case 138:
 case 131:
 case 139:
 case 143:

  if (FUNC_0(&VAR_5->channels.params, VAR_3))
   FUNC_11(VAR_5->netdev, "Disabling RX cqe compression\n");
  VAR_8 = FUNC_6(VAR_5, 0);
  if (VAR_8) {
   FUNC_9(VAR_5->netdev, "Failed disabling cqe compression err=%d\n", VAR_8);
   FUNC_8(&VAR_5->state_lock);
   return VAR_8;
  }
  VAR_7.rx_filter = 145;
  break;
 default:
  FUNC_8(&VAR_5->state_lock);
  return -VAR_2;
 }

 FUNC_4(&VAR_5->tstamp, &VAR_7, sizeof(VAR_7));
 FUNC_8(&VAR_5->state_lock);


 FUNC_10(VAR_5->netdev);

 return FUNC_3(VAR_6->ifr_data, &VAR_7,
       sizeof(VAR_7)) ? -VAR_0 : 0;
}

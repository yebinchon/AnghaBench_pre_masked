
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwtstamp_config {int dummy; } ;
struct mlx5e_priv {int mdev; struct hwtstamp_config tstamp; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int VAR_2 ;

int FUNC_2(struct mlx5e_priv *VAR_3, struct ifreq *VAR_4)
{
 struct hwtstamp_config *VAR_5 = &VAR_3->tstamp;

 if (!FUNC_0(VAR_3->mdev, VAR_2))
  return -VAR_1;

 return FUNC_1(VAR_4->ifr_data, VAR_5, sizeof(*VAR_5)) ? -VAR_0 : 0;
}

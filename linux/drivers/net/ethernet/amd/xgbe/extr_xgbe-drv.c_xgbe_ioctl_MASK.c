
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;


 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgbe_prv_data*,struct ifreq*) ;
 int FUNC_2 (struct xgbe_prv_data*,struct ifreq*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct xgbe_prv_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}

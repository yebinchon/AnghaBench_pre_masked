
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macsec_rxh_data {int secys; } ;
struct macsec_dev {struct net_device* real_dev; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct macsec_rxh_data*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,struct list_head*) ;
 struct macsec_rxh_data* FUNC_3 (struct net_device*) ;
 struct macsec_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct macsec_dev *VAR_2 = FUNC_4(VAR_0);
 struct net_device *VAR_3 = VAR_2->real_dev;
 struct macsec_rxh_data *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_0, VAR_1);

 if (FUNC_1(&VAR_4->secys)) {
  FUNC_5(VAR_3);
  FUNC_0(VAR_4);
 }
}

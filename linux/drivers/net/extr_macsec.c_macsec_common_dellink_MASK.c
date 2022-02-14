
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macsec_dev {int secys; struct net_device* real_dev; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct macsec_dev*) ;
 int VAR_0 ;
 struct macsec_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*) ;
 int FUNC_4 (struct net_device*,struct list_head*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, struct list_head *VAR_2)
{
 struct macsec_dev *VAR_3 = FUNC_2(VAR_1);
 struct net_device *VAR_4 = VAR_3->real_dev;

 FUNC_4(VAR_1, VAR_2);
 FUNC_0(&VAR_3->secys);
 FUNC_1(VAR_3);
 FUNC_3(VAR_4, VAR_1);

 VAR_0++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macsec_rxh_data {int secys; } ;
struct macsec_dev {int secys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct macsec_rxh_data*) ;
 struct macsec_rxh_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct macsec_rxh_data* FUNC_4 (struct net_device*) ;
 int VAR_2 ;
 struct macsec_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,struct macsec_rxh_data*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3,
          struct net_device *VAR_4)
{
 struct macsec_dev *VAR_5 = FUNC_5(VAR_4);
 struct macsec_rxh_data *VAR_6 = FUNC_4(VAR_3);

 if (!VAR_6) {
  int VAR_7;

  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;

  FUNC_0(&VAR_6->secys);

  VAR_7 = FUNC_6(VAR_3, VAR_2,
       VAR_6);
  if (VAR_7 < 0) {
   FUNC_1(VAR_6);
   return VAR_7;
  }
 }

 FUNC_3(&VAR_5->secys, &VAR_6->secys);
 return 0;
}

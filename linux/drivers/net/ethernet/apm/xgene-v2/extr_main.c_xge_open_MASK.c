
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int napi; } ;
struct net_device {int phydev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct xge_pdata*) ;
 int FUNC_6 (struct xge_pdata*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct xge_pdata*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct xge_pdata *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_0(&VAR_2->napi);
 VAR_3 = FUNC_7(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_5(VAR_2);
 FUNC_8(VAR_2, VAR_0, 1);

 FUNC_3(VAR_1->phydev);
 FUNC_6(VAR_2);
 FUNC_2(VAR_1);

 return 0;
}

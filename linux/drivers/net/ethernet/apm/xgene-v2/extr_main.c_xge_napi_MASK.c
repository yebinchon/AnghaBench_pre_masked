
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int dummy; } ;
struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;


 int FUNC_0 (struct napi_struct*,int) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xge_pdata*) ;
 int FUNC_3 (struct net_device*,int const) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct napi_struct *VAR_0, const int VAR_1)
{
 struct net_device *VAR_2 = VAR_0->dev;
 struct xge_pdata *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_4(VAR_2);
 VAR_4 = FUNC_3(VAR_2, VAR_1);

 if (VAR_4 < VAR_1) {
  FUNC_0(VAR_0, VAR_4);
  FUNC_2(VAR_3);
 }

 return VAR_4;
}

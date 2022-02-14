
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct fec_enet_private {scalar_t__ hwp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct napi_struct*,int) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct napi_struct *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 struct fec_enet_private *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3);

 FUNC_1(VAR_4);

 if (VAR_6 < VAR_3) {
  FUNC_2(VAR_2, VAR_6);
  FUNC_4(VAR_0, VAR_5->hwp + VAR_1);
 }
 return VAR_6;
}

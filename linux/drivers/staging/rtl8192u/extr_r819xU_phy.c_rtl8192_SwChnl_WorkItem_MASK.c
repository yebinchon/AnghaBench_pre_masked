
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int chan; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;

void FUNC_3(struct net_device *VAR_1)
{

 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, "==> SwChnlCallback819xUsbWorkItem(), chan:%d\n",
   VAR_2->chan);


 FUNC_2(VAR_1, VAR_2->chan);

 FUNC_0(VAR_0, "<== SwChnlCallback819xUsbWorkItem()\n");
}

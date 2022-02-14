
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dev_priv {int media_state; } ;


 int VAR_0 ;
 struct dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dev_priv*,int ,struct net_device*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct dev_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 == VAR_3->media_state)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);
 FUNC_3(VAR_3, VAR_0, VAR_1, "link %s\n",
     VAR_2 == VAR_3->media_state ? "on" : "off");
}

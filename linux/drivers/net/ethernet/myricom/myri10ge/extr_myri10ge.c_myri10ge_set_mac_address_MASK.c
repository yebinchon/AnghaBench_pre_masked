
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct myri10ge_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct myri10ge_priv*,int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct myri10ge_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct sockaddr *VAR_4 = VAR_3;
 struct myri10ge_priv *VAR_5 = FUNC_4(VAR_2);
 int VAR_6;

 if (!FUNC_0(VAR_4->sa_data))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, VAR_4->sa_data);
 if (VAR_6 != 0) {
  FUNC_3(VAR_2, "changing mac address failed with %d\n",
      VAR_6);
  return VAR_6;
 }


 FUNC_1(VAR_2->dev_addr, VAR_4->sa_data, VAR_1);
 return 0;
}

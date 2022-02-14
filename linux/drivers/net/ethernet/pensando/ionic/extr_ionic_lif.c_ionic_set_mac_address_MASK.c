
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {scalar_t__ sa_data; } ;
struct net_device {int * dev_addr; } ;


 int FUNC_0 (struct net_device*,struct sockaddr*) ;
 int FUNC_1 (struct net_device*,struct sockaddr*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0, void *VAR_1)
{
 struct sockaddr *VAR_2 = VAR_1;
 u8 *VAR_3;
 int VAR_4;

 VAR_3 = (u8 *)VAR_2->sa_data;
 if (FUNC_2(VAR_0->dev_addr, VAR_3))
  return 0;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (!FUNC_5(VAR_0->dev_addr)) {
  FUNC_6(VAR_0, "deleting mac addr %pM\n",
       VAR_0->dev_addr);
  FUNC_4(VAR_0, VAR_0->dev_addr);
 }

 FUNC_0(VAR_0, VAR_2);
 FUNC_6(VAR_0, "updating mac addr %pM\n", VAR_3);

 return FUNC_3(VAR_0, VAR_3);
}

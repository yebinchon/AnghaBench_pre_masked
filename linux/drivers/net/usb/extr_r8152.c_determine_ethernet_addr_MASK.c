
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; int sa_family; } ;
struct r8152 {scalar_t__ version; struct net_device* netdev; } ;
struct net_device {int dev_addr; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct r8152*,int ,struct net_device*,char*,...) ;
 int FUNC_4 (struct r8152*,int ,struct net_device*,char*,int ) ;
 int FUNC_5 (struct r8152*,int ,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct r8152*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_7(struct r8152 *VAR_4, struct sockaddr *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->netdev;
 int VAR_7;

 VAR_5->sa_family = VAR_6->type;

 if (VAR_4->version == VAR_2) {
  VAR_7 = FUNC_5(VAR_4, VAR_1, 8, VAR_5->sa_data);
 } else {



  VAR_7 = FUNC_6(VAR_4, VAR_5);
  if (VAR_7 < 0)
   VAR_7 = FUNC_5(VAR_4, VAR_0, 8, VAR_5->sa_data);
 }

 if (VAR_7 < 0) {
  FUNC_3(VAR_4, VAR_3, VAR_6, "Get ether addr fail\n");
 } else if (!FUNC_2(VAR_5->sa_data)) {
  FUNC_3(VAR_4, VAR_3, VAR_6, "Invalid ether addr %pM\n",
     VAR_5->sa_data);
  FUNC_0(VAR_6);
  FUNC_1(VAR_5->sa_data, VAR_6->dev_addr);
  FUNC_4(VAR_4, VAR_3, VAR_6, "Random ether addr %pM\n",
      VAR_5->sa_data);
  return 0;
 }

 return VAR_7;
}

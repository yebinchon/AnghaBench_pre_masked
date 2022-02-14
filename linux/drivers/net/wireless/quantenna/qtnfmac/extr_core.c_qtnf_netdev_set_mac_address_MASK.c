
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {unsigned char* sa_data; } ;
struct TYPE_2__ {int use_4addr; int iftype; } ;
struct qtnf_vif {TYPE_1__ wdev; int mac; } ;
struct net_device {unsigned char* dev_addr; } ;
typedef int old_addr ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct sockaddr*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct qtnf_vif*,int ,int ,unsigned char*) ;
 struct qtnf_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_3(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;
 int VAR_5;
 unsigned char VAR_6[VAR_0];

 FUNC_1(VAR_6, VAR_4->sa_data, sizeof(VAR_6));

 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_4(VAR_3->mac, 1);

 VAR_5 = FUNC_2(VAR_3, VAR_3->wdev.iftype,
          VAR_3->wdev.use_4addr,
          VAR_4->sa_data);

 if (VAR_5)
  FUNC_1(VAR_1->dev_addr, VAR_6, VAR_0);

 return VAR_5;
}

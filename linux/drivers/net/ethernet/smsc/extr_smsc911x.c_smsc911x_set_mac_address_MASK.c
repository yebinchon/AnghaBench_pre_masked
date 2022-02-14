
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct smsc911x_data {int generation; int mac_lock; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 struct smsc911x_data* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct smsc911x_data*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, void *VAR_4)
{
 struct smsc911x_data *VAR_5 = FUNC_3(VAR_3);
 struct sockaddr *VAR_6 = VAR_4;




 if (VAR_5->generation <= 1 && FUNC_4(VAR_3))
  return -VAR_1;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 FUNC_1(VAR_3->dev_addr, VAR_6->sa_data, VAR_2);

 FUNC_6(&VAR_5->mac_lock);
 FUNC_5(VAR_5, VAR_3->dev_addr);
 FUNC_7(&VAR_5->mac_lock);

 FUNC_2(VAR_3, "MAC Address: %pM\n", VAR_3->dev_addr);

 return 0;
}

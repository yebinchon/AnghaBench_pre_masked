
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct netdata_local {int lock; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netdata_local*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct netdata_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct sockaddr *VAR_4 = VAR_3;
 struct netdata_local *VAR_5 = FUNC_3(VAR_2);
 unsigned long VAR_6;

 if (!FUNC_1(VAR_4->sa_data))
  return -VAR_0;
 FUNC_2(VAR_2->dev_addr, VAR_4->sa_data, VAR_1);

 FUNC_4(&VAR_5->lock, VAR_6);


 FUNC_0(VAR_5, VAR_2->dev_addr);

 FUNC_5(&VAR_5->lock, VAR_6);

 return 0;
}

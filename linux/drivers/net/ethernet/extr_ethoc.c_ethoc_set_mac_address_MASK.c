
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, void *VAR_3)
{
 const struct sockaddr *VAR_4 = VAR_3;

 if (!FUNC_1(VAR_4->sa_data))
  return -VAR_0;
 FUNC_2(VAR_2->dev_addr, VAR_4->sa_data, VAR_1);
 FUNC_0(VAR_2);
 return 0;
}

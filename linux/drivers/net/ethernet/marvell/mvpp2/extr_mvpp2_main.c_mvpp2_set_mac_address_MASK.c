
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, void *VAR_2)
{
 const struct sockaddr *VAR_3 = VAR_2;
 int VAR_4;

 if (!FUNC_0(VAR_3->sa_data))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_3->sa_data);
 if (VAR_4) {

  FUNC_1(VAR_1, VAR_1->dev_addr);
  FUNC_2(VAR_1, "failed to change MAC address\n");
 }
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct net_device*,char*,int*) ;
 int FUNC_3 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, void *VAR_4)
{
 struct sockaddr *VAR_5 = VAR_4;
 int VAR_6;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;

 FUNC_1(VAR_3->dev_addr, VAR_5->sa_data, VAR_1);
 FUNC_2(VAR_3, "Setting MAC address to %pM\n", VAR_3->dev_addr);


 for (VAR_6=0; VAR_6 < VAR_1/2; VAR_6++)
  FUNC_3(VAR_3, VAR_2+VAR_6*2, VAR_3->dev_addr[VAR_6*2] | (VAR_3->dev_addr[VAR_6*2+1] << 8));

 return 0;
}

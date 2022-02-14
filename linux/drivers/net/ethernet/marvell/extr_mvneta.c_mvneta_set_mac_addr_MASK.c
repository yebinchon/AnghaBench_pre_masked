
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct mvneta_port {int rxq_def; } ;


 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (struct mvneta_port*,int ,int) ;
 struct mvneta_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, void *VAR_1)
{
 struct mvneta_port *VAR_2 = FUNC_3(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_2, VAR_0->dev_addr, -1);


 FUNC_2(VAR_2, VAR_3->sa_data, VAR_2->rxq_def);

 FUNC_0(VAR_0, VAR_1);
 return 0;
}

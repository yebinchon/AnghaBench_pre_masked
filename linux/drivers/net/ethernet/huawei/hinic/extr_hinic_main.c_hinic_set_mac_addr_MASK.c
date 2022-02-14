
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {unsigned char* sa_data; } ;
struct net_device {unsigned char* dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, void *VAR_2)
{
 unsigned char VAR_3[VAR_0];
 struct sockaddr *VAR_4 = VAR_2;
 int VAR_5;

 FUNC_1(VAR_3, VAR_4->sa_data, VAR_0);

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_5)
  FUNC_1(VAR_1->dev_addr, VAR_3, VAR_0);

 return VAR_5;
}

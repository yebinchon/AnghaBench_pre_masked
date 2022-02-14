
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*) ;
 int FUNC_3 (struct zd1201*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 struct sockaddr *VAR_4 = VAR_3;
 struct zd1201 *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5, VAR_1,
     VAR_4->sa_data, VAR_2->addr_len, 1);
 if (VAR_6)
  return VAR_6;
 FUNC_0(VAR_2->dev_addr, VAR_4->sa_data, VAR_2->addr_len);

 return FUNC_2(VAR_5);
}

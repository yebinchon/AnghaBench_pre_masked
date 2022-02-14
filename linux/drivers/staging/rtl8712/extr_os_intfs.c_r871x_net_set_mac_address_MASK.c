
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct _adapter {int bup; } ;


 int FUNC_0 (int ,int ) ;
 struct _adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct _adapter *VAR_2 = FUNC_1(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;

 if (!VAR_2->bup)
  FUNC_0(VAR_0->dev_addr, VAR_3->sa_data);
 return 0;
}

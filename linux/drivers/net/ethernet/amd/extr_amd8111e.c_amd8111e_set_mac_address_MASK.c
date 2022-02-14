
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int * dev_addr; int addr_len; } ;
struct amd8111e_priv {int lock; scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct amd8111e_priv *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 struct sockaddr *VAR_6 = VAR_3;

 FUNC_0(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_2(&VAR_4->lock);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_4( VAR_2->dev_addr[VAR_5], VAR_4->mmio + VAR_1 + VAR_5 );

 FUNC_3(&VAR_4->lock);

 return 0;
}

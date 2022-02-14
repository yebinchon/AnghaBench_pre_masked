
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct bnad {int bna_lock; } ;


 int FUNC_0 (struct bnad*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct bnad* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct bnad *VAR_3 = FUNC_2(VAR_0);
 struct sockaddr *VAR_4 = (struct sockaddr *)VAR_1;
 unsigned long VAR_5;

 FUNC_3(&VAR_3->bna_lock, VAR_5);

 VAR_2 = FUNC_0(VAR_3, VAR_4->sa_data);
 if (!VAR_2)
  FUNC_1(VAR_0->dev_addr, VAR_4->sa_data);

 FUNC_4(&VAR_3->bna_lock, VAR_5);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct atl1_adapter {int lock; int mii; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct atl1_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct atl1_adapter *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_1))
  return -VAR_0;

 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_0(&VAR_4->mii, FUNC_1(VAR_2), VAR_3, ((void*)0));
 FUNC_5(&VAR_4->lock, VAR_5);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int mii; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct net_device*,struct ifreq*,int) ;
 int FUNC_2 (struct ifreq*) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct pch_gbe_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct pch_gbe_adapter *VAR_4 = FUNC_4(VAR_1);

 FUNC_3(VAR_1, "cmd : 0x%04x\n", VAR_3);

 if (VAR_3 == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_0(&VAR_4->mii, FUNC_2(VAR_2), VAR_3, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mdio_ops {int dummy; } ;
struct cphy {scalar_t__ bmsr; int phy_update; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cphy*,struct net_device*,int,int *,struct mdio_ops const*) ;
 struct cphy* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct cphy *FUNC_3(struct net_device *VAR_3,
   int VAR_4, const struct mdio_ops *VAR_5)
{
 struct cphy *VAR_6 = FUNC_2(sizeof (*VAR_6), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_1(VAR_6, VAR_3, VAR_4, &VAR_1, VAR_5);
 FUNC_0(&VAR_6->phy_update, VAR_2);
 VAR_6->bmsr = 0;

 return VAR_6;
}

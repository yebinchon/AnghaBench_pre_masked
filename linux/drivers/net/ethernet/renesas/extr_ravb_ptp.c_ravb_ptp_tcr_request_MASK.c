
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ravb_private {struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ravb_private *VAR_3, u32 VAR_4)
{
 struct net_device *VAR_5 = VAR_3->ndev;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_5, VAR_0, VAR_4, VAR_4);
 return FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2);
}

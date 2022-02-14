
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct bnxt {struct net_device* dev; } ;


 struct net_device* FUNC_0 (struct bnxt*,int ) ;

__attribute__((used)) static struct net_device *FUNC_1(struct bnxt *VAR_0, u16 VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_0, VAR_1);


 return VAR_2 ? VAR_2 : VAR_0->dev;
}

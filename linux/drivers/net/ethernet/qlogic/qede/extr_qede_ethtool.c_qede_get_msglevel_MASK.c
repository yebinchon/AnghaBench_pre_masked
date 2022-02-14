
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qede_dev {int dp_module; scalar_t__ dp_level; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_0(VAR_1);

 return ((u32)VAR_2->dp_level << VAR_0) | VAR_2->dp_module;
}

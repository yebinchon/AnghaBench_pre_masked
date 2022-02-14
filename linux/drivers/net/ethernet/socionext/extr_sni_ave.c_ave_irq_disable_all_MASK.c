
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct ave_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_1)
{
 struct ave_private *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->base + VAR_0);
 FUNC_2(0, VAR_2->base + VAR_0);

 return VAR_3;
}

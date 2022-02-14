
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 struct adapter *VAR_5 = (struct adapter *)FUNC_0(VAR_1);

 switch (VAR_2) {
 case 129:

  if (!FUNC_1(VAR_5))
   VAR_4 = -1;

  break;

 case 128:

  if (!FUNC_1(VAR_5))
   VAR_4 = -1;

  break;

 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;

}

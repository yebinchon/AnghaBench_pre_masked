
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {TYPE_1__* resource; } ;
struct net2272 {int dummy; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (struct net2272*) ;
 int FUNC_1 (struct net2272*) ;
 struct net2272* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct platform_device *VAR_0)
{
 struct net2272 *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);

 FUNC_3(VAR_0->resource[0].start,
  FUNC_4(&VAR_0->resource[0]));

 FUNC_0(VAR_1);

 return 0;
}

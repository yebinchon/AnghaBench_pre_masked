
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk; } ;
struct xvtc_device {TYPE_1__ xvip; int has_generator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

int FUNC_2(struct xvtc_device *VAR_2)
{
 if (!VAR_2->has_generator)
  return -VAR_0;

 FUNC_1(&VAR_2->xvip, VAR_1, 0);

 FUNC_0(VAR_2->xvip.clk);

 return 0;
}

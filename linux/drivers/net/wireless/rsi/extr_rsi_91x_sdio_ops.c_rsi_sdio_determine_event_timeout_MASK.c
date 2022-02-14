
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsi_hw {scalar_t__ rsi_dev; } ;
struct TYPE_2__ {scalar_t__ buffer_full; } ;
struct rsi_91x_sdiodev {TYPE_1__ rx_info; } ;


 int VAR_0 ;

int FUNC_0(struct rsi_hw *VAR_1)
{
 struct rsi_91x_sdiodev *VAR_2 =
  (struct rsi_91x_sdiodev *)VAR_1->rsi_dev;


 if (VAR_2->rx_info.buffer_full)
  return 2;

 return VAR_0;
}

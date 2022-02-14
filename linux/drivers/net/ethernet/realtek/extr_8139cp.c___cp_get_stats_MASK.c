
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cp_private {TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_missed_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cp_private *VAR_1)
{

 VAR_1->dev->stats.rx_missed_errors += (FUNC_0 (VAR_0) & 0xffffff);
 FUNC_1 (VAR_0, 0);
}

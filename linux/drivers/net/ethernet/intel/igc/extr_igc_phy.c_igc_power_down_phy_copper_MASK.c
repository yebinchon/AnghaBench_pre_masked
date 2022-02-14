
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct igc_hw*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct igc_hw*,int ,int *) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct igc_hw *VAR_2)
{
 u16 VAR_3 = 0;


 VAR_2->phy.ops.read_reg(VAR_2, VAR_1, &VAR_3);
 VAR_3 |= VAR_0;





 FUNC_1(1000, 2000);
}

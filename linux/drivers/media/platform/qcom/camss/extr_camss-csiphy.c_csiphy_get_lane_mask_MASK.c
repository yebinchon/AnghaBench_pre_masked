
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int pos; } ;
struct csiphy_lanes_cfg {int num_data; TYPE_2__* data; TYPE_1__ clk; } ;
struct TYPE_4__ {int pos; } ;



__attribute__((used)) static u8 FUNC_0(struct csiphy_lanes_cfg *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 VAR_1 = 1 << VAR_0->clk.pos;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_data; VAR_2++)
  VAR_1 |= 1 << VAR_0->data[VAR_2].pos;

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csiphy_lanes_cfg {int num_data; TYPE_1__* data; } ;
struct TYPE_2__ {int pos; } ;



__attribute__((used)) static u32 FUNC_0(struct csiphy_lanes_cfg *VAR_0)
{
 u32 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_data; VAR_2++)
  VAR_1 |= VAR_0->data[VAR_2].pos << (VAR_2 * 4);

 return VAR_1;
}

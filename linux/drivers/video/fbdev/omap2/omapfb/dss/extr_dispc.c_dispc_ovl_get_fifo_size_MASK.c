
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
struct TYPE_4__ {int* fifo_assignment; scalar_t__* fifo_size; TYPE_1__* feat; } ;
struct TYPE_3__ {int num_fifos; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(enum omap_plane VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0.feat->num_fifos; ++VAR_2) {
  if (VAR_0.fifo_assignment[VAR_2] == VAR_1)
   VAR_3 += VAR_0.fifo_size[VAR_2];
 }

 return VAR_3;
}

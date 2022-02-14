
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bd_table {TYPE_1__* start_bd; int dma; } ;
struct TYPE_2__ {int* offset; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct bd_table *VAR_1,
     struct bd_table *VAR_2,
     u32 VAR_3)
{

 VAR_1->start_bd[VAR_3-1].offset[0] =
    FUNC_0(FUNC_1(VAR_2->dma));

 VAR_1->start_bd[VAR_3-1].offset[1] =
    FUNC_0(FUNC_2(VAR_2->dma));

 VAR_1->start_bd[VAR_3-1].offset[2] =
    0x0;

 VAR_1->start_bd[VAR_3-1].offset[3] =
    FUNC_0(VAR_0);
}

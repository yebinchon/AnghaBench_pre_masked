
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qede_rx_queue {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct qede_rx_queue *VAR_2, u64 **VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  **VAR_3 = *((u64 *)(((void *)VAR_2) + VAR_1[VAR_4].offset));
  (*VAR_3)++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qede_rx_queue {int rxq_id; } ;
struct qede_dev {int dummy; } ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,char*,int,char*) ;

__attribute__((used)) static void FUNC_1(struct qede_dev *VAR_3,
           struct qede_rx_queue *VAR_4, u8 **VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_0(*VAR_5, "%d: %s", VAR_4->rxq_id,
   VAR_2[VAR_6].string);
  *VAR_5 += VAR_0;
 }
}

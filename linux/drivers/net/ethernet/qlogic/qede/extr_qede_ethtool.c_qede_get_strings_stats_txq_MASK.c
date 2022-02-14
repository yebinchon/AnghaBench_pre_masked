
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qede_tx_queue {int index; int cos; scalar_t__ is_xdp; } ;
struct qede_dev {int dummy; } ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qede_dev*,struct qede_tx_queue*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct qede_dev *VAR_3,
           struct qede_tx_queue *VAR_4, u8 **VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4->is_xdp)
   FUNC_1(*VAR_5, "%d [XDP]: %s",
    FUNC_0(VAR_3, VAR_4),
    VAR_2[VAR_6].string);
  else
   FUNC_1(*VAR_5, "%d_%d: %s", VAR_4->index, VAR_4->cos,
    VAR_2[VAR_6].string);
  *VAR_5 += VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data_queue {int qid; TYPE_1__* rt2x00dev; } ;
struct TYPE_2__ {int hw; } ;






 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct data_queue *VAR_0)
{
 switch (VAR_0->qid) {
 case 128:
 case 129:
 case 131:
 case 130:




  FUNC_0(VAR_0->rt2x00dev->hw, VAR_0->qid);
  break;
 default:
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_queue {int qid; int rt2x00dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct data_queue*,int) ;
 int FUNC_2 (struct data_queue*) ;
 int FUNC_3 (struct data_queue*) ;

__attribute__((used)) static void FUNC_4(struct data_queue *VAR_0)
{
 FUNC_0(VAR_0->rt2x00dev, "TX queue %d DMA timed out, invoke forced forced reset\n",
      VAR_0->qid);

 FUNC_3(VAR_0);
 FUNC_1(VAR_0, 1);
 FUNC_2(VAR_0);
}

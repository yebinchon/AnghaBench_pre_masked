
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sge_idma_monitor_state {int idma_1s_thresh; int* idma_stalled; int* idma_qid; int* idma_warn; int* idma_state; } ;
struct adapter {int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int,...) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,int ,int) ;

void FUNC_4(struct adapter *VAR_5,
       struct sge_idma_monitor_state *VAR_6,
       int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10[2];
 FUNC_3(VAR_5, VAR_2, 13);
 VAR_10[0] = FUNC_1(VAR_5, VAR_0);
 VAR_10[1] = FUNC_1(VAR_5, VAR_1);

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  u32 VAR_11, VAR_12;







  if (VAR_10[VAR_9] < VAR_6->idma_1s_thresh) {
   if (VAR_6->idma_stalled[VAR_9] >= VAR_4 * VAR_7)
    FUNC_0(VAR_5->pdev_dev, "SGE idma%d, queue %u, "
      "resumed after %d seconds\n",
      VAR_9, VAR_6->idma_qid[VAR_9],
      VAR_6->idma_stalled[VAR_9] / VAR_7);
   VAR_6->idma_stalled[VAR_9] = 0;
   continue;
  }
  if (VAR_6->idma_stalled[VAR_9] == 0) {
   VAR_6->idma_stalled[VAR_9] = VAR_7;
   VAR_6->idma_warn[VAR_9] = 0;
  } else {
   VAR_6->idma_stalled[VAR_9] += VAR_8;
   VAR_6->idma_warn[VAR_9] -= VAR_8;
  }

  if (VAR_6->idma_stalled[VAR_9] < VAR_4 * VAR_7)
   continue;



  if (VAR_6->idma_warn[VAR_9] > 0)
   continue;
  VAR_6->idma_warn[VAR_9] = VAR_3 * VAR_7;





  FUNC_3(VAR_5, VAR_2, 0);
  VAR_11 = FUNC_1(VAR_5, VAR_1);
  VAR_6->idma_state[VAR_9] = (VAR_11 >> (VAR_9 * 9)) & 0x3f;

  FUNC_3(VAR_5, VAR_2, 11);
  VAR_12 = FUNC_1(VAR_5, VAR_1);
  VAR_6->idma_qid[VAR_9] = (VAR_12 >> (VAR_9 * 16)) & 0xffff;

  FUNC_0(VAR_5->pdev_dev, "SGE idma%u, queue %u, potentially stuck in "
    "state %u for %d seconds (debug0=%#x, debug11=%#x)\n",
    VAR_9, VAR_6->idma_qid[VAR_9], VAR_6->idma_state[VAR_9],
    VAR_6->idma_stalled[VAR_9] / VAR_7,
    VAR_11, VAR_12);
  FUNC_2(VAR_5, VAR_6->idma_state[VAR_9]);
 }
}

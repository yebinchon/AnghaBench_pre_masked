
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_peer {int gidx; int service; } ;
struct perf_ctx {scalar_t__ cmd_send; int pcnt; int ntb; int gidx; struct perf_peer* peers; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct perf_peer*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_11(struct perf_ctx *VAR_2)
{
 int VAR_3;

 if (VAR_2->cmd_send == VAR_1) {
  u64 VAR_4;

  VAR_4 = FUNC_7(VAR_2->ntb);
  (void)FUNC_8(VAR_2->ntb, VAR_4);
 } else {
  (void)FUNC_5(VAR_2->ntb, FUNC_1(VAR_2->gidx));
 }

 FUNC_3(VAR_2->ntb);

 for (VAR_3 = 0; VAR_3 < VAR_2->pcnt; VAR_3++)
  FUNC_10(&VAR_2->peers[VAR_3], VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->pcnt; VAR_3++)
  FUNC_2(&VAR_2->peers[VAR_3].service);

 for (VAR_3 = 0; VAR_3 < VAR_2->pcnt; VAR_3++) {
  struct perf_peer *VAR_5 = &VAR_2->peers[VAR_3];

  FUNC_9(VAR_2->ntb, FUNC_0(VAR_5->gidx), 0);
 }

 FUNC_4(VAR_2->ntb, FUNC_1(VAR_2->gidx));

 FUNC_6(VAR_2->ntb);
}

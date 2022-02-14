
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_peer {int sts; } ;
struct perf_ctx {int pcnt; struct perf_peer* peers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_peer*,int ) ;
 int FUNC_1 (struct perf_peer*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 struct perf_ctx *VAR_4 = VAR_3;
 struct perf_peer *VAR_5;
 bool VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->pcnt; VAR_7++) {
  VAR_5 = &VAR_4->peers[VAR_7];

  VAR_6 = FUNC_1(VAR_5);

  if (VAR_6 &&
      !FUNC_3(VAR_2, &VAR_5->sts)) {
   FUNC_0(VAR_5, VAR_1);
  } else if (!VAR_6 &&
      FUNC_2(VAR_2, &VAR_5->sts)) {
   FUNC_0(VAR_5, VAR_0);
  }
 }
}

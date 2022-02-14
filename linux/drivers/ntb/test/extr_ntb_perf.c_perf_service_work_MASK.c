
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct perf_peer {TYPE_2__* perf; int sts; int inbuf_xlat; int outbuf_size; } ;
struct TYPE_4__ {TYPE_1__* ntb; struct perf_peer* test_peer; int busy_flag; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct perf_peer*,int ,int ) ;
 int FUNC_3 (struct perf_peer*) ;
 int FUNC_4 (struct perf_peer*) ;
 int FUNC_5 (struct perf_peer*) ;
 int FUNC_6 (struct perf_peer*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct perf_peer* FUNC_10 (struct work_struct*) ;

__attribute__((used)) static void FUNC_11(struct work_struct *VAR_6)
{
 struct perf_peer *VAR_7 = FUNC_10(VAR_6);

 if (FUNC_8(VAR_3, &VAR_7->sts))
  FUNC_2(VAR_7, VAR_3, VAR_7->outbuf_size);

 if (FUNC_8(VAR_1, &VAR_7->sts))
  FUNC_5(VAR_7);

 if (FUNC_8(VAR_4, &VAR_7->sts))
  FUNC_2(VAR_7, VAR_4, VAR_7->inbuf_xlat);

 if (FUNC_8(VAR_2, &VAR_7->sts))
  FUNC_6(VAR_7);

 if (FUNC_8(VAR_0, &VAR_7->sts)) {
  FUNC_0(VAR_5, &VAR_7->sts);
  if (FUNC_9(0, &VAR_7->perf->busy_flag) &&
      VAR_7 == VAR_7->perf->test_peer) {
   FUNC_1(&VAR_7->perf->ntb->dev,
    "Freeing while test on-fly\n");
   FUNC_7(VAR_7->perf);
  }
  FUNC_4(VAR_7);
  FUNC_3(VAR_7);
 }
}

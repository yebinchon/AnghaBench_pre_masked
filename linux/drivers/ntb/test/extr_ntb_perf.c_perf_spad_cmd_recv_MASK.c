
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct perf_peer {int gidx; } ;
struct perf_ctx {int pcnt; TYPE_1__* ntb; struct perf_peer* peers; int gidx; } ;
typedef enum perf_cmd { ____Placeholder_perf_cmd } perf_cmd ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_8 (struct perf_peer*) ;

__attribute__((used)) static int FUNC_9(struct perf_ctx *VAR_2, int *VAR_3,
         enum perf_cmd *VAR_4, u64 *VAR_5)
{
 struct perf_peer *VAR_6;
 u32 VAR_7;

 FUNC_5(VAR_2->ntb, FUNC_3(VAR_2->gidx));







 for (*VAR_3 = 0; *VAR_3 < VAR_2->pcnt; (*VAR_3)++) {
  VAR_6 = &VAR_2->peers[*VAR_3];

  if (!FUNC_8(VAR_6))
   continue;

  VAR_7 = FUNC_6(VAR_2->ntb, FUNC_0(VAR_6->gidx));
  if (VAR_7 == VAR_1)
   continue;

  *VAR_4 = VAR_7;

  VAR_7 = FUNC_6(VAR_2->ntb, FUNC_2(VAR_6->gidx));
  *VAR_5 = VAR_7;

  VAR_7 = FUNC_6(VAR_2->ntb, FUNC_1(VAR_6->gidx));
  *VAR_5 |= (u64)VAR_7 << 32;


  FUNC_7(VAR_2->ntb, FUNC_0(VAR_6->gidx),
          VAR_1);

  FUNC_4(&VAR_2->ntb->dev, "CMD recv: %d 0x%llx\n", *VAR_4, *VAR_5);

  return 0;
 }

 return -VAR_0;
}

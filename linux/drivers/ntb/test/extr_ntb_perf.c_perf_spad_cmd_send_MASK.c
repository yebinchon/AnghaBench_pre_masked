
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct perf_peer {int gidx; int pidx; struct perf_ctx* perf; } ;
struct perf_ctx {TYPE_1__* ntb; int gidx; } ;
typedef enum perf_cmd { ____Placeholder_perf_cmd } perf_cmd ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int) ;
 int FUNC_9 (struct perf_peer*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct perf_peer *VAR_6, enum perf_cmd VAR_7,
         u64 VAR_8)
{
 struct perf_ctx *VAR_9 = VAR_6->perf;
 int VAR_10;
 u32 VAR_11;

 FUNC_4(&VAR_9->ntb->dev, "CMD send: %d 0x%llx\n", VAR_7, VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (!FUNC_9(VAR_6))
   return -VAR_1;

  VAR_11 = FUNC_7(VAR_9->ntb, VAR_6->pidx,
      FUNC_0(VAR_9->gidx));
  if (VAR_11 != VAR_5) {
   FUNC_11(VAR_4, VAR_3);
   continue;
  }

  FUNC_8(VAR_9->ntb, VAR_6->pidx,
        FUNC_2(VAR_9->gidx),
        FUNC_5(VAR_8));
  FUNC_8(VAR_9->ntb, VAR_6->pidx,
        FUNC_1(VAR_9->gidx),
        FUNC_10(VAR_8));
  FUNC_8(VAR_9->ntb, VAR_6->pidx,
        FUNC_0(VAR_9->gidx),
        VAR_7);
  FUNC_6(VAR_9->ntb, FUNC_3(VAR_6->gidx));

  FUNC_4(&VAR_9->ntb->dev, "DB ring peer %#llx\n",
   FUNC_3(VAR_6->gidx));

  break;
 }

 return VAR_10 < VAR_2 ? 0 : -VAR_0;
}

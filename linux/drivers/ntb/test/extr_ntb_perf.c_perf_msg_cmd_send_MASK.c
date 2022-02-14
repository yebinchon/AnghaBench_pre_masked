
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct perf_peer {int pidx; struct perf_ctx* perf; } ;
struct perf_ctx {TYPE_1__* ntb; } ;
typedef enum perf_cmd { ____Placeholder_perf_cmd } perf_cmd ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int) ;
 int FUNC_6 (struct perf_peer*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct perf_peer *VAR_8, enum perf_cmd VAR_9,
        u64 VAR_10)
{
 struct perf_ctx *VAR_11 = VAR_8->perf;
 int VAR_12, VAR_13;
 u64 VAR_14;

 FUNC_0(&VAR_11->ntb->dev, "CMD send: %d 0x%llx\n", VAR_9, VAR_10);
 VAR_14 = FUNC_3(VAR_11->ntb);
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  if (!FUNC_6(VAR_8))
   return -VAR_1;

  VAR_13 = FUNC_2(VAR_11->ntb, VAR_14);
  if (VAR_13)
   return VAR_13;

  FUNC_5(VAR_11->ntb, VAR_8->pidx, VAR_7,
       FUNC_1(VAR_10));

  if (FUNC_4(VAR_11->ntb) & VAR_14) {
   FUNC_8(VAR_4, VAR_3);
   continue;
  }

  FUNC_5(VAR_11->ntb, VAR_8->pidx, VAR_6,
       FUNC_7(VAR_10));


  FUNC_5(VAR_11->ntb, VAR_8->pidx, VAR_5, VAR_9);

  break;
 }

 return VAR_12 < VAR_2 ? 0 : -VAR_0;
}

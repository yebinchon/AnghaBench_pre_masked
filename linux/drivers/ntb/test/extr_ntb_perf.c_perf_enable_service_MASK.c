
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int u64 ;
struct perf_ctx {scalar_t__ cmd_send; TYPE_1__* ntb; int gidx; } ;
struct TYPE_14__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,struct perf_ctx*,int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(struct perf_ctx *VAR_5)
{
 u64 VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_7(VAR_5->ntb);
 (void)FUNC_6(VAR_5->ntb, VAR_6);

 VAR_8 = FUNC_14(VAR_5->ntb, VAR_5, &VAR_4);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->cmd_send == VAR_3) {
  u64 VAR_11, VAR_12;

  VAR_11 = FUNC_11(VAR_5->ntb);
  VAR_12 = FUNC_12(VAR_5->ntb);
  (void)FUNC_13(VAR_5->ntb, VAR_11 | VAR_12);

  VAR_7 = FUNC_0(FUNC_2(VAR_11));
  VAR_8 = FUNC_10(VAR_5->ntb, VAR_7);

  FUNC_3(&VAR_5->ntb->dev, "MSG sts unmasked %#llx\n", VAR_7);
 } else {
  VAR_10 = FUNC_15(VAR_5->ntb);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   FUNC_16(VAR_5->ntb, VAR_9, VAR_2);
  VAR_7 = FUNC_1(VAR_5->gidx);
  VAR_8 = FUNC_5(VAR_5->ntb, VAR_7);

  FUNC_3(&VAR_5->ntb->dev, "DB bits unmasked %#llx\n", VAR_7);
 }
 if (VAR_8) {
  FUNC_4(VAR_5->ntb);
  return VAR_8;
 }

 FUNC_8(VAR_5->ntb, VAR_0, VAR_1);

 FUNC_9(VAR_5->ntb);

 return 0;
}

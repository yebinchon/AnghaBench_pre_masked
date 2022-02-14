
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct perf_ctx {TYPE_1__* ntb; } ;
typedef enum perf_cmd { ____Placeholder_perf_cmd } perf_cmd ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct perf_ctx *VAR_4, int *VAR_5,
        enum perf_cmd *VAR_6, u64 *VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_4->ntb);

 if (FUNC_1(FUNC_5(VAR_4->ntb) & VAR_8) < 3)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_4->ntb, VAR_5, VAR_1);
 *VAR_6 = VAR_9;

 VAR_9 = FUNC_4(VAR_4->ntb, VAR_5, VAR_3);
 *VAR_7 = VAR_9;

 VAR_9 = FUNC_4(VAR_4->ntb, VAR_5, VAR_2);
 *VAR_7 |= (u64)VAR_9 << 32;


 FUNC_2(VAR_4->ntb, VAR_8);

 FUNC_0(&VAR_4->ntb->dev, "CMD recv: %d 0x%llx\n", *VAR_6, *VAR_7);

 return 0;
}

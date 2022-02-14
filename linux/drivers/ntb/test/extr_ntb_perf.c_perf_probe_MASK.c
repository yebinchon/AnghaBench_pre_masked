
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_ctx {int dummy; } ;
struct ntb_dev {int dummy; } ;
struct ntb_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct perf_ctx*) ;
 int FUNC_1 (struct perf_ctx*) ;
 struct perf_ctx* FUNC_2 (struct ntb_dev*) ;
 int FUNC_3 (struct perf_ctx*) ;
 int FUNC_4 (struct perf_ctx*) ;
 int FUNC_5 (struct perf_ctx*) ;
 int FUNC_6 (struct perf_ctx*) ;
 int FUNC_7 (struct perf_ctx*) ;

__attribute__((used)) static int FUNC_8(struct ntb_client *VAR_0, struct ntb_dev *VAR_1)
{
 struct perf_ctx *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_6(VAR_2);

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_7(VAR_2);

 return 0;
}

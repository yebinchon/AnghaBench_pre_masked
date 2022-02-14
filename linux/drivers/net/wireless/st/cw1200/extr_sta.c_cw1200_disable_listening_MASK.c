
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_reset {int reset_statistics; } ;
struct cw1200_common {int dummy; } ;


 int FUNC_0 (struct cw1200_common*,struct wsm_reset*) ;

int FUNC_1(struct cw1200_common *VAR_0)
{
 int VAR_1;
 struct wsm_reset VAR_2 = {
  .reset_statistics = 1,
 };
 VAR_1 = FUNC_0(VAR_0, &VAR_2);
 return VAR_1;
}

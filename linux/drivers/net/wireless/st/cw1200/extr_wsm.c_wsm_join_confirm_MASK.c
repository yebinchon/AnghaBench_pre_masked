
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_join_cnf {int status; void* max_power_level; void* min_power_level; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (struct wsm_buf*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cw1200_common *VAR_2,
       struct wsm_join_cnf *VAR_3,
       struct wsm_buf *VAR_4)
{
 VAR_3->status = FUNC_1(VAR_4);
 if (FUNC_0(VAR_3->status) != VAR_1)
  return -VAR_0;

 VAR_3->min_power_level = FUNC_1(VAR_4);
 VAR_3->max_power_level = FUNC_1(VAR_4);

 return 0;

underflow:
 FUNC_0(1);
 return -VAR_0;
}

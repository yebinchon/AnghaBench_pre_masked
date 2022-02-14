
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_queued_cmd {int * sd_dp; } ;
struct sdebug_queue {struct sdebug_queued_cmd* qc_arr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sdebug_queue* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3, VAR_4;
 struct sdebug_queue *VAR_5;
 struct sdebug_queued_cmd *VAR_6;

 for (VAR_3 = 0, VAR_5 = VAR_1; VAR_3 < VAR_2; ++VAR_3, ++VAR_5) {
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   VAR_6 = &VAR_5->qc_arr[VAR_4];
   FUNC_0(VAR_6->sd_dp);
   VAR_6->sd_dp = ((void*)0);
  }
 }
}

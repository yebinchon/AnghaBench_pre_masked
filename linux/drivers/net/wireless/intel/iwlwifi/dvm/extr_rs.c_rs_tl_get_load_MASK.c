
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct iwl_traffic_load {int time_stamp; int queue_count; } ;
struct iwl_lq_sta {struct iwl_traffic_load* load; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_traffic_load*,int) ;

__attribute__((used)) static void FUNC_3(struct iwl_lq_sta *VAR_5, u8 VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8;
 s32 VAR_9;
 struct iwl_traffic_load *VAR_10 = ((void*)0);

 if (VAR_6 >= VAR_0)
  return;

 VAR_10 = &(VAR_5->load[VAR_6]);

 VAR_7 -= VAR_7 % VAR_3;

 if (!(VAR_10->queue_count))
  return;

 VAR_8 = FUNC_0(VAR_10->time_stamp, VAR_7);
 VAR_9 = VAR_8 / VAR_1;



 if (VAR_9 >= VAR_2)
  FUNC_2(VAR_10, VAR_7);
}

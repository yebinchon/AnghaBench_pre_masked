
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct il_traffic_load {int total; int time_stamp; int queue_count; } ;
struct il_lq_sta {struct il_traffic_load* load; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct il_traffic_load*,int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32
FUNC_3(struct il_lq_sta *VAR_5, u8 VAR_6)
{
 u32 VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8;
 s32 VAR_9;
 struct il_traffic_load *VAR_10 = ((void*)0);

 if (VAR_6 >= VAR_0)
  return 0;

 VAR_10 = &(VAR_5->load[VAR_6]);

 VAR_7 -= VAR_7 % VAR_3;

 if (!(VAR_10->queue_count))
  return 0;

 VAR_8 = FUNC_0(VAR_10->time_stamp, VAR_7);
 VAR_9 = VAR_8 / VAR_1;



 if (VAR_9 >= VAR_2)
  FUNC_1(VAR_10, VAR_7);

 return VAR_10->total;
}

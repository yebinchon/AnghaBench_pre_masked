
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {void* tdsn; void* tmsn; void* string_param; void* timestamp; } ;
struct TYPE_4__ {int unreliable; int timestamp; } ;
struct tracer_event {int event_id; int type; TYPE_3__ string_event; TYPE_1__ timestamp_event; void* lost_event; } ;
struct TYPE_5__ {int first_string_trace; int num_string_trace; } ;
struct mlx5_fw_tracer {TYPE_2__ str_db; int trc_ver; } ;


 void* FUNC_0 (struct tracer_event*,int*,int) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tracer_event* VAR_11 ;
 struct tracer_event* VAR_12 ;

__attribute__((used)) static void FUNC_1(struct mlx5_fw_tracer *VAR_13,
         struct tracer_event *VAR_14, u64 *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14->event_id = FUNC_0(VAR_14, VAR_15, VAR_2);
 VAR_14->lost_event = FUNC_0(VAR_14, VAR_15, VAR_3);

 switch (VAR_14->event_id) {
 case 128:
  VAR_14->type = 128;
  VAR_19 = FUNC_0(VAR_12, VAR_15, VAR_19);
  if (VAR_13->trc_ver == 0)
   VAR_14->timestamp_event.unreliable = !!(VAR_19 >> 2);
  else
   VAR_14->timestamp_event.unreliable = !!(VAR_19 & 1);

  VAR_16 = FUNC_0(VAR_12,
      VAR_15, VAR_9);
  VAR_17 = FUNC_0(VAR_12,
      VAR_15, VAR_7);
  VAR_18 = FUNC_0(VAR_12,
       VAR_15, VAR_8);

  VAR_14->timestamp_event.timestamp =
    ((u64)VAR_18 << 40) |
    ((u64)VAR_17 << 8) |
    (u64)VAR_16;
  break;
 default:
  if (VAR_14->event_id >= VAR_13->str_db.first_string_trace ||
      VAR_14->event_id <= VAR_13->str_db.first_string_trace +
           VAR_13->str_db.num_string_trace) {
   VAR_14->type = VAR_0;
   VAR_14->string_event.timestamp =
    FUNC_0(VAR_11, VAR_15, VAR_6);
   VAR_14->string_event.string_param =
    FUNC_0(VAR_11, VAR_15, VAR_4);
   VAR_14->string_event.tmsn =
    FUNC_0(VAR_11, VAR_15, VAR_10);
   VAR_14->string_event.tdsn =
    FUNC_0(VAR_11, VAR_15, VAR_5);
  } else {
   VAR_14->type = VAR_1;
  }
  break;
 }
}

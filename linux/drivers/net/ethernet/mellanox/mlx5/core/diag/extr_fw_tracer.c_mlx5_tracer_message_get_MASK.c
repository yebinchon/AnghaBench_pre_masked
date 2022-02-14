
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracer_string_format {int dummy; } ;
struct TYPE_2__ {int tmsn; } ;
struct tracer_event {TYPE_1__ string_event; int event_id; } ;
struct mlx5_fw_tracer {struct hlist_head* hash; } ;
struct hlist_head {int dummy; } ;


 struct tracer_string_format* FUNC_0 (struct hlist_head*,int ,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static struct tracer_string_format *FUNC_2(struct mlx5_fw_tracer *VAR_0,
           struct tracer_event *VAR_1)
{
 struct hlist_head *VAR_2 =
  &VAR_0->hash[FUNC_1(VAR_1->string_event.tmsn)];

 return FUNC_0(VAR_2, VAR_1->event_id, VAR_1->string_event.tmsn);
}

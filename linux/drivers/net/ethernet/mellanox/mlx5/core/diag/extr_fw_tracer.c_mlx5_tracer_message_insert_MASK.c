
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracer_string_format {int hlist; } ;
struct TYPE_2__ {int tmsn; } ;
struct tracer_event {TYPE_1__ string_event; } ;
struct mlx5_fw_tracer {struct hlist_head* hash; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hlist_head*) ;
 struct tracer_string_format* FUNC_1 (int,int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static struct tracer_string_format *FUNC_3(struct mlx5_fw_tracer *VAR_1,
              struct tracer_event *VAR_2)
{
 struct hlist_head *VAR_3 =
  &VAR_1->hash[FUNC_2(VAR_2->string_event.tmsn)];
 struct tracer_string_format *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->hlist, VAR_3);

 return VAR_4;
}

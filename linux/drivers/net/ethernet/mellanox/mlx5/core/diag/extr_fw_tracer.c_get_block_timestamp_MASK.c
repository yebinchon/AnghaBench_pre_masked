
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ timestamp; } ;
struct tracer_event {TYPE_1__ timestamp_event; } ;
struct mlx5_fw_tracer {int dummy; } ;


 scalar_t__ FUNC_0 (struct tracer_event,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mlx5_fw_tracer*,struct tracer_event*,scalar_t__*) ;

__attribute__((used)) static u64 FUNC_2(struct mlx5_fw_tracer *VAR_1, u64 *VAR_2)
{
 struct tracer_event VAR_3;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_4);

 if (VAR_4 == VAR_0)
  FUNC_1(VAR_1, &VAR_3, VAR_2);
 else
  VAR_3.timestamp_event.timestamp = 0;

 return VAR_3.timestamp_event.timestamp;
}

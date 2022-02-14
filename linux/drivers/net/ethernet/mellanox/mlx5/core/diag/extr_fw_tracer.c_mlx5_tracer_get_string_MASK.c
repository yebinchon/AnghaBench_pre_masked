
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tracer_string_format {char* string; } ;
struct TYPE_3__ {scalar_t__ string_param; } ;
struct tracer_event {TYPE_1__ string_event; } ;
struct TYPE_4__ {int num_string_db; scalar_t__* base_address_out; scalar_t__* size_out; scalar_t__* buffer; } ;
struct mlx5_fw_tracer {TYPE_2__ str_db; } ;


 struct tracer_string_format* FUNC_0 (struct mlx5_fw_tracer*,struct tracer_event*) ;

__attribute__((used)) static struct tracer_string_format *FUNC_1(struct mlx5_fw_tracer *VAR_0,
          struct tracer_event *VAR_1)
{
 struct tracer_string_format *VAR_2;
 u32 VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->string_event.string_param;

 for (VAR_5 = 0; VAR_5 < VAR_0->str_db.num_string_db; VAR_5++) {
  if (VAR_3 > VAR_0->str_db.base_address_out[VAR_5] &&
      VAR_3 < VAR_0->str_db.base_address_out[VAR_5] +
      VAR_0->str_db.size_out[VAR_5]) {
   VAR_4 = VAR_3 - VAR_0->str_db.base_address_out[VAR_5];

   VAR_2 = FUNC_0(VAR_0, VAR_1);
   if (!VAR_2)
    return ((void*)0);
   VAR_2->string = (char *)(VAR_0->str_db.buffer[VAR_5] +
       VAR_4);
   return VAR_2;
  }
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {void** block_data; } ;
struct cpia2_command {int reg_count; void* start; TYPE_1__ buffer; } ;
struct camera_data {int dummy; } ;


 int FUNC_0 (struct camera_data*,struct cpia2_command*) ;

__attribute__((used)) static int FUNC_1(struct camera_data *VAR_0,
          struct cpia2_command *VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 VAR_1->buffer.block_data[0] = VAR_3;
 VAR_1->start = VAR_2;
 VAR_1->reg_count = 1;
 return FUNC_0(VAR_0, VAR_1);
}

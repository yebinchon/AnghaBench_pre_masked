
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int* block_data; } ;
struct cpia2_command {int req_mode; int reg_count; int start; TYPE_5__ buffer; int direction; } ;
struct TYPE_8__ {scalar_t__ lowlight_boost; } ;
struct TYPE_7__ {scalar_t__ sensor_flags; } ;
struct TYPE_6__ {scalar_t__ device_type; } ;
struct TYPE_9__ {TYPE_3__ vp_params; TYPE_2__ version; TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_4__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct camera_data*,int ,int ,int) ;
 int FUNC_1 (struct camera_data*,struct cpia2_command*) ;

__attribute__((used)) static void FUNC_2(struct camera_data *VAR_8)
{
 struct cpia2_command VAR_9;

 if (VAR_8->params.pnp_id.device_type != VAR_6 ||
     VAR_8->params.version.sensor_flags != VAR_5)
  return;

 VAR_9.direction = VAR_7;
 VAR_9.req_mode = VAR_0 | VAR_1;
 VAR_9.reg_count = 3;
 VAR_9.start = VAR_3;

 VAR_9.buffer.block_data[0] = 0;
 VAR_9.buffer.block_data[1] = 0x59;
 VAR_9.buffer.block_data[2] = 0;

 FUNC_1(VAR_8, &VAR_9);

 if (VAR_8->params.vp_params.lowlight_boost) {
  VAR_9.buffer.block_data[0] = 0x02;
 } else {
  VAR_9.buffer.block_data[0] = 0x06;
 }
 VAR_9.start = VAR_4;
 VAR_9.reg_count = 1;
 FUNC_1(VAR_8, &VAR_9);


 FUNC_0(VAR_8, VAR_2, VAR_7, 1);
}

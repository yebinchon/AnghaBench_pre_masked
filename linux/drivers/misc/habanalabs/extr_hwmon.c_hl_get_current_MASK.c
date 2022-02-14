
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct armcp_packet {void* type; void* sensor_index; int ctl; } ;
typedef int pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int*,int,int ,long*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct armcp_packet*,int ,int) ;
 int FUNC_4 (struct hl_device*,int*,int,int ,long*) ;

long FUNC_5(struct hl_device *VAR_3, int VAR_4, u32 VAR_5)
{
 struct armcp_packet VAR_6;
 long VAR_7;
 int VAR_8;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.ctl = FUNC_1(VAR_0 <<
    VAR_1);
 VAR_6.sensor_index = FUNC_0(VAR_4);
 VAR_6.type = FUNC_0(VAR_5);

 VAR_8 = VAR_3->asic_funcs->send_cpu_message(VAR_3, (u32 *) &VAR_6, sizeof(VAR_6),
     VAR_2, &VAR_7);

 if (VAR_8) {
  FUNC_2(VAR_3->dev,
   "Failed to get current from sensor %d, error %d\n",
   VAR_4, VAR_8);
  VAR_7 = 0;
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct armcp_packet {int value; void* led_index; void* ctl; } ;
typedef int pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 scalar_t__ FUNC_3 (struct hl_device*) ;
 int FUNC_4 (struct armcp_packet*,int ,int) ;
 int FUNC_5 (struct hl_device*,int *,int,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct hl_device *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct armcp_packet VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_3))
  return;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.ctl = FUNC_0(VAR_0 <<
    VAR_1);
 VAR_6.led_index = FUNC_0(VAR_4);
 VAR_6.value = FUNC_1(VAR_5);

 VAR_7 = VAR_3->asic_funcs->send_cpu_message(VAR_3, (u32 *) &VAR_6, sizeof(VAR_6),
      VAR_2, ((void*)0));

 if (VAR_7)
  FUNC_2(VAR_3->dev, "Failed to set LED %d, error %d\n", VAR_4, VAR_7);
}

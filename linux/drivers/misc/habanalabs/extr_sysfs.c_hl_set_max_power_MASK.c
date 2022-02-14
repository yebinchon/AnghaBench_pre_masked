
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct armcp_packet {int value; int ctl; } ;
typedef int pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct armcp_packet*,int ,int) ;
 int FUNC_4 (struct hl_device*,int *,int,int ,int *) ;

void FUNC_5(struct hl_device *VAR_3, u64 VAR_4)
{
 struct armcp_packet VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.ctl = FUNC_0(VAR_0 <<
    VAR_1);
 VAR_5.value = FUNC_1(VAR_4);

 VAR_6 = VAR_3->asic_funcs->send_cpu_message(VAR_3, (u32 *) &VAR_5, sizeof(VAR_5),
     VAR_2, ((void*)0));

 if (VAR_6)
  FUNC_2(VAR_3->dev, "Failed to set max power, error %d\n", VAR_6);
}

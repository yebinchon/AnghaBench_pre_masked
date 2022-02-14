
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct armcp_packet {int ctl; } ;
typedef int pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int*,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hl_device*,int*,int,int ,int *) ;

int FUNC_2(struct hl_device *VAR_2, u32 VAR_3)
{
 struct armcp_packet VAR_4 = {};

 VAR_4.ctl = FUNC_0(VAR_3 << VAR_0);

 return VAR_2->asic_funcs->send_cpu_message(VAR_2, (u32 *) &VAR_4,
    sizeof(VAR_4), VAR_1, ((void*)0));
}

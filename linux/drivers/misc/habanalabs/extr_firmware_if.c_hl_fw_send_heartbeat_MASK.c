
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct armcp_packet {int value; int ctl; } ;
typedef int hb_pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,long*) ;} ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct hl_device*,int *,int,int ,long*) ;

int FUNC_3(struct hl_device *VAR_5)
{
 struct armcp_packet VAR_6 = {};
 long VAR_7;
 int VAR_8;

 VAR_6.ctl = FUNC_0(VAR_1 <<
     VAR_2);
 VAR_6.value = FUNC_1(VAR_0);

 VAR_8 = VAR_5->asic_funcs->send_cpu_message(VAR_5, (u32 *) &VAR_6,
   sizeof(VAR_6), VAR_4, &VAR_7);

 if ((VAR_8) || (VAR_7 != VAR_0))
  VAR_8 = -VAR_3;

 return VAR_8;
}

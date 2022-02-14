
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct armcp_packet {void* pll_index; void* ctl; } ;
typedef int pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int*,int,int ,long*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct armcp_packet*,int ,int) ;
 int FUNC_3 (struct hl_device*,int*,int,int ,long*) ;

long FUNC_4(struct hl_device *VAR_4, u32 VAR_5, bool VAR_6)
{
 struct armcp_packet VAR_7;
 long VAR_8;
 int VAR_9;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 if (VAR_6)
  VAR_7.ctl = FUNC_0(VAR_0 <<
      VAR_2);
 else
  VAR_7.ctl = FUNC_0(VAR_1 <<
      VAR_2);
 VAR_7.pll_index = FUNC_0(VAR_5);

 VAR_9 = VAR_4->asic_funcs->send_cpu_message(VAR_4, (u32 *) &VAR_7, sizeof(VAR_7),
      VAR_3, &VAR_8);

 if (VAR_9) {
  FUNC_1(VAR_4->dev,
   "Failed to get frequency of PLL %d, error %d\n",
   VAR_5, VAR_9);
  VAR_8 = VAR_9;
 }

 return VAR_8;
}

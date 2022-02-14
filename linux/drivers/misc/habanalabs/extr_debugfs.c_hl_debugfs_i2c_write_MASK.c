
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct armcp_packet {int value; void* i2c_reg; void* i2c_addr; void* i2c_bus; int ctl; } ;
typedef int pkt ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct hl_device*) ;
 int FUNC_4 (struct armcp_packet*,int ,int) ;
 int FUNC_5 (struct hl_device*,int *,int,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_4, u8 VAR_5, u8 VAR_6,
    u8 VAR_7, u32 VAR_8)
{
 struct armcp_packet VAR_9;
 int VAR_10;

 if (FUNC_3(VAR_4))
  return -VAR_2;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.ctl = FUNC_0(VAR_0 <<
    VAR_1);
 VAR_9.i2c_bus = VAR_5;
 VAR_9.i2c_addr = VAR_6;
 VAR_9.i2c_reg = VAR_7;
 VAR_9.value = FUNC_1(VAR_8);

 VAR_10 = VAR_4->asic_funcs->send_cpu_message(VAR_4, (u32 *) &VAR_9, sizeof(VAR_9),
     VAR_3, ((void*)0));

 if (VAR_10)
  FUNC_2(VAR_4->dev, "Failed to write to I2C, error %d\n", VAR_10);

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int count; scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_1__ send_table; } ;
struct TYPE_5__ {TYPE_3__ v5_msg; } ;
struct nvsp_message {TYPE_2__ msg; } ;
struct net_device_context {int* tx_table; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
         const struct nvsp_message *VAR_2)
{
 struct net_device_context *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->msg.v5_msg.send_table.count;
 if (VAR_4 != VAR_0) {
  FUNC_0(VAR_1, "Received wrong send-table size:%u\n", VAR_4);
  return;
 }

 VAR_5 = (u32 *)((unsigned long)&VAR_2->msg.v5_msg.send_table +
        VAR_2->msg.v5_msg.send_table.offset);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_3->tx_table[VAR_6] = VAR_5[VAR_6];
}

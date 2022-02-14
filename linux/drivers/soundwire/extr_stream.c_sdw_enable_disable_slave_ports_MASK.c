
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdw_transport_params {int port_num; } ;
struct sdw_slave_runtime {TYPE_2__* slave; } ;
struct sdw_port_runtime {int ch_mask; int num; struct sdw_transport_params transport_params; } ;
struct TYPE_3__ {scalar_t__ next_bank; } ;
struct sdw_bus {TYPE_1__ params; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sdw_bus *VAR_0,
       struct sdw_slave_runtime *VAR_1,
       struct sdw_port_runtime *VAR_2,
       bool VAR_3)
{
 struct sdw_transport_params *VAR_4 = &VAR_2->transport_params;
 u32 VAR_5;
 int VAR_6;

 if (VAR_0->params.next_bank)
  VAR_5 = FUNC_1(VAR_2->num);
 else
  VAR_5 = FUNC_0(VAR_2->num);





 if (VAR_3)
  VAR_6 = FUNC_3(VAR_1->slave, VAR_5, 0xFF, VAR_2->ch_mask);
 else
  VAR_6 = FUNC_3(VAR_1->slave, VAR_5, 0xFF, 0x0);

 if (VAR_6 < 0)
  FUNC_2(&VAR_1->slave->dev,
   "Slave chn_en reg write failed:%d port:%d\n",
   VAR_6, VAR_4->port_num);

 return VAR_6;
}

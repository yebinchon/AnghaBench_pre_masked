
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sdw_transport_params {int sample_interval; int offset1; int blk_grp_ctrl; int lane_ctrl; int port_num; scalar_t__ blk_grp_ctrl_valid; } ;
struct sdw_slave_runtime {TYPE_2__* slave; int direction; } ;
struct sdw_slave_prop {scalar_t__ lane_control_support; } ;
struct sdw_port_params {int data_mode; int flow_mode; int bps; } ;
struct sdw_port_runtime {struct sdw_port_params port_params; struct sdw_transport_params transport_params; } ;
struct sdw_dpn_prop {scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ next_bank; } ;
struct sdw_bus {TYPE_1__ params; } ;
struct TYPE_7__ {int dev; struct sdw_slave_prop prop; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sdw_bus*,TYPE_2__*,struct sdw_transport_params*,scalar_t__) ;
 int FUNC_12 (int *,char*,int ) ;
 struct sdw_dpn_prop* FUNC_13 (TYPE_2__*,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int ,int,int) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct sdw_bus *VAR_4,
      struct sdw_slave_runtime *VAR_5,
      struct sdw_port_runtime *VAR_6)
{
 struct sdw_transport_params *VAR_7 = &VAR_6->transport_params;
 struct sdw_port_params *VAR_8 = &VAR_6->port_params;
 struct sdw_slave_prop *VAR_9 = &VAR_5->slave->prop;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct sdw_dpn_prop *VAR_16;
 int VAR_17;
 u8 VAR_18;

 VAR_16 = FUNC_13(VAR_5->slave,
       VAR_5->direction,
       VAR_7->port_num);
 if (!VAR_16)
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_7->port_num);
 VAR_11 = FUNC_0(VAR_7->port_num);

 if (VAR_4->params.next_bank) {
  VAR_12 = FUNC_9(VAR_7->port_num);
  VAR_13 = FUNC_6(VAR_7->port_num);
  VAR_14 = FUNC_2(VAR_7->port_num);
  VAR_15 = FUNC_4(VAR_7->port_num);

 } else {
  VAR_12 = FUNC_8(VAR_7->port_num);
  VAR_13 = FUNC_5(VAR_7->port_num);
  VAR_14 = FUNC_1(VAR_7->port_num);
  VAR_15 = FUNC_3(VAR_7->port_num);
 }


 VAR_18 = VAR_8->data_mode << FUNC_10(VAR_1);
 VAR_18 |= VAR_8->flow_mode;

 VAR_17 = FUNC_14(VAR_5->slave, VAR_10, 0xF, VAR_18);
 if (VAR_17 < 0) {
  FUNC_12(&VAR_5->slave->dev,
   "DPN_PortCtrl register write failed for port %d\n",
   VAR_7->port_num);
  return VAR_17;
 }


 VAR_17 = FUNC_15(VAR_5->slave, VAR_11, (VAR_8->bps - 1));
 if (VAR_17 < 0) {
  FUNC_12(&VAR_5->slave->dev,
   "DPN_BlockCtrl1 register write failed for port %d\n",
   VAR_7->port_num);
  return VAR_17;
 }


 VAR_18 = (VAR_7->sample_interval - 1) & VAR_2;
 VAR_17 = FUNC_15(VAR_5->slave, VAR_12, VAR_18);
 if (VAR_17 < 0) {
  FUNC_12(&VAR_5->slave->dev,
   "DPN_SampleCtrl1 register write failed for port %d\n",
   VAR_7->port_num);
  return VAR_17;
 }


 VAR_17 = FUNC_15(VAR_5->slave, VAR_13, VAR_7->offset1);
 if (VAR_17 < 0) {
  FUNC_12(&VAR_5->slave->dev,
   "DPN_OffsetCtrl1 register write failed for port %d\n",
   VAR_7->port_num);
  return VAR_17;
 }


 if (VAR_7->blk_grp_ctrl_valid) {
  VAR_17 = FUNC_15(VAR_5->slave, VAR_14, VAR_7->blk_grp_ctrl);
  if (VAR_17 < 0) {
   FUNC_12(&VAR_5->slave->dev,
    "DPN_BlockCtrl2 reg write failed for port %d\n",
    VAR_7->port_num);
   return VAR_17;
  }
 }


 if (VAR_9->lane_control_support) {
  VAR_17 = FUNC_15(VAR_5->slave, VAR_15, VAR_7->lane_ctrl);
  if (VAR_17 < 0) {
   FUNC_12(&VAR_5->slave->dev,
    "DPN_LaneCtrl register write failed for port %d\n",
    VAR_7->port_num);
   return VAR_17;
  }
 }

 if (VAR_16->type != VAR_3) {
  VAR_17 = FUNC_11(VAR_4, VAR_5->slave,
           VAR_7, VAR_16->type);
  if (VAR_17 < 0)
   FUNC_12(&VAR_5->slave->dev,
    "Transport reg write failed for port: %d\n",
    VAR_7->port_num);
 }

 return VAR_17;
}

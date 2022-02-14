
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int gpsc_supported; } ;
struct qla_hw_data {TYPE_1__ flags; int link_data_rate; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_10__ {int port_name; int fp_speed; int loop_id; int state; } ;
typedef TYPE_3__ fc_port_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*,int,char*,int ,int,int ,...) ;
 int VAR_4 ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_5, fc_port_t *VAR_6)
{
 int VAR_7;
 uint16_t VAR_8[VAR_1];
 struct qla_hw_data *VAR_9 = VAR_5->hw;

 if (!FUNC_0(VAR_9))
  return;

 if (FUNC_1(&VAR_6->state) != VAR_0)
  return;

 if (VAR_6->fp_speed == VAR_2 ||
     VAR_6->fp_speed > VAR_9->link_data_rate ||
     !VAR_9->flags.gpsc_supported)
  return;

 VAR_7 = FUNC_4(VAR_5, VAR_6->loop_id, VAR_6->fp_speed,
     VAR_8);
 if (VAR_7 != VAR_3) {
  FUNC_2(VAR_4, VAR_5, 0x2004,
      "Unable to adjust iIDMA %8phN -- %04x %x %04x %04x.\n",
      VAR_6->port_name, VAR_7, VAR_6->fp_speed, VAR_8[0], VAR_8[1]);
 } else {
  FUNC_2(VAR_4, VAR_5, 0x2005,
      "iIDMA adjusted to %s GB/s (%X) on %8phN.\n",
      FUNC_3(VAR_9, VAR_6->fp_speed),
      VAR_6->fp_speed, VAR_6->port_name);
 }
}

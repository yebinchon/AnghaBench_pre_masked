
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct nvram {TYPE_3__* bus; } ;
struct scsi_qla_host {TYPE_2__* bus_settings; struct nvram nvram; } ;
struct TYPE_4__ {int initiator_id; int scsi_reset_disable; } ;
struct TYPE_6__ {scalar_t__ max_queue_depth; int bus_reset_delay; TYPE_1__ config_1; } ;
struct TYPE_5__ {int id; scalar_t__ hiwat; int bus_reset_delay; int disable_scsi_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_qla_host*,int,int) ;
 int FUNC_1 (struct scsi_qla_host*,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_6, int VAR_7)
{
 struct nvram *VAR_8 = &VAR_6->nvram;
 uint16_t VAR_9[VAR_3];
 int VAR_10, VAR_11;


 VAR_6->bus_settings[VAR_7].disable_scsi_reset =
  VAR_8->bus[VAR_7].config_1.scsi_reset_disable;


 VAR_6->bus_settings[VAR_7].id = VAR_8->bus[VAR_7].config_1.initiator_id;
 VAR_9[0] = VAR_5;
 VAR_9[1] = VAR_7 ? VAR_6->bus_settings[VAR_7].id | VAR_2 :
  VAR_6->bus_settings[VAR_7].id;
 VAR_11 = FUNC_1(VAR_6, VAR_1 | VAR_0, &VAR_9[0]);


 VAR_6->bus_settings[VAR_7].bus_reset_delay =
  VAR_8->bus[VAR_7].bus_reset_delay;


 VAR_6->bus_settings[VAR_7].hiwat = VAR_8->bus[VAR_7].max_queue_depth - 1;


 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  VAR_11 |= FUNC_0(VAR_6, VAR_7, VAR_10);

 return VAR_11;
}

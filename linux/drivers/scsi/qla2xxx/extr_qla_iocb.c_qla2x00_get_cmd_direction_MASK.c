
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int input_requests; int input_bytes; int output_requests; int output_bytes; } ;
struct scsi_qla_host {TYPE_1__ qla_stats; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct TYPE_6__ {struct scsi_qla_host* vha; } ;
typedef TYPE_2__ srb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct scsi_cmnd* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static inline uint16_t
FUNC_2(srb_t *VAR_4)
{
 uint16_t VAR_5;
 struct scsi_cmnd *VAR_6 = FUNC_0(VAR_4);
 struct scsi_qla_host *VAR_7 = VAR_4->vha;

 VAR_5 = 0;


 if (VAR_6->sc_data_direction == VAR_3) {
  VAR_5 = VAR_1;
  VAR_7->qla_stats.output_bytes += FUNC_1(VAR_6);
  VAR_7->qla_stats.output_requests++;
 } else if (VAR_6->sc_data_direction == VAR_2) {
  VAR_5 = VAR_0;
  VAR_7->qla_stats.input_bytes += FUNC_1(VAR_6);
  VAR_7->qla_stats.input_requests++;
 }
 return (VAR_5);
}

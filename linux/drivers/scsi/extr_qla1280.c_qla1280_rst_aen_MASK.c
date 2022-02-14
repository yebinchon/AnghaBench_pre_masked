
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int reset_active; scalar_t__ reset_marker; int abort_isp_active; scalar_t__ online; } ;
struct scsi_qla_host {size_t ports; TYPE_2__* bus_settings; TYPE_1__ flags; } ;
struct TYPE_4__ {scalar_t__ reset_marker; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct scsi_qla_host*,size_t,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct scsi_qla_host *VAR_1)
{
 uint8_t VAR_2;

 FUNC_0("qla1280_rst_aen");

 if (VAR_1->flags.online && !VAR_1->flags.reset_active &&
     !VAR_1->flags.abort_isp_active) {
  VAR_1->flags.reset_active = 1;
  while (VAR_1->flags.reset_marker) {

   VAR_1->flags.reset_marker = 0;
   for (VAR_2 = 0; VAR_2 < VAR_1->ports &&
         !VAR_1->flags.reset_marker; VAR_2++) {
    if (VAR_1->bus_settings[VAR_2].reset_marker) {
     VAR_1->bus_settings[VAR_2].reset_marker = 0;
     FUNC_2(VAR_1, VAR_2, 0, 0,
             VAR_0);
    }
   }
  }
 }

 FUNC_1("qla1280_rst_aen");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ips_scb_t ;
struct TYPE_14__ {scalar_t__ type; scalar_t__ direction; } ;
struct TYPE_15__ {TYPE_1__ flashfw; } ;
struct TYPE_16__ {TYPE_2__ cmd; } ;
struct TYPE_18__ {int BasicStatus; int ExtendedStatus; TYPE_3__ CoppCP; } ;
typedef TYPE_5__ ips_passthru_t ;
struct TYPE_17__ {scalar_t__ (* erasebios ) (TYPE_6__*) ;scalar_t__ (* verifybios ) (TYPE_6__*,scalar_t__,scalar_t__,int ) ;scalar_t__ (* programbios ) (TYPE_6__*,scalar_t__,scalar_t__,int ) ;} ;
struct TYPE_19__ {int host_num; TYPE_4__ func; scalar_t__ flash_datasize; scalar_t__ flash_data; } ;
typedef TYPE_6__ ips_ha_t ;


 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_7, ips_passthru_t * VAR_8, ips_scb_t * VAR_9)
{

 if (VAR_8->CoppCP.cmd.flashfw.type == VAR_1 &&
     VAR_8->CoppCP.cmd.flashfw.direction == VAR_5) {
  if ((!VAR_7->func.programbios) || (!VAR_7->func.erasebios) ||
      (!VAR_7->func.verifybios))
   goto error;
  if ((*VAR_7->func.erasebios) (VAR_7)) {
   FUNC_0(1,
      "(%s%d) flash bios failed - unable to erase flash",
      VAR_6, VAR_7->host_num);
   goto error;
  } else
      if ((*VAR_7->func.programbios) (VAR_7,
       VAR_7->flash_data +
       VAR_0,
       VAR_7->flash_datasize -
       VAR_0, 0)) {
   FUNC_0(1,
      "(%s%d) flash bios failed - unable to flash",
      VAR_6, VAR_7->host_num);
   goto error;
  } else
      if ((*VAR_7->func.verifybios) (VAR_7,
      VAR_7->flash_data +
      VAR_0,
      VAR_7->flash_datasize -
      VAR_0, 0)) {
   FUNC_0(1,
      "(%s%d) flash bios failed - unable to verify flash",
      VAR_6, VAR_7->host_num);
   goto error;
  }
  FUNC_1(VAR_7);
  return VAR_4;
 } else if (VAR_8->CoppCP.cmd.flashfw.type == VAR_1 &&
     VAR_8->CoppCP.cmd.flashfw.direction == VAR_2) {
  if (!VAR_7->func.erasebios)
   goto error;
  if ((*VAR_7->func.erasebios) (VAR_7)) {
   FUNC_0(1,
      "(%s%d) flash bios failed - unable to erase flash",
      VAR_6, VAR_7->host_num);
   goto error;
  }
  return VAR_4;
 }
      error:
 VAR_8->BasicStatus = 0x0B;
 VAR_8->ExtendedStatus = 0x00;
 FUNC_1(VAR_7);
 return VAR_3;
}

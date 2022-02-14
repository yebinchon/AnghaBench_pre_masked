
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef unsigned long uint16_t ;
struct TYPE_6__ {int init_done; } ;
struct TYPE_7__ {TYPE_1__ flags; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int
FUNC_4(scsi_qla_host_t *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10[5];

 VAR_7 = VAR_3;

 VAR_9 = 10;


 VAR_8 = VAR_4 + (VAR_9 * VAR_1);


 if (!VAR_6->flags.init_done)
  FUNC_1(VAR_5, VAR_6, 0x013a,
      "Waiting for init to complete...\n");

 do {
  VAR_7 = FUNC_2(VAR_6, VAR_10);

  if (VAR_7 == VAR_3) {
   if (VAR_10[0] == VAR_0) {
    FUNC_1(VAR_5, VAR_6, 0x013b,
        "fw_state=%x\n", VAR_10[0]);
    VAR_7 = VAR_3;
     break;
   }
  }
  VAR_7 = VAR_2;

  if (FUNC_3(VAR_4, VAR_8))
   break;


  FUNC_0(500);

  FUNC_1(VAR_5, VAR_6, 0x013c,
      "fw_state=%x curr time=%lx.\n", VAR_10[0], VAR_4);
 } while (1);


 if (VAR_7)
  FUNC_1(VAR_5, VAR_6, 0x013d,
      "Firmware ready **** FAILED ****.\n");
 else
  FUNC_1(VAR_5, VAR_6, 0x013e,
      "Firmware ready **** SUCCESS ****.\n");

 return VAR_7;
}

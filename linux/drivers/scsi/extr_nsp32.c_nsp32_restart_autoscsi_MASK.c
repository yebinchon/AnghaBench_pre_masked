
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_10__ {unsigned int BaseAddress; int trans_method; TYPE_4__* cur_lunt; TYPE_3__* cur_target; } ;
typedef TYPE_5__ nsp32_hw_data ;
struct TYPE_9__ {int sglun_paddr; } ;
struct TYPE_8__ {int sample_reg; int ackwidth; int syncreg; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned short VAR_18 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 int FUNC_3 (unsigned int,int ,unsigned short) ;
 int FUNC_4 (unsigned int,int ,int ) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct scsi_cmnd *VAR_19, unsigned short VAR_20)
{
 nsp32_hw_data *VAR_21 = (nsp32_hw_data *)VAR_19->device->host->hostdata;
 unsigned int VAR_22 = VAR_21->BaseAddress;
 unsigned short VAR_23 = 0;

 FUNC_0(VAR_10, "enter");

 if (VAR_21->cur_target == ((void*)0) || VAR_21->cur_lunt == ((void*)0)) {
  FUNC_1(VAR_9, "Target or Lun is invalid");
 }





 FUNC_2(VAR_22, VAR_16, VAR_21->cur_target->syncreg);




 FUNC_2(VAR_22, VAR_0, VAR_21->cur_target->ackwidth);




 FUNC_2(VAR_22, VAR_15, VAR_21->cur_target->sample_reg);




 FUNC_4(VAR_22, VAR_14, VAR_21->cur_lunt->sglun_paddr);




 VAR_23 = 0;
 VAR_23 |= (VAR_18 | VAR_1);
 if (VAR_21->trans_method & VAR_11) {
  if (FUNC_5(VAR_19) > 0) {
   VAR_23 |= VAR_4;
  }
 } else if (VAR_21->trans_method & VAR_12) {
  VAR_23 |= VAR_6;
 } else if (VAR_21->trans_method & VAR_13) {
  VAR_23 |= VAR_5;
 }
 FUNC_3(VAR_22, VAR_17, VAR_23);






 VAR_20 |= (VAR_7 |
      VAR_3 |
      VAR_2 );
 FUNC_3(VAR_22, VAR_8, VAR_20);

 FUNC_0(VAR_10, "exit");
}

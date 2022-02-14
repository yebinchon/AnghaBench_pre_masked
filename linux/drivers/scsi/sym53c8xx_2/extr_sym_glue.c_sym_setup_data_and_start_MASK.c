
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sym_hcb {int dummy; } ;
struct TYPE_3__ {void* savep; void* lastp; } ;
struct TYPE_4__ {TYPE_1__ head; } ;
struct sym_ccb {scalar_t__ segments; int* cdb_buf; void* goalp; TYPE_2__ phys; void* startp; int host_flags; scalar_t__ data_len; } ;
struct scsi_cmnd {int sc_data_direction; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_5 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_6 (struct sym_hcb*,struct sym_ccb*) ;
 scalar_t__ FUNC_7 (struct sym_hcb*,struct sym_ccb*,struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*,int ) ;
 scalar_t__ FUNC_9 (struct sym_hcb*,struct scsi_cmnd*,struct sym_ccb*) ;
 int FUNC_10 (struct sym_hcb*,struct scsi_cmnd*) ;

int FUNC_11(struct sym_hcb *VAR_6, struct scsi_cmnd *VAR_7, struct sym_ccb *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;




 if (FUNC_9(VAR_6, VAR_7, VAR_8))
  goto out_abort;




 VAR_11 = VAR_7->sc_data_direction;
 if (VAR_11 != 129) {
  VAR_8->segments = FUNC_7(VAR_6, VAR_8, VAR_7);
  if (VAR_8->segments < 0) {
   FUNC_8(VAR_7, VAR_0);
   goto out_abort;
  }




  if (!VAR_8->segments)
   VAR_11 = 129;
 } else {
  VAR_8->data_len = 0;
  VAR_8->segments = 0;
 }




 switch (VAR_11) {
 case 131:
  FUNC_4(VAR_2, VAR_7, "got DMA_BIDIRECTIONAL command");
  FUNC_8(VAR_7, VAR_0);
  goto out_abort;
 case 128:
  VAR_10 = FUNC_0(VAR_6, VAR_4) + 8;
  VAR_9 = VAR_10 - 8 - (VAR_8->segments * (2*4));
  break;
 case 130:
  VAR_8->host_flags |= VAR_1;
  VAR_10 = FUNC_0(VAR_6, VAR_3) + 8;
  VAR_9 = VAR_10 - 8 - (VAR_8->segments * (2*4));
  break;
 case 129:
 default:
  VAR_9 = VAR_10 = FUNC_1(VAR_6, VAR_5);
  break;
 }




 VAR_8->phys.head.lastp = FUNC_2(VAR_9);
 VAR_8->phys.head.savep = FUNC_2(VAR_9);
 VAR_8->startp = VAR_8->phys.head.savep;
 VAR_8->goalp = FUNC_2(VAR_10);
 FUNC_6(VAR_6, VAR_8);
 return 0;

out_abort:
 FUNC_5(VAR_6, VAR_8);
 FUNC_10(VAR_6, VAR_7);
 return 0;
}

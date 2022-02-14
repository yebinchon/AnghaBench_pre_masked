
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_nvram {scalar_t__ type; } ;
struct sym_hcb {int scsi_mode; int features; int sv_stest4; int sv_stest2; int rv_stest2; scalar_t__ sv_scntl3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct sym_hcb *VAR_9, struct sym_nvram *VAR_10)
{
 if (VAR_9->scsi_mode)
  return;

 VAR_9->scsi_mode = VAR_5;
 if (VAR_9->features & (VAR_1|VAR_2))
  VAR_9->scsi_mode = (VAR_9->sv_stest4 & VAR_3);
 else if (VAR_9->features & VAR_0) {
  if (VAR_6 == 1) {
   if (VAR_9->sv_scntl3) {
    if (VAR_9->sv_stest2 & 0x20)
     VAR_9->scsi_mode = VAR_4;
   } else if (VAR_10->type == VAR_7) {
    if (!(FUNC_0(VAR_9, VAR_8) & 0x08))
     VAR_9->scsi_mode = VAR_4;
   }
  } else if (VAR_6 == 2)
   VAR_9->scsi_mode = VAR_4;
 }
 if (VAR_9->scsi_mode == VAR_4)
  VAR_9->rv_stest2 |= 0x20;
}

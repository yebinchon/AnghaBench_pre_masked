
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioasa_gata {int hob_lbah; int hob_lbam; int hob_lbal; int hob_nsect; int status; int device; int lbah; int lbam; int lbal; int nsect; int error; } ;
struct ipr_sata_port {struct ipr_ioasa_gata ioasa; } ;
struct ata_taskfile {int hob_lbah; int hob_lbam; int hob_lbal; int hob_nsect; int command; int device; int lbah; int lbam; int lbal; int nsect; int feature; } ;
struct ata_queued_cmd {struct ata_taskfile result_tf; TYPE_1__* ap; } ;
struct TYPE_2__ {struct ipr_sata_port* private_data; } ;



__attribute__((used)) static bool FUNC_0(struct ata_queued_cmd *VAR_0)
{
 struct ipr_sata_port *VAR_1 = VAR_0->ap->private_data;
 struct ipr_ioasa_gata *VAR_2 = &VAR_1->ioasa;
 struct ata_taskfile *VAR_3 = &VAR_0->result_tf;

 VAR_3->feature = VAR_2->error;
 VAR_3->nsect = VAR_2->nsect;
 VAR_3->lbal = VAR_2->lbal;
 VAR_3->lbam = VAR_2->lbam;
 VAR_3->lbah = VAR_2->lbah;
 VAR_3->device = VAR_2->device;
 VAR_3->command = VAR_2->status;
 VAR_3->hob_nsect = VAR_2->hob_nsect;
 VAR_3->hob_lbal = VAR_2->hob_lbal;
 VAR_3->hob_lbam = VAR_2->hob_lbam;
 VAR_3->hob_lbah = VAR_2->hob_lbah;

 return 1;
}

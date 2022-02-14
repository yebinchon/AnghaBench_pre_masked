
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_flag; int fc_rscn_flush; int fc_rscn_id_cnt; TYPE_1__** fc_rscn_id_list; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {int resv; int domain; int area; int id; } ;
struct TYPE_7__ {int word; TYPE_2__ b; } ;
struct TYPE_8__ {TYPE_3__ un; } ;
struct TYPE_5__ {int* virt; } ;
typedef TYPE_4__ D_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

 void* FUNC_0 (int) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct lpfc_vport *VAR_4, uint32_t VAR_5)
{
 D_ID VAR_6;
 D_ID VAR_7;
 uint32_t *VAR_8;
 uint32_t VAR_9, VAR_10;
 struct Scsi_Host *VAR_11 = FUNC_1(VAR_4);

 VAR_6.un.word = VAR_5;


 if ((VAR_5 & VAR_2) == VAR_2)
  return 0;


 if (VAR_4->fc_flag & VAR_1)
  return VAR_5;

 FUNC_2(VAR_11->host_lock);
 if (VAR_4->fc_rscn_flush) {

  FUNC_3(VAR_11->host_lock);
  return 0;
 }

 VAR_4->fc_rscn_flush = 1;
 FUNC_3(VAR_11->host_lock);
 for (VAR_10 = 0; VAR_10 < VAR_4->fc_rscn_id_cnt; VAR_10++) {
  VAR_8 = VAR_4->fc_rscn_id_list[VAR_10]->virt;
  VAR_9 = FUNC_0(*VAR_8++ & ~VAR_0);
  VAR_9 -= sizeof(uint32_t);
  while (VAR_9) {
   VAR_7.un.word = FUNC_0(*VAR_8++);
   VAR_9 -= sizeof(uint32_t);
   switch (VAR_7.un.b.resv & VAR_3) {
   case 128:
    if ((VAR_6.un.b.domain == VAR_7.un.b.domain)
        && (VAR_6.un.b.area == VAR_7.un.b.area)
        && (VAR_6.un.b.id == VAR_7.un.b.id))
     goto return_did_out;
    break;
   case 131:
    if ((VAR_6.un.b.domain == VAR_7.un.b.domain)
        && (VAR_6.un.b.area == VAR_7.un.b.area))
     goto return_did_out;
    break;
   case 130:
    if (VAR_6.un.b.domain == VAR_7.un.b.domain)
     goto return_did_out;
    break;
   case 129:
    goto return_did_out;
   }
  }
 }

 VAR_4->fc_rscn_flush = 0;
 return 0;
return_did_out:

 VAR_4->fc_rscn_flush = 0;
 return VAR_5;
}

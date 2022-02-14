
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hif_scatter_req {scalar_t__ len; int status; scalar_t__ virt_scat; int (* complete ) (int ,struct hif_scatter_req*) ;int addr; int scat_entries; int req; } ;
struct ath6kl_device {TYPE_2__* ar; } ;
struct TYPE_3__ {int htc_addr; int htc_ext_addr; } ;
struct TYPE_4__ {int htc_target; TYPE_1__ mbox_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,int ,char*,char*) ;
 void* FUNC_1 (struct hif_scatter_req*,int) ;
 int FUNC_2 (TYPE_2__*,struct hif_scatter_req*) ;
 int FUNC_3 (int ,struct hif_scatter_req*) ;

int FUNC_4(struct ath6kl_device *VAR_4,
         struct hif_scatter_req *VAR_5, bool VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6) {
  VAR_5->req = VAR_2;
  VAR_5->addr = VAR_4->ar->mbox_info.htc_addr;
 } else {
  VAR_5->req = VAR_3;

  VAR_5->addr =
   (VAR_5->len > VAR_1) ?
   VAR_4->ar->mbox_info.htc_ext_addr :
   VAR_4->ar->mbox_info.htc_addr;
 }

 FUNC_0(VAR_0,
     "hif submit scatter request entries %d len %d mbox 0x%x %s %s\n",
     VAR_5->scat_entries, VAR_5->len,
     VAR_5->addr, !VAR_6 ? "async" : "sync",
     (VAR_6) ? "rd" : "wr");

 if (!VAR_6 && VAR_5->virt_scat) {
  VAR_7 = FUNC_1(VAR_5, 0);
  if (VAR_7) {
   VAR_5->status = VAR_7;
   VAR_5->complete(VAR_4->ar->htc_target, VAR_5);
   return 0;
  }
 }

 VAR_7 = FUNC_2(VAR_4->ar, VAR_5);

 if (VAR_6) {

  VAR_5->status = VAR_7;
  if (!VAR_7 && VAR_5->virt_scat)
   VAR_5->status =
    FUNC_1(VAR_5, 1);
 }

 return VAR_7;
}

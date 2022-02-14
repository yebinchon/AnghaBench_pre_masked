
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ufshcd_lrb {TYPE_6__* ucd_req_ptr; TYPE_4__* cmd; } ;
struct ufs_hba {int dev; struct ufshcd_lrb* lrb; } ;
typedef int sector_t ;
struct TYPE_11__ {int exp_data_transfer_len; } ;
struct TYPE_12__ {TYPE_5__ sc; } ;
struct TYPE_10__ {TYPE_3__* request; scalar_t__* cmnd; } ;
struct TYPE_9__ {TYPE_2__* bio; } ;
struct TYPE_7__ {int bi_sector; } ;
struct TYPE_8__ {TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,unsigned int,int ,int,int ,int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ufs_hba*,unsigned int,char const*) ;
 int FUNC_5 (struct ufs_hba*,int ) ;

__attribute__((used)) static void FUNC_6(struct ufs_hba *VAR_4,
  unsigned int VAR_5, const char *VAR_6)
{
 sector_t VAR_7 = -1;
 u8 VAR_8 = 0;
 u32 VAR_9, VAR_10;
 struct ufshcd_lrb *VAR_11 = &VAR_4->lrb[VAR_5];
 int VAR_12 = -1;

 if (!FUNC_3()) {

  if (VAR_11->cmd)
   FUNC_4(VAR_4, VAR_5, VAR_6);
  return;
 }

 if (VAR_11->cmd) {

  FUNC_4(VAR_4, VAR_5, VAR_6);
  VAR_8 = (u8)(*VAR_11->cmd->cmnd);
  if ((VAR_8 == VAR_0) || (VAR_8 == VAR_3)) {




   if (VAR_11->cmd->request && VAR_11->cmd->request->bio)
    VAR_7 =
      VAR_11->cmd->request->bio->bi_iter.bi_sector;
   VAR_12 = FUNC_0(
    VAR_11->ucd_req_ptr->sc.exp_data_transfer_len);
  }
 }

 VAR_9 = FUNC_5(VAR_4, VAR_1);
 VAR_10 = FUNC_5(VAR_4, VAR_2);
 FUNC_2(FUNC_1(VAR_4->dev), VAR_6, VAR_5,
    VAR_10, VAR_12, VAR_9, VAR_7, VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hif_scatter_req {int req; TYPE_1__* busrequest; int scat_entries; int len; } ;
struct ath6kl_sdio {int wr_async_work; int wr_async_lock; int wr_asyncq; } ;
struct ath6kl {int ath6kl_wq; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 struct ath6kl_sdio* FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (struct ath6kl_sdio*,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath6kl *VAR_3,
     struct hif_scatter_req *VAR_4)
{
 struct ath6kl_sdio *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = VAR_4->req;
 int VAR_7 = 0;

 if (!VAR_4->len)
  return -VAR_1;

 FUNC_0(VAR_0,
     "hif-scatter: total len: %d scatter entries: %d\n",
     VAR_4->len, VAR_4->scat_entries);

 if (VAR_6 & VAR_2) {
  VAR_7 = FUNC_2(VAR_5, VAR_4->busrequest);
 } else {
  FUNC_5(&VAR_5->wr_async_lock);
  FUNC_3(&VAR_4->busrequest->list, &VAR_5->wr_asyncq);
  FUNC_6(&VAR_5->wr_async_lock);
  FUNC_4(VAR_3->ath6kl_wq, &VAR_5->wr_async_work);
 }

 return VAR_7;
}

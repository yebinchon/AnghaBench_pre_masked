
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct htc_packet {int dummy; } ;
struct bus_request {int list; struct htc_packet* packet; void* request; void* length; int * buffer; void* address; } ;
struct ath6kl_sdio {int wr_async_work; int wr_async_lock; int wr_asyncq; } ;
struct ath6kl {int ath6kl_wq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct bus_request* FUNC_1 (struct ath6kl_sdio*) ;
 struct ath6kl_sdio* FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath6kl *VAR_1, u32 VAR_2, u8 *VAR_3,
       u32 VAR_4, u32 VAR_5,
       struct htc_packet *VAR_6)
{
 struct ath6kl_sdio *VAR_7 = FUNC_2(VAR_1);
 struct bus_request *VAR_8;

 VAR_8 = FUNC_1(VAR_7);

 if (FUNC_0(!VAR_8))
  return -VAR_0;

 VAR_8->address = VAR_2;
 VAR_8->buffer = VAR_3;
 VAR_8->length = VAR_4;
 VAR_8->request = VAR_5;
 VAR_8->packet = VAR_6;

 FUNC_5(&VAR_7->wr_async_lock);
 FUNC_3(&VAR_8->list, &VAR_7->wr_asyncq);
 FUNC_6(&VAR_7->wr_async_lock);
 FUNC_4(VAR_1->ath6kl_wq, &VAR_7->wr_async_work);

 return 0;
}

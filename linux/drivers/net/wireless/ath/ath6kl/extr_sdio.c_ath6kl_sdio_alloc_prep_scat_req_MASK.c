
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hif_scatter_req {int virt_scat; struct bus_request* busrequest; struct hif_scatter_req* virt_dma_buf; struct hif_scatter_req* sgentries; } ;
typedef struct hif_scatter_req u8 ;
struct scatterlist {int dummy; } ;
struct hif_scatter_item {int dummy; } ;
struct bus_request {struct hif_scatter_req* scat_req; } ;
struct ath6kl_sdio {int ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_3 ;
 struct bus_request* FUNC_1 (struct ath6kl_sdio*) ;
 int FUNC_2 (int ,struct hif_scatter_req*) ;
 int FUNC_3 (struct hif_scatter_req*) ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_sdio *VAR_4,
        int VAR_5, int VAR_6,
        bool VAR_7)
{
 struct hif_scatter_req *VAR_8;
 struct bus_request *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 u8 *VAR_14;

 VAR_12 = VAR_5 * sizeof(struct hif_scatter_item);
 VAR_11 = sizeof(*VAR_8) + VAR_12;

 if (!VAR_7)
  VAR_13 = sizeof(struct scatterlist) * VAR_5;
 else
  VAR_13 = 2 * VAR_3 +
   VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {

  VAR_8 = FUNC_4(VAR_11, VAR_2);
  if (!VAR_8)
   return -VAR_1;

  if (VAR_7) {
   VAR_14 = FUNC_4(VAR_13, VAR_2);
   if (!VAR_14) {
    FUNC_3(VAR_8);
    return -VAR_1;
   }

   VAR_8->virt_dma_buf =
    (u8 *)FUNC_0((unsigned long)VAR_14);
  } else {

   VAR_8->sgentries = FUNC_4(VAR_13, VAR_2);

   if (!VAR_8->sgentries) {
    FUNC_3(VAR_8);
    return -VAR_1;
   }
  }


  VAR_9 = FUNC_1(VAR_4);
  if (!VAR_9) {
   FUNC_3(VAR_8->sgentries);
   FUNC_3(VAR_8->virt_dma_buf);
   FUNC_3(VAR_8);
   return -VAR_1;
  }


  VAR_9->scat_req = VAR_8;
  VAR_8->busrequest = VAR_9;

  VAR_8->virt_scat = VAR_7;


  FUNC_2(VAR_4->ar, VAR_8);
 }

 return 0;
}

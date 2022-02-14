
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct scatterlist {int dummy; } ;
struct mmc_data {unsigned int sg_len; int flags; size_t blksz; struct scatterlist* sg; } ;
struct gb_sdio_transfer_response {int data_blksz; int data_blocks; } ;
struct gb_sdio_transfer_request {int data_flags; int * data; void* data_blksz; void* data_blocks; } ;
struct gb_sdio_host {size_t data_max; int mmc; int connection; } ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; } ;
typedef int off_t ;
struct TYPE_4__ {struct gb_sdio_transfer_response* payload; } ;
struct TYPE_3__ {struct gb_sdio_transfer_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,size_t,size_t) ;
 struct gb_operation* FUNC_3 (int ,int ,size_t,int,int ) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (struct scatterlist*,unsigned int,int *,size_t,int ) ;

__attribute__((used)) static int FUNC_9(struct gb_sdio_host *VAR_4, struct mmc_data *VAR_5,
    size_t VAR_6, u16 VAR_7, off_t VAR_8)
{
 struct gb_sdio_transfer_request *VAR_9;
 struct gb_sdio_transfer_response *VAR_10;
 struct gb_operation *VAR_11;
 struct scatterlist *VAR_12 = VAR_5->sg;
 unsigned int VAR_13 = VAR_5->sg_len;
 size_t VAR_14;
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17;

 FUNC_0(VAR_6 > VAR_4->data_max);

 VAR_11 = FUNC_3(VAR_4->connection, VAR_2,
     VAR_6 + sizeof(*VAR_9),
     sizeof(*VAR_10), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = VAR_11->request->payload;
 VAR_9->data_flags = VAR_5->flags >> 8;
 VAR_9->data_blocks = FUNC_1(VAR_7);
 VAR_9->data_blksz = FUNC_1(VAR_5->blksz);

 VAR_14 = FUNC_8(VAR_12, VAR_13, &VAR_9->data[0], VAR_6, VAR_8);

 if (VAR_14 != VAR_6) {
  VAR_17 = -VAR_0;
  goto err_put_operation;
 }

 VAR_17 = FUNC_5(VAR_11);
 if (VAR_17 < 0)
  goto err_put_operation;

 VAR_10 = VAR_11->response->payload;

 VAR_16 = FUNC_6(VAR_10->data_blocks);
 VAR_15 = FUNC_6(VAR_10->data_blksz);

 if (VAR_6 != VAR_15 * VAR_16) {
  FUNC_2(FUNC_7(VAR_4->mmc), "send: size received: %zu != %d\n",
   VAR_6, VAR_15 * VAR_16);
  VAR_17 = -VAR_0;
 }

err_put_operation:
 FUNC_4(VAR_11);

 return VAR_17;
}

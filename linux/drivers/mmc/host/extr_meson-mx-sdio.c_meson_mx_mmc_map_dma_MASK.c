
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int offset; int length; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int sg_len; struct scatterlist* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_data*) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct mmc_data *VAR_4 = VAR_3->data;
 int VAR_5;
 struct scatterlist *VAR_6;

 if (!VAR_4)
  return 0;

 VAR_6 = VAR_4->sg;
 if (VAR_6->offset & 3 || VAR_6->length & 3) {
  FUNC_0(FUNC_2(VAR_2),
   "unaligned scatterlist: offset %x length %d\n",
   VAR_6->offset, VAR_6->length);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(FUNC_2(VAR_2), VAR_4->sg, VAR_4->sg_len,
        FUNC_3(VAR_4));
 if (VAR_5 <= 0) {
  FUNC_0(FUNC_2(VAR_2), "dma_map_sg failed\n");
  return -VAR_1;
 }

 return 0;
}

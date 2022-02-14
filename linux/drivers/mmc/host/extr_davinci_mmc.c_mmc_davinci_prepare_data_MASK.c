
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_davinci_host {scalar_t__ version; int ns_in_one_cycle; int bytes_left; struct mmc_data* data; int sg; int sg_len; scalar_t__ use_dma; int * buffer; scalar_t__ base; int data_dir; int mmc; } ;
struct mmc_data {int flags; int blocks; int blksz; int timeout_clks; int timeout_ns; int sg; int sg_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mmc_davinci_host*) ;
 scalar_t__ FUNC_2 (struct mmc_davinci_host*,struct mmc_data*) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct mmc_davinci_host *VAR_14, struct mmc_request *VAR_15)
{
 int VAR_16 = (VAR_13 == 32) ? VAR_9 : 0;
 int VAR_17;
 struct mmc_data *VAR_18 = VAR_15->data;

 if (VAR_14->version == VAR_11)
  VAR_16 = (VAR_13 == 64) ? VAR_9 : 0;

 VAR_14->data = VAR_18;
 if (VAR_18 == ((void*)0)) {
  VAR_14->data_dir = VAR_4;
  FUNC_4(0, VAR_14->base + VAR_0);
  FUNC_4(0, VAR_14->base + VAR_2);
  return;
 }

 FUNC_0(FUNC_3(VAR_14->mmc), "%s, %d blocks of %d bytes\n",
  (VAR_18->flags & VAR_12) ? "write" : "read",
  VAR_18->blocks, VAR_18->blksz);
 FUNC_0(FUNC_3(VAR_14->mmc), "  DTO %d cycles + %d ns\n",
  VAR_18->timeout_clks, VAR_18->timeout_ns);
 VAR_17 = VAR_18->timeout_clks +
  (VAR_18->timeout_ns / VAR_14->ns_in_one_cycle);
 if (VAR_17 > 0xffff)
  VAR_17 = 0xffff;

 FUNC_4(VAR_17, VAR_14->base + VAR_3);
 FUNC_4(VAR_18->blocks, VAR_14->base + VAR_2);
 FUNC_4(VAR_18->blksz, VAR_14->base + VAR_0);


 if (VAR_18->flags & VAR_12) {
  VAR_14->data_dir = VAR_6;
  FUNC_4(VAR_16 | VAR_8 | VAR_10,
   VAR_14->base + VAR_1);
  FUNC_4(VAR_16 | VAR_8,
   VAR_14->base + VAR_1);
 } else {
  VAR_14->data_dir = VAR_5;
  FUNC_4(VAR_16 | VAR_7 | VAR_10,
   VAR_14->base + VAR_1);
  FUNC_4(VAR_16 | VAR_7,
   VAR_14->base + VAR_1);
 }

 VAR_14->buffer = ((void*)0);
 VAR_14->bytes_left = VAR_18->blocks * VAR_18->blksz;
 if (VAR_14->use_dma && (VAR_14->bytes_left & (VAR_13 - 1)) == 0
   && FUNC_2(VAR_14, VAR_18) == 0) {

  VAR_14->bytes_left = 0;
 } else {

  VAR_14->sg_len = VAR_18->sg_len;
  VAR_14->sg = VAR_14->data->sg;
  FUNC_1(VAR_14);
 }
}

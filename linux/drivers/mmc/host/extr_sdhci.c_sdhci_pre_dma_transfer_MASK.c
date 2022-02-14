
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_host {unsigned int bounce_buffer_size; TYPE_1__* mmc; int bounce_addr; scalar_t__ bounce_buffer; } ;
struct mmc_data {int host_cookie; int sg_count; unsigned int blksz; unsigned int blocks; int sg_len; int sg; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,unsigned int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct mmc_data*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct sdhci_host *VAR_4,
      struct mmc_data *VAR_5, int VAR_6)
{
 int VAR_7;





 if (VAR_5->host_cookie == VAR_0)
  return VAR_5->sg_count;


 if (VAR_4->bounce_buffer) {
  unsigned int VAR_8 = VAR_5->blksz * VAR_5->blocks;

  if (VAR_8 > VAR_4->bounce_buffer_size) {
   FUNC_5("%s: asked for transfer of %u bytes exceeds bounce buffer %u bytes\n",
          FUNC_4(VAR_4->mmc), VAR_8,
          VAR_4->bounce_buffer_size);
   return -VAR_2;
  }
  if (FUNC_3(VAR_5) == VAR_1) {

   FUNC_6(VAR_5->sg, VAR_5->sg_len,
       VAR_4->bounce_buffer,
       VAR_8);
  }

  FUNC_1(VAR_4->mmc->parent,
        VAR_4->bounce_addr,
        VAR_4->bounce_buffer_size,
        FUNC_3(VAR_5));

  VAR_7 = 1;
 } else {

  VAR_7 = FUNC_0(FUNC_2(VAR_4->mmc),
          VAR_5->sg, VAR_5->sg_len,
          FUNC_3(VAR_5));
 }

 if (VAR_7 == 0)
  return -VAR_3;

 VAR_5->sg_count = VAR_7;
 VAR_5->host_cookie = VAR_6;

 return VAR_7;
}

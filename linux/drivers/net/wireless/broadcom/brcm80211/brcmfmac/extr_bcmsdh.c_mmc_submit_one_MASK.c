
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdio_func {int num; TYPE_1__* card; } ;
struct mmc_request {int dummy; } ;
struct mmc_data {int sg_len; int blocks; int error; } ;
struct mmc_command {int arg; int error; } ;
struct brcmf_sdio_dev {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_2 (struct mmc_data*,TYPE_1__*) ;
 int FUNC_3 (int ,struct mmc_request*) ;

__attribute__((used)) static int FUNC_4(struct mmc_data *VAR_3, struct mmc_request *VAR_4,
     struct mmc_command *VAR_5, int VAR_6, int VAR_7,
     int VAR_8, u32 *VAR_9,
     struct brcmf_sdio_dev *VAR_10,
     struct sdio_func *VAR_11, int VAR_12)
{
 int VAR_13;

 VAR_3->sg_len = VAR_6;
 VAR_3->blocks = VAR_7 / VAR_8;
 VAR_5->arg |= (*VAR_9 & 0x1FFFF) << 9;
 VAR_5->arg |= VAR_3->blocks & 0x1FF;

 if (VAR_11->num == 1)
  *VAR_9 += VAR_7;

 FUNC_2(VAR_3, VAR_11->card);
 FUNC_3(VAR_11->card->host, VAR_4);

 VAR_13 = VAR_5->error ? VAR_5->error : VAR_3->error;
 if (VAR_13 == -VAR_2) {
  FUNC_1(VAR_10, VAR_0);
 } else if (VAR_13 != 0) {
  FUNC_0("CMD53 sg block %s failed %d\n",
     VAR_12 ? "write" : "read", VAR_13);
  VAR_13 = -VAR_1;
 }

 return VAR_13;
}

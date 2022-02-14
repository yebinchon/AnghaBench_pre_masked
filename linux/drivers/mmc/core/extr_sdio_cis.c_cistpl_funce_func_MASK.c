
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {unsigned char max_blksize; unsigned char enable_timeout; TYPE_2__* card; } ;
struct mmc_card {int host; } ;
struct TYPE_3__ {unsigned int sdio_vsn; } ;
struct TYPE_4__ {TYPE_1__ cccr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_4, struct sdio_func *VAR_5,
        const unsigned char *VAR_6, unsigned VAR_7)
{
 unsigned VAR_8;
 unsigned VAR_9;


 if (!VAR_5)
  return -VAR_0;





 VAR_8 = VAR_5->card->cccr.sdio_vsn;
 VAR_9 = (VAR_8 == VAR_2) ? 28 : 42;

 if (VAR_7 == 28 && VAR_8 == VAR_3) {
  FUNC_2("%s: card has broken SDIO 1.1 CIS, forcing SDIO 1.0\n",
   FUNC_1(VAR_4->host));
  VAR_8 = VAR_2;
 } else if (VAR_7 < VAR_9) {
  return -VAR_0;
 }


 VAR_5->max_blksize = VAR_6[12] | (VAR_6[13] << 8);


 if (VAR_8 > VAR_2)
  VAR_5->enable_timeout = (VAR_6[28] | (VAR_6[29] << 8)) * 10;
 else
  VAR_5->enable_timeout = FUNC_0(VAR_1);

 return 0;
}

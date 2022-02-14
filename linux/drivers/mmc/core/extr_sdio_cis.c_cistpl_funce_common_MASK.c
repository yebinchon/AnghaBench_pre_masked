
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct TYPE_2__ {unsigned char blksize; int max_dtr; } ;
struct mmc_card {TYPE_1__ cis; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mmc_card *VAR_3, struct sdio_func *VAR_4,
          const unsigned char *VAR_5, unsigned VAR_6)
{

 if (VAR_4)
  return -VAR_0;


 VAR_3->cis.blksize = VAR_5[1] | (VAR_5[2] << 8);


 VAR_3->cis.max_dtr = VAR_2[(VAR_5[3] >> 3) & 15] *
       VAR_1[VAR_5[3] & 7];

 return 0;
}

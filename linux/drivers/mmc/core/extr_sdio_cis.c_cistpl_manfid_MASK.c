
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {unsigned int vendor; unsigned int device; } ;
struct TYPE_2__ {unsigned int vendor; unsigned int device; } ;
struct mmc_card {TYPE_1__ cis; } ;



__attribute__((used)) static int FUNC_0(struct mmc_card *VAR_0, struct sdio_func *VAR_1,
    const unsigned char *VAR_2, unsigned VAR_3)
{
 unsigned int VAR_4, VAR_5;


 VAR_4 = VAR_2[0] | (VAR_2[1] << 8);


 VAR_5 = VAR_2[2] | (VAR_2[3] << 8);

 if (VAR_1) {
  VAR_1->vendor = VAR_4;
  VAR_1->device = VAR_5;
 } else {
  VAR_0->cis.vendor = VAR_4;
  VAR_0->cis.device = VAR_5;
 }

 return 0;
}

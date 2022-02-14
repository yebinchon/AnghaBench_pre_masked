
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int erase_timeout; unsigned int erase_offset; } ;
struct mmc_card {TYPE_1__ ssr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct mmc_card *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5;




 if (VAR_3 == VAR_0)
  return VAR_1;

 if (VAR_2->ssr.erase_timeout) {

  VAR_5 = VAR_2->ssr.erase_timeout * VAR_4 +
    VAR_2->ssr.erase_offset;
 } else {




  VAR_5 = 250 * VAR_4;
 }


 if (VAR_5 < 1000)
  VAR_5 = 1000;

 return VAR_5;
}

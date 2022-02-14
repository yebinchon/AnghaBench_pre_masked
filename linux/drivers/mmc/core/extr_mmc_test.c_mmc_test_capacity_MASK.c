
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int capacity; int read_blkbits; } ;
struct TYPE_3__ {unsigned int sectors; } ;
struct mmc_card {TYPE_2__ csd; TYPE_1__ ext_csd; } ;


 scalar_t__ FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*) ;

__attribute__((used)) static unsigned int FUNC_2(struct mmc_card *VAR_0)
{
 if (!FUNC_1(VAR_0) && FUNC_0(VAR_0))
  return VAR_0->ext_csd.sectors;
 else
  return VAR_0->csd.capacity << (VAR_0->csd.read_blkbits - 9);
}

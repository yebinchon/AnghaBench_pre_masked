
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int capacity; int read_blkbits; } ;
struct TYPE_3__ {int au; } ;
struct mmc_card {int erase_size; int pref_erase; TYPE_2__ csd; TYPE_1__ ssr; void* erase_shift; } ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mmc_card*) ;

void FUNC_3(struct mmc_card *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_1(VAR_0->erase_size))
  VAR_0->erase_shift = FUNC_0(VAR_0->erase_size) - 1;
 else
  VAR_0->erase_shift = 0;
 if (FUNC_2(VAR_0) && VAR_0->ssr.au) {
  VAR_0->pref_erase = VAR_0->ssr.au;
  VAR_0->erase_shift = FUNC_0(VAR_0->ssr.au) - 1;
 } else if (VAR_0->erase_size) {
  VAR_1 = (VAR_0->csd.capacity << (VAR_0->csd.read_blkbits - 9)) >> 11;
  if (VAR_1 < 128)
   VAR_0->pref_erase = 512 * 1024 / 512;
  else if (VAR_1 < 512)
   VAR_0->pref_erase = 1024 * 1024 / 512;
  else if (VAR_1 < 1024)
   VAR_0->pref_erase = 2 * 1024 * 1024 / 512;
  else
   VAR_0->pref_erase = 4 * 1024 * 1024 / 512;
  if (VAR_0->pref_erase < VAR_0->erase_size)
   VAR_0->pref_erase = VAR_0->erase_size;
  else {
   VAR_1 = VAR_0->pref_erase % VAR_0->erase_size;
   if (VAR_1)
    VAR_0->pref_erase += VAR_0->erase_size - VAR_1;
  }
 } else
  VAR_0->pref_erase = 0;
}

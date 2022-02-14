
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ubifs_info {int lpt_lebs; int leb_size; int ltab_sz; TYPE_1__* ltab; int lpt_spc_bits; } ;
struct TYPE_2__ {int free; int dirty; scalar_t__ cmt; scalar_t__ tgc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_info const*,void*,int ) ;
 int FUNC_1 (struct ubifs_info const*,int **,int*,int ) ;
 int FUNC_2 (struct ubifs_info const*,int **,int*,int ) ;

__attribute__((used)) static int FUNC_3(const struct ubifs_info *VAR_3, void *VAR_4)
{
 uint8_t *VAR_5 = VAR_4 + VAR_1;
 int VAR_6, VAR_7 = 0, VAR_8;

 VAR_8 = FUNC_1(VAR_3, &VAR_5, &VAR_7, VAR_2);
 if (VAR_8)
  return VAR_8;
 for (VAR_6 = 0; VAR_6 < VAR_3->lpt_lebs; VAR_6++) {
  int VAR_9 = FUNC_2(VAR_3, &VAR_5, &VAR_7, VAR_3->lpt_spc_bits);
  int VAR_10 = FUNC_2(VAR_3, &VAR_5, &VAR_7, VAR_3->lpt_spc_bits);

  if (VAR_9 < 0 || VAR_9 > VAR_3->leb_size || VAR_10 < 0 ||
      VAR_10 > VAR_3->leb_size || VAR_9 + VAR_10 > VAR_3->leb_size)
   return -VAR_0;

  VAR_3->ltab[VAR_6].free = VAR_9;
  VAR_3->ltab[VAR_6].dirty = VAR_10;
  VAR_3->ltab[VAR_6].tgc = 0;
  VAR_3->ltab[VAR_6].cmt = 0;
 }
 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_3->ltab_sz);
 return VAR_8;
}

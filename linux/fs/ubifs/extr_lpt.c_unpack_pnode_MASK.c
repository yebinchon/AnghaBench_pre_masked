
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubifs_pnode {struct ubifs_lprops* lprops; void* num; } ;
struct ubifs_lprops {int free; int dirty; int flags; } ;
struct ubifs_info {int pcnt_bits; int space_bits; int pnode_sz; scalar_t__ big_lpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ubifs_info const*,void*,int ) ;
 int FUNC_1 (struct ubifs_info const*,int **,int*,int ) ;
 int FUNC_2 (struct ubifs_info const*,struct ubifs_lprops* const) ;
 void* FUNC_3 (struct ubifs_info const*,int **,int*,int) ;

__attribute__((used)) static int FUNC_4(const struct ubifs_info *VAR_4, void *VAR_5,
   struct ubifs_pnode *VAR_6)
{
 uint8_t *VAR_7 = VAR_5 + VAR_1;
 int VAR_8, VAR_9 = 0, VAR_10;

 VAR_10 = FUNC_1(VAR_4, &VAR_7, &VAR_9, VAR_3);
 if (VAR_10)
  return VAR_10;
 if (VAR_4->big_lpt)
  VAR_6->num = FUNC_3(VAR_4, &VAR_7, &VAR_9, VAR_4->pcnt_bits);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct ubifs_lprops * const VAR_11 = &VAR_6->lprops[VAR_8];

  VAR_11->free = FUNC_3(VAR_4, &VAR_7, &VAR_9, VAR_4->space_bits);
  VAR_11->free <<= 3;
  VAR_11->dirty = FUNC_3(VAR_4, &VAR_7, &VAR_9, VAR_4->space_bits);
  VAR_11->dirty <<= 3;

  if (FUNC_3(VAR_4, &VAR_7, &VAR_9, 1))
   VAR_11->flags = VAR_0;
  else
   VAR_11->flags = 0;
  VAR_11->flags |= FUNC_2(VAR_4, VAR_11);
 }
 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_4->pnode_sz);
 return VAR_10;
}

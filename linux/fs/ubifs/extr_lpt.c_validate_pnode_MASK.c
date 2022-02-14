
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {int num; TYPE_1__* lprops; } ;
struct ubifs_nnode {int dummy; } ;
struct ubifs_info {int leb_size; int min_io_size; scalar_t__ big_lpt; } ;
struct TYPE_2__ {int free; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info const*,struct ubifs_nnode*,int) ;

__attribute__((used)) static int FUNC_1(const struct ubifs_info *VAR_2, struct ubifs_pnode *VAR_3,
     struct ubifs_nnode *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_2->big_lpt) {
  int VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_5);

  if (VAR_3->num != VAR_7)
   return -VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  int VAR_8 = VAR_3->lprops[VAR_6].free;
  int VAR_9 = VAR_3->lprops[VAR_6].dirty;

  if (VAR_8 < 0 || VAR_8 > VAR_2->leb_size || VAR_8 % VAR_2->min_io_size ||
      (VAR_8 & 7))
   return -VAR_0;
  if (VAR_9 < 0 || VAR_9 > VAR_2->leb_size || (VAR_9 & 7))
   return -VAR_0;
  if (VAR_9 + VAR_8 > VAR_2->leb_size)
   return -VAR_0;
 }
 return 0;
}

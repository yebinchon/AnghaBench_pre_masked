
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lprops {int flags; int free; int dirty; int lnum; } ;
struct TYPE_2__ {size_t cnt; scalar_t__* arr; } ;
struct ubifs_info {TYPE_1__ dirty_idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 int FUNC_2 (char*,int ,int ,int ,int) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 struct ubifs_lprops* FUNC_4 (struct ubifs_info*,struct ubifs_lprops const*,int ,int ,int,int ) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_4)
{
 const struct ubifs_lprops *VAR_5;
 int VAR_6;

 while (1) {
  if (!VAR_4->dirty_idx.cnt)
   return -VAR_0;

  VAR_6 = (size_t)VAR_4->dirty_idx.arr[--VAR_4->dirty_idx.cnt];
  VAR_5 = FUNC_5(VAR_4, VAR_6);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  if ((VAR_5->flags & VAR_3) || !(VAR_5->flags & VAR_1))
   continue;
  VAR_5 = FUNC_4(VAR_4, VAR_5, VAR_2, VAR_2,
         VAR_5->flags | VAR_3, 0);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  break;
 }
 FUNC_2("LEB %d, dirty %d and free %d flags %#x", VAR_5->lnum, VAR_5->dirty,
   VAR_5->free, VAR_5->flags);
 FUNC_3(VAR_4, VAR_5->flags & VAR_3);
 FUNC_3(VAR_4, VAR_5->flags & VAR_1);
 return VAR_6;
}

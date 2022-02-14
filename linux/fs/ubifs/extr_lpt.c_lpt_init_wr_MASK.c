
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lpt_lprops {int dummy; } ;
struct ubifs_info {int lpt_lebs; scalar_t__ leb_size; scalar_t__ lpt_first; TYPE_1__* ltab; int lsave; int lsave_cnt; scalar_t__ big_lpt; void* lpt_buf; void* ltab_cmt; } ;
struct TYPE_2__ {scalar_t__ free; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->ltab_cmt = FUNC_4(FUNC_0(sizeof(struct ubifs_lpt_lprops),
      VAR_2->lpt_lebs));
 if (!VAR_2->ltab_cmt)
  return -VAR_0;

 VAR_2->lpt_buf = FUNC_4(VAR_2->leb_size);
 if (!VAR_2->lpt_buf)
  return -VAR_0;

 if (VAR_2->big_lpt) {
  VAR_2->lsave = FUNC_1(VAR_2->lsave_cnt, sizeof(int), VAR_1);
  if (!VAR_2->lsave)
   return -VAR_0;
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->lpt_lebs; VAR_4++)
  if (VAR_2->ltab[VAR_4].free == VAR_2->leb_size) {
   VAR_3 = FUNC_3(VAR_2, VAR_4 + VAR_2->lpt_first);
   if (VAR_3)
    return VAR_3;
  }

 return 0;
}

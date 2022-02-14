
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lprops {scalar_t__ free; } ;
struct ubifs_info {scalar_t__ mst_offs; scalar_t__ mst_node_alsz; int lhead_lnum; int ltail_lnum; int lpt_first; int lpt_last; scalar_t__ leb_size; int orph_first; int orph_last; int main_first; int leb_cnt; TYPE_1__* ltab; int min_io_size; } ;
struct TYPE_2__ {int free; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct ubifs_lprops*) ;
 int FUNC_2 (struct ubifs_lprops*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ubifs_info*,int,scalar_t__) ;
 int FUNC_4 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 int FUNC_7 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_8(struct ubifs_info *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct ubifs_lprops *VAR_6;

 FUNC_4(VAR_3);


 for (VAR_4 = VAR_2; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_3->mst_offs + VAR_3->mst_node_alsz);
  if (VAR_5)
   goto out;
 }


 VAR_4 = FUNC_6(VAR_3, VAR_3->lhead_lnum);
 while (VAR_4 != VAR_3->ltail_lnum) {
  VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
  if (VAR_5)
   goto out;
  VAR_4 = FUNC_6(VAR_3, VAR_4);
 }





 VAR_5 = FUNC_3(VAR_3, VAR_3->lhead_lnum,
   FUNC_0(VAR_0, VAR_3->min_io_size));
 if (VAR_5)
  goto out;


 for (VAR_4 = VAR_3->lpt_first; VAR_4 <= VAR_3->lpt_last; VAR_4++) {
  int VAR_7 = VAR_3->ltab[VAR_4 - VAR_3->lpt_first].free;

  if (VAR_7 > 0) {
   VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_3->leb_size - VAR_7);
   if (VAR_5)
    goto out;
  }
 }


 for (VAR_4 = VAR_3->orph_first; VAR_4 <= VAR_3->orph_last; VAR_4++) {
  VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
  if (VAR_5)
   goto out;
 }


 for (VAR_4 = VAR_3->main_first; VAR_4 < VAR_3->leb_cnt; VAR_4++) {
  VAR_6 = FUNC_5(VAR_3, VAR_4);
  if (FUNC_1(VAR_6)) {
   VAR_5 = FUNC_2(VAR_6);
   goto out;
  }

  if (VAR_6->free > 0) {
   VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_3->leb_size - VAR_6->free);
   if (VAR_5)
    goto out;
  }
 }

out:
 FUNC_7(VAR_3);
 return VAR_5;
}

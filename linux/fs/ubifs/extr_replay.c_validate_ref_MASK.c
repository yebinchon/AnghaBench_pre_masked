
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_ref_node {int jhead; int offs; int lnum; } ;
struct ubifs_info {unsigned int jhead_cnt; int leb_cnt; int main_first; unsigned int leb_size; int min_io_size; } ;
struct ubifs_bud {unsigned int jhead; unsigned int start; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_info*,char*,int,unsigned int) ;
 struct ubifs_bud* FUNC_2 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_1, const struct ubifs_ref_node *VAR_2)
{
 struct ubifs_bud *VAR_3;
 int VAR_4 = FUNC_0(VAR_2->lnum);
 unsigned int VAR_5 = FUNC_0(VAR_2->offs);
 unsigned int VAR_6 = FUNC_0(VAR_2->jhead);






 if (VAR_6 >= VAR_1->jhead_cnt || VAR_4 >= VAR_1->leb_cnt ||
     VAR_4 < VAR_1->main_first || VAR_5 > VAR_1->leb_size ||
     VAR_5 & (VAR_1->min_io_size - 1))
  return -VAR_0;


 VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (VAR_3) {
  if (VAR_3->jhead == VAR_6 && VAR_3->start <= VAR_5)
   return 1;
  FUNC_1(VAR_1, "bud at LEB %d:%d was already referred", VAR_4, VAR_5);
  return -VAR_0;
 }

 return 0;
}

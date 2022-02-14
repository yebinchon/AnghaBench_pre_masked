
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct page {int dummy; } ;
struct mpage_data {int * bio; int use_writepage; int get_block; int last_block_in_bio; } ;
typedef int get_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*,struct writeback_control*,struct mpage_data*) ;
 int FUNC_1 (int ,int,int *) ;

int FUNC_2(struct page *VAR_3, get_block_t VAR_4,
 struct writeback_control *VAR_5)
{
 struct mpage_data VAR_6 = {
  .bio = ((void*)0),
  .last_block_in_bio = 0,
  .get_block = VAR_4,
  .use_writepage = 0,
 };
 int VAR_7 = FUNC_0(VAR_3, VAR_5, &VAR_6);
 if (VAR_6.bio) {
  int VAR_8 = (VAR_5->sync_mode == VAR_2 ?
     VAR_1 : 0);
  FUNC_1(VAR_0, VAR_8, VAR_6.bio);
 }
 return VAR_7;
}

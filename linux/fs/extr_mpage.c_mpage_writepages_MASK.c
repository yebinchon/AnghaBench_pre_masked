
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct mpage_data {int use_writepage; int * bio; int get_block; int last_block_in_bio; } ;
struct blk_plug {int dummy; } ;
struct address_space {int dummy; } ;
typedef int get_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct blk_plug*) ;
 int FUNC_1 (struct blk_plug*) ;
 int FUNC_2 (struct address_space*,struct writeback_control*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct address_space*,struct writeback_control*,int ,struct mpage_data*) ;

int
FUNC_5(struct address_space *VAR_4,
  struct writeback_control *VAR_5, get_block_t VAR_6)
{
 struct blk_plug VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7);

 if (!VAR_6)
  VAR_8 = FUNC_2(VAR_4, VAR_5);
 else {
  struct mpage_data VAR_9 = {
   .bio = ((void*)0),
   .last_block_in_bio = 0,
   .get_block = VAR_6,
   .use_writepage = 1,
  };

  VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_3, &VAR_9);
  if (VAR_9.bio) {
   int VAR_10 = (VAR_5->sync_mode == VAR_2 ?
      VAR_1 : 0);
   FUNC_3(VAR_0, VAR_10, VAR_9.bio);
  }
 }
 FUNC_0(&VAR_7);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct page {int dummy; } ;
struct journal_head {char* b_frozen_data; int b_triggers; int b_frozen_triggers; } ;
struct buffer_head {char* b_data; struct buffer_head* b_private; int b_blocknr; int b_bdev; int b_size; struct page* b_page; int b_count; } ;
typedef int sector_t ;
struct TYPE_6__ {int j_list_lock; int j_dev; } ;
typedef TYPE_2__ journal_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct buffer_head*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct journal_head*,TYPE_1__*,int ) ;
 struct buffer_head* FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (int ) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (struct journal_head*,char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct journal_head*) ;
 char* FUNC_14 (struct page*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int ) ;
 unsigned int FUNC_17 (char*) ;
 int FUNC_18 (struct buffer_head*,struct page*,unsigned int) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 struct page* FUNC_24 (char*) ;

int FUNC_25(transaction_t *VAR_5,
      struct journal_head *VAR_6,
      struct buffer_head **VAR_7,
      sector_t VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 char *VAR_12;
 struct buffer_head *VAR_13;
 struct page *VAR_14;
 unsigned int VAR_15;
 struct buffer_head *VAR_16 = FUNC_13(VAR_6);
 journal_t *VAR_17 = VAR_5->t_journal;
 FUNC_1(VAR_16, FUNC_6(VAR_16));

 VAR_13 = FUNC_3(VAR_2|VAR_4);


 FUNC_4(&VAR_13->b_count, 1);

 FUNC_11(VAR_16);
repeat:




 if (VAR_6->b_frozen_data) {
  VAR_10 = 1;
  VAR_14 = FUNC_24(VAR_6->b_frozen_data);
  VAR_15 = FUNC_17(VAR_6->b_frozen_data);
 } else {
  VAR_14 = FUNC_13(VAR_6)->b_page;
  VAR_15 = FUNC_17(FUNC_13(VAR_6)->b_data);
 }

 VAR_12 = FUNC_14(VAR_14);






 if (!VAR_10)
  FUNC_9(VAR_6, VAR_12 + VAR_15,
        VAR_6->b_triggers);




 if (*((__be32 *)(VAR_12 + VAR_15)) ==
    FUNC_7(VAR_3)) {
  VAR_9 = 1;
  VAR_11 = 1;
 }
 FUNC_15(VAR_12);




 if (VAR_9 && !VAR_10) {
  char *VAR_18;

  FUNC_12(VAR_16);
  VAR_18 = FUNC_8(VAR_16->b_size, VAR_2);
  if (!VAR_18) {
   FUNC_5(VAR_13);
   return -VAR_1;
  }
  FUNC_11(VAR_16);
  if (VAR_6->b_frozen_data) {
   FUNC_10(VAR_18, VAR_16->b_size);
   goto repeat;
  }

  VAR_6->b_frozen_data = VAR_18;
  VAR_12 = FUNC_14(VAR_14);
  FUNC_16(VAR_18, VAR_12 + VAR_15, VAR_16->b_size);
  FUNC_15(VAR_12);

  VAR_14 = FUNC_24(VAR_18);
  VAR_15 = FUNC_17(VAR_18);
  VAR_10 = 1;






  VAR_6->b_frozen_triggers = VAR_6->b_triggers;
 }





 if (VAR_11) {
  VAR_12 = FUNC_14(VAR_14);
  *((unsigned int *)(VAR_12 + VAR_15)) = 0;
  FUNC_15(VAR_12);
 }

 FUNC_18(VAR_13, VAR_14, VAR_15);
 VAR_13->b_size = VAR_16->b_size;
 VAR_13->b_bdev = VAR_17->j_dev;
 VAR_13->b_blocknr = VAR_8;
 VAR_13->b_private = VAR_16;
 FUNC_20(VAR_13);
 FUNC_19(VAR_13);

 *VAR_7 = VAR_13;






 FUNC_0(VAR_6, "file as BJ_Shadow");
 FUNC_22(&VAR_17->j_list_lock);
 FUNC_2(VAR_6, VAR_5, VAR_0);
 FUNC_23(&VAR_17->j_list_lock);
 FUNC_21(VAR_16);
 FUNC_12(VAR_16);

 return VAR_11 | (VAR_10 << 1);
}

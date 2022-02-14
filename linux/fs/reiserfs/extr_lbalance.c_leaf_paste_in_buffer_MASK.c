
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct item_head {int dummy; } ;
struct disk_child {int dummy; } ;
struct buffer_info {scalar_t__ bi_parent; TYPE_1__* tb; int bi_position; struct buffer_head* bi_bh; } ;
struct buffer_head {int b_size; int b_data; } ;
struct block_head {int dummy; } ;
struct TYPE_3__ {struct super_block* tb_sb; } ;


 struct block_head* FUNC_0 (struct buffer_head*) ;
 struct disk_child* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (struct block_head*) ;
 int FUNC_4 (struct block_head*) ;
 scalar_t__ FUNC_5 (struct disk_child*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,struct buffer_head*,int ) ;
 int FUNC_8 (struct item_head*) ;
 int FUNC_9 (struct item_head*) ;
 int FUNC_10 (struct item_head*) ;
 struct item_head* FUNC_11 (struct buffer_head*,int) ;
 int FUNC_12 (int,char const*,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (int,char,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct disk_child*,scalar_t__) ;
 int FUNC_17 (struct item_head*,int) ;
 int FUNC_18 (struct item_head*,int) ;
 int FUNC_19 (struct super_block*,char*,char*,int,int) ;
 int FUNC_20 (struct block_head*,int) ;

void FUNC_21(struct buffer_info *VAR_0, int VAR_1,
     int VAR_2, int VAR_3,
     const char *VAR_4, int VAR_5)
{
 struct buffer_head *VAR_6 = VAR_0->bi_bh;
 int VAR_7, VAR_8;
 struct block_head *VAR_9;
 struct item_head *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_0(VAR_6);
 VAR_7 = FUNC_4(VAR_9);
 VAR_8 = FUNC_3(VAR_9);


 FUNC_2(VAR_8 < VAR_3,
        "vs-10175: not enough free space: needed %d, available %d",
        VAR_3, VAR_8);
 VAR_10 = FUNC_11(VAR_6, VAR_1);

 VAR_12 = FUNC_9(&VAR_10[VAR_7 - VAR_1 - 1]);
 VAR_13 = VAR_1 ? FUNC_9(VAR_10 - 1) : VAR_6->b_size;


 FUNC_13(VAR_6->b_data + VAR_12 - VAR_3, VAR_6->b_data + VAR_12,
  VAR_13 - VAR_12);


 for (VAR_11 = VAR_1; VAR_11 < VAR_7; VAR_11++)
  FUNC_18(&VAR_10[VAR_11 - VAR_1],
    FUNC_9(&VAR_10[VAR_11 - VAR_1]) -
    VAR_3);

 if (VAR_4) {
  if (!FUNC_10(VAR_10)) {
   if (!VAR_2) {

    FUNC_13(VAR_6->b_data + FUNC_9(VAR_10) +
     VAR_3,
     VAR_6->b_data + FUNC_9(VAR_10),
     FUNC_8(VAR_10));

    FUNC_14(VAR_6->b_data + FUNC_9(VAR_10), 0,
           VAR_5);
    FUNC_12(VAR_6->b_data + FUNC_9(VAR_10) +
           VAR_5, VAR_4,
           VAR_3 - VAR_5);
   } else {
    FUNC_14(VAR_6->b_data + VAR_13 - VAR_3, 0,
           VAR_5);
    FUNC_12(VAR_6->b_data + VAR_13 - VAR_3 +
           VAR_5, VAR_4,
           VAR_3 - VAR_5);
   }
  }
 } else
  FUNC_14(VAR_6->b_data + VAR_13 - VAR_3, '\0', VAR_3);

 FUNC_17(VAR_10, FUNC_8(VAR_10) + VAR_3);


 FUNC_20(VAR_9, VAR_8 - VAR_3);

 FUNC_7(VAR_0->tb, VAR_6, 0);

 if (VAR_0->bi_parent) {
  struct disk_child *VAR_14 =
      FUNC_1(VAR_0->bi_parent, VAR_0->bi_position);
  FUNC_16(VAR_14, FUNC_5(VAR_14) + VAR_3);
  FUNC_6(VAR_0->tb, VAR_0->bi_parent, 0);
 }
}

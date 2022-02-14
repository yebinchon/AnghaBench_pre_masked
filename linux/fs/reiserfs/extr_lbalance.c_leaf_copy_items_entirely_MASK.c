
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
struct disk_child {int dummy; } ;
struct buffer_info {scalar_t__ bi_parent; int tb; int bi_position; struct buffer_head* bi_bh; } ;
struct buffer_head {int b_size; scalar_t__ b_blocknr; struct item_head* b_data; } ;
struct block_head {int dummy; } ;


 struct block_head* FUNC_0 (struct buffer_head*) ;
 unsigned long FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct disk_child* FUNC_3 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (struct block_head*) ;
 int FUNC_6 (struct block_head*) ;
 scalar_t__ FUNC_7 (struct disk_child*) ;
 scalar_t__ FUNC_8 (struct disk_child*) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (int ,struct buffer_head*,int ) ;
 scalar_t__ FUNC_11 (struct item_head*) ;
 int FUNC_12 (struct item_head*) ;
 struct item_head* FUNC_13 (struct buffer_head*,int) ;
 struct item_head* FUNC_14 (struct buffer_head*,int) ;
 int FUNC_15 (struct item_head*,struct item_head*,int) ;
 int FUNC_16 (struct item_head*,struct item_head*,int) ;
 int FUNC_17 (struct disk_child*,scalar_t__) ;
 int FUNC_18 (struct item_head*,int) ;
 int FUNC_19 (struct block_head*,int) ;
 int FUNC_20 (struct block_head*,int) ;

__attribute__((used)) static void FUNC_21(struct buffer_info *VAR_3,
         struct buffer_head *VAR_4, int VAR_5,
         int VAR_6, int VAR_7)
{
 struct buffer_head *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 struct block_head *VAR_17;
 struct item_head *VAR_18;

 FUNC_4(VAR_5 != VAR_2 && VAR_5 != VAR_0,
        "vs-10090: bad last_first parameter %d", VAR_5);
 FUNC_4(FUNC_2(VAR_4) - VAR_6 < VAR_7,
        "vs-10100: too few items in source %d, required %d from %d",
        FUNC_2(VAR_4), VAR_7, VAR_6);
 FUNC_4(VAR_7 < 0, "vs-10110: can not copy negative amount of items");
 FUNC_4(!VAR_3, "vs-10120: can not copy negative amount of items");

 VAR_8 = VAR_3->bi_bh;

 FUNC_4(!VAR_8, "vs-10130: can not copy negative amount of items");

 if (VAR_7 == 0)
  return;

 VAR_17 = FUNC_0(VAR_8);
 VAR_9 = FUNC_6(VAR_17);
 VAR_10 = FUNC_5(VAR_17);





 VAR_11 = (VAR_5 == VAR_2) ? 0 : VAR_9;


 VAR_18 = FUNC_14(VAR_8, VAR_11);

 FUNC_4(FUNC_5(VAR_17) < VAR_7 * VAR_1,
        "vs-10140: not enough free space for headers %d (needed %d)",
        FUNC_1(VAR_8), VAR_7 * VAR_1);


 FUNC_16(VAR_18 + VAR_7, VAR_18, (VAR_9 - VAR_11) * VAR_1);


 FUNC_15(VAR_18, FUNC_14(VAR_4, VAR_6), VAR_7 * VAR_1);

 VAR_10 -= (VAR_1 * VAR_7);
 FUNC_19(VAR_17, VAR_10);


 VAR_16 = VAR_14 = (VAR_11 == 0) ? VAR_8->b_size : FUNC_12(VAR_18 - 1);
 for (VAR_15 = VAR_11; VAR_15 < VAR_9 + VAR_7; VAR_15++) {
  VAR_14 -= FUNC_11(VAR_18 + VAR_15 - VAR_11);
  FUNC_18(VAR_18 + VAR_15 - VAR_11, VAR_14);
 }


 VAR_12 = FUNC_12(&VAR_18[VAR_9 + VAR_7 - 1 - VAR_11]);
 VAR_13 = FUNC_12(&VAR_18[VAR_7 - 1]);


 FUNC_4(VAR_10 < VAR_16 - VAR_13,
        "vs-10150: not enough free space for items %d (needed %d)",
        VAR_10, VAR_16 - VAR_13);

 FUNC_16(VAR_8->b_data + VAR_12,
  VAR_8->b_data + VAR_12 + VAR_16 - VAR_13,
  VAR_13 - VAR_12);


 FUNC_15(VAR_8->b_data + VAR_13,
        FUNC_13(VAR_4, (VAR_6 + VAR_7 - 1)),
        VAR_16 - VAR_13);


 FUNC_20(VAR_17, VAR_9 + VAR_7);
 FUNC_19(VAR_17, VAR_10 - (VAR_16 - VAR_13));

 FUNC_10(VAR_3->tb, VAR_8, 0);

 if (VAR_3->bi_parent) {
  struct disk_child *VAR_19;
  VAR_19 = FUNC_3(VAR_3->bi_parent, VAR_3->bi_position);
  FUNC_4(FUNC_7(VAR_19) != VAR_8->b_blocknr,
         "vs-10160: block number in bh does not match to field in disk_child structure %lu and %lu",
         (long unsigned)VAR_8->b_blocknr,
         (long unsigned)FUNC_7(VAR_19));
  FUNC_17(VAR_19,
       FUNC_8(VAR_19) + (VAR_16 - VAR_13 +
          VAR_1 * VAR_7));

  FUNC_9(VAR_3->tb, VAR_3->bi_parent,
            0);
 }
}

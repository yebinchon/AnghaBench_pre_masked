
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
struct disk_child {int dummy; } ;
struct buffer_info {scalar_t__ bi_parent; int tb; int bi_position; struct buffer_head* bi_bh; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
struct block_head {int dummy; } ;


 struct block_head* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*,struct item_head*) ;
 struct disk_child* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct block_head*) ;
 int FUNC_5 (struct block_head*) ;
 scalar_t__ FUNC_6 (struct disk_child*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (int ,struct buffer_head*,int ) ;
 scalar_t__ FUNC_10 (struct item_head*) ;
 int FUNC_11 (struct item_head*) ;
 int FUNC_12 (struct item_head*) ;
 scalar_t__ FUNC_13 (struct item_head*) ;
 scalar_t__ FUNC_14 (struct item_head*) ;
 scalar_t__ FUNC_15 (struct item_head*) ;
 int FUNC_16 (struct item_head*) ;
 struct item_head* FUNC_17 (struct buffer_head*,int) ;
 scalar_t__ FUNC_18 (struct item_head*) ;
 int FUNC_19 (struct buffer_head*,struct item_head*,int,int) ;
 int FUNC_20 (scalar_t__,scalar_t__,int) ;
 int FUNC_21 (struct disk_child*,scalar_t__) ;
 int FUNC_22 (struct item_head*,int) ;
 int FUNC_23 (struct item_head*,int) ;
 int FUNC_24 (struct block_head*,scalar_t__) ;
 int FUNC_25 (struct item_head*,int ) ;
 int FUNC_26 (struct item_head*,scalar_t__) ;

void FUNC_27(struct buffer_info *VAR_1, int VAR_2,
     int VAR_3, int VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = VAR_1->bi_bh;
 struct block_head *VAR_7;
 struct item_head *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_7 = FUNC_0(VAR_6);
 VAR_5 = FUNC_5(VAR_7);


 VAR_8 = FUNC_17(VAR_6, VAR_2);

 if (FUNC_14(VAR_8)) {

  VAR_4 = FUNC_19(VAR_6, VAR_8, VAR_3, VAR_4);
  if (VAR_3 == 0) {

   FUNC_3(VAR_2,
          "when 0-th enrty of item is cut, that item must be first in the node, not %d-th",
          VAR_2);

   FUNC_26(VAR_8, FUNC_7(FUNC_1(VAR_6, VAR_8)));
  }
 } else {

  FUNC_3(FUNC_16(VAR_8), "10195: item is stat data");
  FUNC_3(VAR_3 && VAR_3 + VAR_4 != FUNC_11(VAR_8),
         "10200: invalid offset (%lu) or trunc_size (%lu) or ih_item_len (%lu)",
         (long unsigned)VAR_3, (long unsigned)VAR_4,
         (long unsigned)FUNC_11(VAR_8));


  if (VAR_3 == 0) {
   FUNC_20(VAR_6->b_data + FUNC_12(VAR_8),
    VAR_6->b_data + FUNC_12(VAR_8) + VAR_4,
    FUNC_11(VAR_8) - VAR_4);


   if (FUNC_13(VAR_8))
    FUNC_26(VAR_8,
         FUNC_18(VAR_8) +
         VAR_4);
   else {
    FUNC_26(VAR_8,
         FUNC_18(VAR_8) +
         (VAR_4 / VAR_0) *
         VAR_6->b_size);
    FUNC_3(FUNC_11(VAR_8) == VAR_4
           && FUNC_10(VAR_8),
           "10205: invalid ih_free_space (%h)", VAR_8);
   }
  }
 }


 VAR_9 = FUNC_12(&VAR_8[VAR_5 - VAR_2 - 1]);


 VAR_10 = VAR_2 ? FUNC_12(VAR_8 - 1) : VAR_6->b_size;


 FUNC_20(VAR_6->b_data + VAR_9 + VAR_4, VAR_6->b_data + VAR_9,
  VAR_10 - VAR_9 - VAR_4);


 FUNC_22(VAR_8, FUNC_11(VAR_8) - VAR_4);

 if (FUNC_15(VAR_8)) {
  if (VAR_3)
   FUNC_25(VAR_8, 0);
 }


 for (VAR_11 = VAR_2; VAR_11 < VAR_5; VAR_11++)
  FUNC_23(&VAR_8[VAR_11 - VAR_2],
    FUNC_12(&VAR_8[VAR_11 - VAR_2]) + VAR_4);


 FUNC_24(VAR_7, FUNC_4(VAR_7) + VAR_4);

 FUNC_9(VAR_1->tb, VAR_6, 0);

 if (VAR_1->bi_parent) {
  struct disk_child *VAR_12;
  VAR_12 = FUNC_2(VAR_1->bi_parent, VAR_1->bi_position);
  FUNC_21(VAR_12, FUNC_6(VAR_12) - VAR_4);
  FUNC_8(VAR_1->tb, VAR_1->bi_parent, 0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct buffer_head {int b_blocknr; int b_size; int b_page; int b_bdev; int b_end_io; } ;
struct TYPE_2__ {int bi_sector; int bi_size; } ;
struct bio {int bi_write_hint; struct buffer_head* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef enum rw_hint { ____Placeholder_rw_hint } rw_hint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct bio*,int ,int,int ) ;
 struct bio* FUNC_3 (int ,int) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*,int,int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_13 (int,struct bio*) ;
 int FUNC_14 (struct bio*) ;
 scalar_t__ FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct writeback_control*,int ,int) ;
 int FUNC_17 (struct writeback_control*,struct bio*) ;

__attribute__((used)) static int FUNC_18(int VAR_5, int VAR_6, struct buffer_head *VAR_7,
    enum rw_hint VAR_8, struct writeback_control *VAR_9)
{
 struct bio *VAR_10;

 FUNC_0(!FUNC_7(VAR_7));
 FUNC_0(!FUNC_8(VAR_7));
 FUNC_0(!VAR_7->b_end_io);
 FUNC_0(FUNC_6(VAR_7));
 FUNC_0(FUNC_11(VAR_7));




 if (FUNC_15(VAR_7) && (VAR_5 == VAR_2))
  FUNC_12(VAR_7);





 VAR_10 = FUNC_3(VAR_0, 1);

 VAR_10->bi_iter.bi_sector = VAR_7->b_blocknr * (VAR_7->b_size >> 9);
 FUNC_4(VAR_10, VAR_7->b_bdev);
 VAR_10->bi_write_hint = VAR_8;

 FUNC_2(VAR_10, VAR_7->b_page, VAR_7->b_size, FUNC_1(VAR_7));
 FUNC_0(VAR_10->bi_iter.bi_size != VAR_7->b_size);

 VAR_10->bi_end_io = VAR_4;
 VAR_10->bi_private = VAR_7;


 FUNC_13(VAR_5, VAR_10);

 if (FUNC_9(VAR_7))
  VAR_6 |= VAR_1;
 if (FUNC_10(VAR_7))
  VAR_6 |= VAR_3;
 FUNC_5(VAR_10, VAR_5, VAR_6);

 if (VAR_9) {
  FUNC_17(VAR_9, VAR_10);
  FUNC_16(VAR_9, VAR_7->b_page, VAR_7->b_size);
 }

 FUNC_14(VAR_10);
 return 0;
}

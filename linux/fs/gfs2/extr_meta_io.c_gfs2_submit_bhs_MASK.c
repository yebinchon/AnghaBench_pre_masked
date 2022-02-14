
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {int b_blocknr; int b_size; int b_page; int b_bdev; } ;
struct TYPE_2__ {int bi_sector; scalar_t__ bi_size; } ;
struct bio {int bi_end_io; TYPE_1__ bi_iter; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct bio*,int ,int,int ) ;
 struct bio* FUNC_3 (int ,int) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*,int,int) ;
 int VAR_1 ;
 int FUNC_6 (struct bio*) ;

__attribute__((used)) static void FUNC_7(int VAR_2, int VAR_3, struct buffer_head *VAR_4[],
       int VAR_5)
{
 while (VAR_5 > 0) {
  struct buffer_head *VAR_6 = *VAR_4;
  struct bio *VAR_7;

  VAR_7 = FUNC_3(VAR_0, VAR_5);
  VAR_7->bi_iter.bi_sector = VAR_6->b_blocknr * (VAR_6->b_size >> 9);
  FUNC_4(VAR_7, VAR_6->b_bdev);
  while (VAR_5 > 0) {
   VAR_6 = *VAR_4;
   if (!FUNC_2(VAR_7, VAR_6->b_page, VAR_6->b_size, FUNC_1(VAR_6))) {
    FUNC_0(VAR_7->bi_iter.bi_size == 0);
    break;
   }
   VAR_4++;
   VAR_5--;
  }
  VAR_7->bi_end_io = VAR_1;
  FUNC_5(VAR_7, VAR_2, VAR_3);
  FUNC_6(VAR_7);
 }
}

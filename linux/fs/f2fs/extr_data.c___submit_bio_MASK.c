
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int sb; int write_io_dummy; } ;
struct TYPE_3__ {unsigned int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef enum page_type { ____Placeholder_page_type } page_type ;
struct TYPE_4__ {scalar_t__ plug; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct page*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct bio*,struct page*,scalar_t__,int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_2__* VAR_9 ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (int ,int) ;
 int FUNC_10 (struct page*,unsigned long) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;
 int FUNC_12 (struct bio*) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (int ,int,struct bio*) ;
 int FUNC_15 (int ,int,struct bio*) ;
 int FUNC_16 (struct page*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_17(struct f2fs_sb_info *VAR_10,
    struct bio *VAR_11, enum page_type VAR_12)
{
 if (!FUNC_7(FUNC_4(VAR_11))) {
  unsigned int VAR_13;

  if (VAR_12 != VAR_0 && VAR_12 != VAR_5)
   goto submit_io;

  if (FUNC_13(VAR_10, VAR_4) && VAR_9->plug)
   FUNC_5(VAR_9->plug);

  if (FUNC_0(VAR_10))
   goto submit_io;

  VAR_13 = VAR_11->bi_iter.bi_size >> VAR_2;
  VAR_13 %= FUNC_1(VAR_10);

  if (VAR_13 == 0)
   goto submit_io;


  for (; VAR_13 < FUNC_1(VAR_10); VAR_13++) {
   struct page *VAR_14 =
    FUNC_9(VAR_10->write_io_dummy,
           VAR_3 | VAR_8);
   FUNC_6(VAR_10, !VAR_14);

   FUNC_16(VAR_14, 0, VAR_6);
   FUNC_2(VAR_14);
   FUNC_10(VAR_14, (unsigned long)VAR_1);
   FUNC_8(VAR_14);
   if (FUNC_3(VAR_11, VAR_14, VAR_6, 0) < VAR_6)
    FUNC_6(VAR_10, 1);
  }




  if (VAR_12 == VAR_5)
   FUNC_11(VAR_10, VAR_7);
 }
submit_io:
 if (FUNC_7(FUNC_4(VAR_11)))
  FUNC_14(VAR_10->sb, VAR_12, VAR_11);
 else
  FUNC_15(VAR_10->sb, VAR_12, VAR_11);
 FUNC_12(VAR_11);
}

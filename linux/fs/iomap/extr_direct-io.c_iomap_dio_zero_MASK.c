
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iomap_dio {int dummy; } ;
struct iomap {int bdev; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_end_io; struct iomap_dio* bi_private; TYPE_1__ bi_iter; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,struct page*,unsigned int,int ) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ,int) ;
 int FUNC_5 (struct page*) ;
 int VAR_4 ;
 int FUNC_6 (struct iomap_dio*,struct iomap*,struct bio*) ;
 int FUNC_7 (struct iomap*,int ) ;

__attribute__((used)) static void
FUNC_8(struct iomap_dio *VAR_5, struct iomap *VAR_6, loff_t VAR_7,
  unsigned VAR_8)
{
 struct page *VAR_9 = FUNC_0(0);
 int VAR_10 = VAR_3 | VAR_1;
 struct bio *VAR_11;

 VAR_11 = FUNC_2(VAR_0, 1);
 FUNC_3(VAR_11, VAR_6->bdev);
 VAR_11->bi_iter.bi_sector = FUNC_7(VAR_6, VAR_7);
 VAR_11->bi_private = VAR_5;
 VAR_11->bi_end_io = VAR_4;

 FUNC_5(VAR_9);
 FUNC_1(VAR_11, VAR_9, VAR_8, 0);
 FUNC_4(VAR_11, VAR_2, VAR_10);
 FUNC_6(VAR_5, VAR_6, VAR_11);
}

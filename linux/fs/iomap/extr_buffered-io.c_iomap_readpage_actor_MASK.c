
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct page {int mapping; } ;
struct iomap_readpage_ctx {int cur_page_in_bio; TYPE_2__* bio; scalar_t__ is_readahead; struct page* cur_page; } ;
struct iomap_page {int read_count; } ;
struct iomap {scalar_t__ type; int bdev; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ loff_t ;
typedef int gfp_t ;
struct TYPE_9__ {scalar_t__ bi_sector; } ;
struct TYPE_10__ {int bi_end_io; TYPE_1__ bi_iter; int bi_opf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct page*,unsigned int,unsigned int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct page*,unsigned int,unsigned int) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,unsigned int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct iomap_page*,scalar_t__*,scalar_t__,unsigned int*,unsigned int*) ;
 struct iomap_page* FUNC_10 (struct inode*,struct page*) ;
 int VAR_10 ;
 int FUNC_11 (struct inode*,struct page*,struct iomap*) ;
 scalar_t__ FUNC_12 (struct iomap*,scalar_t__) ;
 int FUNC_13 (struct page*,unsigned int,unsigned int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static loff_t
FUNC_18(struct inode *VAR_11, loff_t VAR_12, loff_t VAR_13, void *VAR_14,
  struct iomap *VAR_15)
{
 struct iomap_readpage_ctx *VAR_16 = VAR_14;
 struct page *VAR_17 = VAR_16->cur_page;
 struct iomap_page *VAR_18 = FUNC_10(VAR_11, VAR_17);
 bool VAR_19 = 0, VAR_20 = 0;
 loff_t VAR_21 = VAR_12;
 unsigned VAR_22, VAR_23;
 sector_t VAR_24;

 if (VAR_15->type == VAR_2) {
  FUNC_0(VAR_12);
  FUNC_11(VAR_11, VAR_17, VAR_15);
  return VAR_5;
 }


 FUNC_9(VAR_11, VAR_18, &VAR_12, VAR_13, &VAR_22, &VAR_23);
 if (VAR_23 == 0)
  goto done;

 if (VAR_15->type != VAR_3 || VAR_12 >= FUNC_8(VAR_11)) {
  FUNC_17(VAR_17, VAR_22, VAR_23);
  FUNC_13(VAR_17, VAR_22, VAR_23);
  goto done;
 }

 VAR_16->cur_page_in_bio = 1;




 VAR_24 = FUNC_12(VAR_15, VAR_12);
 if (VAR_16->bio && FUNC_5(VAR_16->bio) == VAR_24)
  VAR_20 = 1;

 if (VAR_20 &&
     FUNC_1(VAR_16->bio, VAR_17, VAR_23, VAR_22, &VAR_19)) {
  if (!VAR_19 && VAR_18)
   FUNC_2(&VAR_18->read_count);
  goto done;
 }






 if (VAR_18)
  FUNC_2(&VAR_18->read_count);

 if (!VAR_16->bio || !VAR_20 || FUNC_6(VAR_16->bio, VAR_23)) {
  gfp_t VAR_25 = FUNC_14(VAR_17->mapping, VAR_1);
  int VAR_26 = (VAR_13 + VAR_5 - 1) >> VAR_4;

  if (VAR_16->bio)
   FUNC_16(VAR_16->bio);

  if (VAR_16->is_readahead)
   VAR_25 |= VAR_8 | VAR_9;
  VAR_16->bio = FUNC_4(VAR_25, FUNC_15(VAR_0, VAR_26));
  VAR_16->bio->bi_opf = VAR_6;
  if (VAR_16->is_readahead)
   VAR_16->bio->bi_opf |= VAR_7;
  VAR_16->bio->bi_iter.bi_sector = VAR_24;
  FUNC_7(VAR_16->bio, VAR_15->bdev);
  VAR_16->bio->bi_end_io = VAR_10;
 }

 FUNC_3(VAR_16->bio, VAR_17, VAR_23, VAR_22);
done:






 return VAR_12 - VAR_21 + VAR_23;
}

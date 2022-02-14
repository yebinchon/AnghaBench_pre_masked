
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iomap {scalar_t__ type; int bdev; } ;
struct inode {int dummy; } ;
struct bio_vec {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; int bi_opf; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,struct page*,unsigned int,unsigned int) ;
 int FUNC_1 (struct bio*,struct bio_vec*,int) ;
 int FUNC_2 (struct bio*,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct iomap*,scalar_t__) ;
 int FUNC_5 (struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct page*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_2, loff_t VAR_3, struct page *VAR_4,
  unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8,
  struct iomap *VAR_9)
{
 struct bio_vec VAR_10;
 struct bio VAR_11;

 if (VAR_9->type != VAR_0 || VAR_3 >= FUNC_3(VAR_2)) {
  FUNC_7(VAR_4, VAR_5, VAR_7, VAR_8, VAR_5 + VAR_6);
  FUNC_5(VAR_4, VAR_5, VAR_6);
  return 0;
 }

 FUNC_1(&VAR_11, &VAR_10, 1);
 VAR_11.bi_opf = VAR_1;
 VAR_11.bi_iter.bi_sector = FUNC_4(VAR_9, VAR_3);
 FUNC_2(&VAR_11, VAR_9->bdev);
 FUNC_0(&VAR_11, VAR_4, VAR_6, VAR_5);
 return FUNC_6(&VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbuf {int l_blkno; int l_flag; int l_ioevent; int l_offset; int l_page; } ;
struct jfs_log {int l2bsize; scalar_t__ no_integrity; int bdev; } ;
struct TYPE_2__ {int bi_sector; scalar_t__ bi_size; } ;
struct bio {TYPE_1__ bi_iter; int bi_opf; struct lbuf* bi_private; int (* bi_end_io ) (struct bio*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bio*,int ,scalar_t__,int ) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (char*,struct lbuf*,int) ;
 struct lbuf* FUNC_5 (struct jfs_log*,int) ;
 int FUNC_6 (struct bio*) ;
 int VAR_3 ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct jfs_log * VAR_4, int VAR_5, struct lbuf ** VAR_6)
{
 struct bio *VAR_7;
 struct lbuf *VAR_8;




 *VAR_6 = VAR_8 = FUNC_5(VAR_4, VAR_5);
 FUNC_4("lbmRead: bp:0x%p pn:0x%x", VAR_8, VAR_5);

 VAR_8->l_flag |= VAR_3;

 VAR_7 = FUNC_2(VAR_0, 1);

 VAR_7->bi_iter.bi_sector = VAR_8->l_blkno << (VAR_4->l2bsize - 9);
 FUNC_3(VAR_7, VAR_4->bdev);

 FUNC_1(VAR_7, VAR_8->l_page, VAR_1, VAR_8->l_offset);
 FUNC_0(VAR_7->bi_iter.bi_size != VAR_1);

 VAR_7->bi_end_io = FUNC_6;
 VAR_7->bi_private = VAR_8;
 VAR_7->bi_opf = VAR_2;

 if (VAR_4->no_integrity) {
  VAR_7->bi_iter.bi_size = 0;
  FUNC_6(VAR_7);
 } else {
  FUNC_7(VAR_7);
 }

 FUNC_8(VAR_8->l_ioevent, (VAR_8->l_flag != VAR_3));

 return 0;
}

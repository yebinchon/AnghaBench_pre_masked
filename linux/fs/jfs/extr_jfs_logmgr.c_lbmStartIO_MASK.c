
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbuf {int l_blkno; int l_offset; int l_page; struct jfs_log* l_log; } ;
struct jfs_log {int l2bsize; scalar_t__ no_integrity; int bdev; } ;
struct TYPE_3__ {int bi_sector; scalar_t__ bi_size; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; struct lbuf* bi_private; int (* bi_end_io ) (struct bio*) ;} ;
struct TYPE_4__ {int submitted; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bio*,int ,scalar_t__,int ) ;
 struct bio* FUNC_3 (int ,int) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct bio*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static void FUNC_8(struct lbuf * VAR_5)
{
 struct bio *VAR_6;
 struct jfs_log *VAR_7 = VAR_5->l_log;

 FUNC_5("lbmStartIO");

 VAR_6 = FUNC_3(VAR_0, 1);
 VAR_6->bi_iter.bi_sector = VAR_5->l_blkno << (VAR_7->l2bsize - 9);
 FUNC_4(VAR_6, VAR_7->bdev);

 FUNC_2(VAR_6, VAR_5->l_page, VAR_1, VAR_5->l_offset);
 FUNC_0(VAR_6->bi_iter.bi_size != VAR_1);

 VAR_6->bi_end_io = FUNC_6;
 VAR_6->bi_private = VAR_5;
 VAR_6->bi_opf = VAR_2 | VAR_3;


 if (VAR_7->no_integrity) {
  VAR_6->bi_iter.bi_size = 0;
  FUNC_6(VAR_6);
 } else {
  FUNC_7(VAR_6);
  FUNC_1(VAR_4.submitted);
 }
}

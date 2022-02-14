
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_struct {int dummy; } ;
struct bio_vec {unsigned int bv_len; unsigned int bv_offset; int bv_page; } ;
struct TYPE_2__ {int bi_sector; int bi_size; } ;
struct bio {TYPE_1__ bi_iter; int bi_disk; int bi_partno; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct hd_struct* FUNC_0 (int ,int ) ;
 struct bio_vec* FUNC_1 (struct bio*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct bio_vec*,struct bio_vec*) ;
 int FUNC_5 (struct hd_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,unsigned int,unsigned int) ;

void FUNC_10(int VAR_1, struct bio *VAR_2)
{
 sector_t VAR_3;
 struct bio_vec *VAR_4 = FUNC_1(VAR_2);
 unsigned VAR_5;
 struct hd_struct *VAR_6;

 FUNC_6();
 VAR_6 = FUNC_0(VAR_2->bi_disk, VAR_2->bi_partno);
 if (VAR_6)
  VAR_3 = FUNC_5(VAR_6);
 else
  VAR_3 = FUNC_2(VAR_2->bi_disk);
 FUNC_7();

 if (!VAR_3)
  return;






 if (FUNC_8(VAR_2->bi_iter.bi_sector >= VAR_3))
  return;

 VAR_3 -= VAR_2->bi_iter.bi_sector;
 if (FUNC_3((VAR_2->bi_iter.bi_size >> 9) <= VAR_3))
  return;


 VAR_5 = VAR_2->bi_iter.bi_size - (VAR_3 << 9);





 if (VAR_5 > VAR_4->bv_len)
  return;


 VAR_2->bi_iter.bi_size -= VAR_5;
 VAR_4->bv_len -= VAR_5;


 if (VAR_1 == VAR_0) {
  struct bio_vec VAR_7;

  FUNC_4(VAR_4, &VAR_7);
  FUNC_9(VAR_7.bv_page, VAR_7.bv_offset + VAR_7.bv_len,
    VAR_5);
 }
}

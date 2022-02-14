
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int flags; } ;
struct mtdswap_dev {unsigned int pages_per_eblk; scalar_t__ oob_buf; scalar_t__ page_buf; struct mtd_info* mtd; } ;
struct mtd_oob_ops {unsigned int len; unsigned int ooblen; scalar_t__ oobbuf; scalar_t__ datbuf; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {unsigned int writesize; unsigned int oobavail; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned int,unsigned int) ;
 int FUNC_1 (struct mtd_info*,unsigned int,struct mtd_oob_ops*) ;
 int FUNC_2 (struct mtd_info*,unsigned int,struct mtd_oob_ops*) ;
 unsigned int FUNC_3 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_4 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_5 (struct mtdswap_dev*,struct swap_eb*) ;
 unsigned int FUNC_6 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_7(struct mtdswap_dev *VAR_3,
     struct swap_eb *VAR_4)
{
 struct mtd_info *VAR_5 = VAR_3->mtd;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 loff_t VAR_11, VAR_12;
 unsigned int *VAR_13 = (unsigned int *)VAR_3->page_buf;
 unsigned char *VAR_14 = (unsigned char *)VAR_3->oob_buf;
 struct mtd_oob_ops VAR_15;
 int VAR_16;

 VAR_15.mode = VAR_1;
 VAR_15.len = VAR_5->writesize;
 VAR_15.ooblen = VAR_5->oobavail;
 VAR_15.ooboffs = 0;
 VAR_15.datbuf = VAR_3->page_buf;
 VAR_15.oobbuf = VAR_3->oob_buf;
 VAR_11 = FUNC_3(VAR_3, VAR_4);
 VAR_10 = VAR_3->pages_per_eblk * VAR_2 / VAR_5->writesize;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_12 = VAR_11;
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
   VAR_9 = FUNC_6(VAR_6 + VAR_7);
   FUNC_0(VAR_3->page_buf, VAR_9, VAR_5->writesize);
   FUNC_0(VAR_3->oob_buf, VAR_9, VAR_5->oobavail);
   VAR_16 = FUNC_2(VAR_5, VAR_12, &VAR_15);
   if (VAR_16)
    goto error;

   VAR_12 += VAR_5->writesize;
  }

  VAR_12 = VAR_11;
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
   VAR_16 = FUNC_1(VAR_5, VAR_12, &VAR_15);
   if (VAR_16)
    goto error;

   VAR_9 = FUNC_6(VAR_6 + VAR_7);
   for (VAR_8 = 0; VAR_8 < VAR_5->writesize/sizeof(int); VAR_8++)
    if (VAR_13[VAR_8] != VAR_9)
     goto error;

   for (VAR_8 = 0; VAR_8 < VAR_5->oobavail; VAR_8++)
    if (VAR_14[VAR_8] != (unsigned char)VAR_9)
     goto error;

   VAR_12 += VAR_5->writesize;
  }

  VAR_16 = FUNC_4(VAR_3, VAR_4);
  if (VAR_16)
   goto error;
 }

 VAR_4->flags &= ~VAR_0;
 return 1;

error:
 FUNC_5(VAR_3, VAR_4);
 return 0;
}

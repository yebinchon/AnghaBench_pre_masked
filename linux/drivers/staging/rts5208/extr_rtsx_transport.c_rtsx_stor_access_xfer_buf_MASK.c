
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct scatterlist {unsigned int offset; unsigned int length; } ;
struct page {int dummy; } ;
typedef enum xfer_buf_dir { ____Placeholder_xfer_buf_dir } xfer_buf_dir ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (struct scsi_cmnd*) ;
 unsigned int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;
 struct page* FUNC_7 (struct scatterlist*) ;

unsigned int FUNC_8(unsigned char *VAR_3,
           unsigned int VAR_4,
           struct scsi_cmnd *VAR_5,
           unsigned int *VAR_6,
           unsigned int *VAR_7,
           enum xfer_buf_dir VAR_8)
{
 unsigned int VAR_9;


 if (FUNC_5(VAR_5) == 0) {
  unsigned char *VAR_10;

  if (*VAR_7 >= FUNC_4(VAR_5))
   return 0;
  VAR_9 = FUNC_3(VAR_4, FUNC_4(VAR_5) - *VAR_7);

  VAR_10 = (unsigned char *)FUNC_6(VAR_5) + *VAR_7;

  if (VAR_8 == VAR_2)
   FUNC_2(VAR_10, VAR_3, VAR_9);
  else
   FUNC_2(VAR_3, VAR_10, VAR_9);
  *VAR_7 += VAR_9;






 } else {
  struct scatterlist *VAR_11 =
    (struct scatterlist *)FUNC_6(VAR_5)
    + *VAR_6;







  VAR_9 = 0;
  while (VAR_9 < VAR_4 && *VAR_6 < FUNC_5(VAR_5)) {
   struct page *VAR_12 = FUNC_7(VAR_11) +
     ((VAR_11->offset + *VAR_7) >> VAR_0);
   unsigned int VAR_13 = (VAR_11->offset + *VAR_7) &
         (VAR_1 - 1);
   unsigned int VAR_14 = VAR_11->length - *VAR_7;

   if (VAR_14 > VAR_4 - VAR_9) {

    VAR_14 = VAR_4 - VAR_9;
    *VAR_7 += VAR_14;
   } else {

    *VAR_7 = 0;
    ++*VAR_6;
    ++VAR_11;
   }

   while (VAR_14 > 0) {
    unsigned int VAR_15 = FUNC_3(VAR_14, (unsigned int)
      VAR_1 - VAR_13);
    unsigned char *VAR_16 = FUNC_0(VAR_12);

    if (VAR_8 == VAR_2)
     FUNC_2(VAR_16 + VAR_13, VAR_3 + VAR_9, VAR_15);
    else
     FUNC_2(VAR_3 + VAR_9, VAR_16 + VAR_13, VAR_15);
    FUNC_1(VAR_12);


    VAR_13 = 0;
    ++VAR_12;
    VAR_9 += VAR_15;
    VAR_14 -= VAR_15;
   }
  }
 }


 return VAR_9;
}

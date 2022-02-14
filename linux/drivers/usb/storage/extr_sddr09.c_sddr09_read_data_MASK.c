
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int srb; scalar_t__ extra; } ;
struct sddr09_card_info {unsigned long blockshift; unsigned long blockmask; unsigned int capacity; unsigned int pageshift; unsigned int blocksize; unsigned int pagesize; unsigned int* lba_to_pba; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned char*,int ,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct us_data*,unsigned long,unsigned int,unsigned int,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,unsigned int,int ,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_6 (struct us_data*,char*,unsigned int,unsigned int,...) ;

__attribute__((used)) static int
FUNC_7(struct us_data *VAR_5,
   unsigned long VAR_6,
   unsigned int VAR_7) {

 struct sddr09_card_info *VAR_8 = (struct sddr09_card_info *) VAR_5->extra;
 unsigned char *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 struct scatterlist *VAR_17;
 int VAR_18;


 VAR_10 = VAR_6 >> VAR_8->blockshift;
 VAR_13 = (VAR_6 & VAR_8->blockmask);
 VAR_11 = VAR_8->capacity >> (VAR_8->pageshift + VAR_8->blockshift);
 if (VAR_10 >= VAR_11)
  return -VAR_0;





 VAR_15 = FUNC_3(VAR_7, (unsigned int) VAR_8->blocksize) * VAR_8->pagesize;
 VAR_9 = FUNC_1(VAR_15, VAR_2);
 if (!VAR_9)
  return -VAR_1;




 VAR_18 = 0;
 VAR_16 = 0;
 VAR_17 = ((void*)0);

 while (VAR_7 > 0) {


  VAR_14 = FUNC_3(VAR_7, VAR_8->blocksize - VAR_13);
  VAR_15 = VAR_14 << VAR_8->pageshift;


  if (VAR_10 >= VAR_11) {
   FUNC_6(VAR_5, "Error: Requested lba %u exceeds maximum %u\n",
         VAR_10, VAR_11);
   VAR_18 = -VAR_0;
   break;
  }


  VAR_12 = VAR_8->lba_to_pba[VAR_10];

  if (VAR_12 == VAR_4) {

   FUNC_6(VAR_5, "Read %d zero pages (LBA %d) page %d\n",
         VAR_14, VAR_10, VAR_13);
   FUNC_2(VAR_9, 0, VAR_15);

  } else {
   FUNC_6(VAR_5, "Read %d pages, from PBA %d (LBA %d) page %d\n",
         VAR_14, VAR_12, VAR_10, VAR_13);

   VAR_6 = ((VAR_12 << VAR_8->blockshift) + VAR_13) <<
    VAR_8->pageshift;

   VAR_18 = FUNC_4(VAR_5, VAR_6>>1,
     VAR_14, VAR_8->pageshift, VAR_9, 0);
   if (VAR_18)
    break;
  }


  FUNC_5(VAR_9, VAR_15, VAR_5->srb,
    &VAR_17, &VAR_16, VAR_3);

  VAR_13 = 0;
  VAR_10++;
  VAR_7 -= VAR_14;
 }

 FUNC_0(VAR_9);
 return VAR_18;
}

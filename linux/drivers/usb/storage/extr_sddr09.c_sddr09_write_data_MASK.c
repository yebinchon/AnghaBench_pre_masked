
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int srb; scalar_t__ extra; } ;
struct sddr09_card_info {unsigned long blockshift; unsigned long blockmask; unsigned int capacity; unsigned int pageshift; unsigned int blocksize; unsigned int pagesize; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct us_data*,unsigned int,unsigned int,unsigned int,unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned int,int ,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_5 (struct us_data*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct us_data *VAR_5,
    unsigned long VAR_6,
    unsigned int VAR_7) {

 struct sddr09_card_info *VAR_8 = (struct sddr09_card_info *) VAR_5->extra;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned char *VAR_15;
 unsigned char *VAR_16;
 unsigned int VAR_17, VAR_18;
 struct scatterlist *VAR_19;
 int VAR_20;


 VAR_9 = VAR_6 >> VAR_8->blockshift;
 VAR_11 = (VAR_6 & VAR_8->blockmask);
 VAR_10 = VAR_8->capacity >> (VAR_8->pageshift + VAR_8->blockshift);
 if (VAR_9 >= VAR_10)
  return -VAR_1;
 VAR_13 = (1 << VAR_8->pageshift) + (1 << VAR_0);
 VAR_14 = (VAR_13 << VAR_8->blockshift);
 VAR_15 = FUNC_1(VAR_14, VAR_4);
 if (!VAR_15)
  return -VAR_2;







 VAR_17 = FUNC_2(VAR_7, (unsigned int) VAR_8->blocksize) * VAR_8->pagesize;
 VAR_16 = FUNC_1(VAR_17, VAR_4);
 if (!VAR_16) {
  FUNC_0(VAR_15);
  return -VAR_2;
 }

 VAR_20 = 0;
 VAR_18 = 0;
 VAR_19 = ((void*)0);

 while (VAR_7 > 0) {



  VAR_12 = FUNC_2(VAR_7, VAR_8->blocksize - VAR_11);
  VAR_17 = (VAR_12 << VAR_8->pageshift);


  if (VAR_9 >= VAR_10) {
   FUNC_5(VAR_5, "Error: Requested lba %u exceeds maximum %u\n",
         VAR_9, VAR_10);
   VAR_20 = -VAR_1;
   break;
  }


  FUNC_4(VAR_16, VAR_17, VAR_5->srb,
    &VAR_19, &VAR_18, VAR_3);

  VAR_20 = FUNC_3(VAR_5, VAR_9, VAR_11, VAR_12,
    VAR_16, VAR_15);
  if (VAR_20)
   break;

  VAR_11 = 0;
  VAR_9++;
  VAR_7 -= VAR_12;
 }

 FUNC_0(VAR_16);
 FUNC_0(VAR_15);

 return VAR_20;
}

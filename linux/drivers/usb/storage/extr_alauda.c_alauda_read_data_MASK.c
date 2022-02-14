
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct us_data {int srb; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {unsigned int blockshift; unsigned int pageshift; unsigned int blocksize; unsigned int pagesize; unsigned int uzonesize; unsigned long blockmask; unsigned int capacity; unsigned int** lba_to_pba; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct us_data*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct us_data*,unsigned int) ;
 int FUNC_2 (struct us_data*,unsigned int,unsigned int,unsigned int,unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned char*,int ,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (unsigned char*,unsigned int,int ,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_8 (struct us_data*,char*,unsigned int,unsigned int,...) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_5, unsigned long VAR_6,
  unsigned int VAR_7)
{
 unsigned char *VAR_8;
 u16 VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = FUNC_0(VAR_5).blockshift;
 unsigned int VAR_15 = FUNC_0(VAR_5).pageshift;
 unsigned int VAR_16 = FUNC_0(VAR_5).blocksize;
 unsigned int VAR_17 = FUNC_0(VAR_5).pagesize;
 unsigned int VAR_18 = FUNC_0(VAR_5).uzonesize;
 struct scatterlist *VAR_19;
 int VAR_20;
 VAR_12 = FUNC_6(VAR_7, VAR_16) * (VAR_17 + 64);
 VAR_8 = FUNC_4(VAR_12, VAR_0);
 if (!VAR_8)
  return VAR_3;


 VAR_9 = VAR_6 >> VAR_14;
 VAR_11 = (VAR_6 & FUNC_0(VAR_5).blockmask);
 VAR_10 = FUNC_0(VAR_5).capacity >> (VAR_14 + VAR_15);

 VAR_20 = VAR_4;
 VAR_13 = 0;
 VAR_19 = ((void*)0);

 while (VAR_7 > 0) {
  unsigned int VAR_21 = VAR_9 / VAR_18;
  unsigned int VAR_22 = VAR_9 - (VAR_21 * VAR_18);
  unsigned int VAR_23;
  u16 VAR_24;
  FUNC_1(VAR_5, VAR_21);


  if (VAR_9 >= VAR_10) {
   FUNC_8(VAR_5, "Error: Requested lba %u exceeds maximum %u\n",
         VAR_9, VAR_10);
   VAR_20 = VAR_3;
   break;
  }


  VAR_23 = FUNC_6(VAR_7, VAR_16 - VAR_11);
  VAR_12 = VAR_23 << VAR_15;


  VAR_24 = FUNC_0(VAR_5).lba_to_pba[VAR_21][VAR_22];

  if (VAR_24 == VAR_2) {
   FUNC_8(VAR_5, "Read %d zero pages (LBA %d) page %d\n",
         VAR_23, VAR_9, VAR_11);
   FUNC_5(VAR_8, 0, VAR_12);
  } else {
   FUNC_8(VAR_5, "Read %d pages, from PBA %d (LBA %d) page %d\n",
         VAR_23, VAR_24, VAR_9, VAR_11);

   VAR_20 = FUNC_2(VAR_5, VAR_24, VAR_11, VAR_23, VAR_8);
   if (VAR_20 != VAR_4)
    break;
  }


  FUNC_7(VAR_8, VAR_12, VAR_5->srb,
    &VAR_19, &VAR_13, VAR_1);

  VAR_11 = 0;
  VAR_9++;
  VAR_7 -= VAR_23;
 }

 FUNC_3(VAR_8);
 return VAR_20;
}

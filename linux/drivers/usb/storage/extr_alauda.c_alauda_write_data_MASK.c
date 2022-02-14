
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct us_data {int srb; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {unsigned int blockshift; unsigned int pageshift; unsigned int blocksize; unsigned int pagesize; unsigned long blockmask; unsigned int capacity; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct us_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct us_data*,unsigned int,unsigned int,unsigned int,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned int,int ) ;
 unsigned char* FUNC_4 (unsigned int,unsigned int,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned char*,unsigned int,int ,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_7 (struct us_data*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct us_data *VAR_4, unsigned long VAR_5,
  unsigned int VAR_6)
{
 unsigned char *VAR_7, *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = FUNC_0(VAR_4).blockshift;
 unsigned int VAR_13 = FUNC_0(VAR_4).pageshift;
 unsigned int VAR_14 = FUNC_0(VAR_4).blocksize;
 unsigned int VAR_15 = FUNC_0(VAR_4).pagesize;
 struct scatterlist *VAR_16;
 u16 VAR_17, VAR_18;
 int VAR_19;







 VAR_10 = FUNC_5(VAR_6, VAR_14) * VAR_15;
 VAR_7 = FUNC_3(VAR_10, VAR_1);
 if (!VAR_7)
  return VAR_2;





 VAR_8 = FUNC_4(VAR_15 + 64, VAR_14, VAR_1);
 if (!VAR_8) {
  FUNC_2(VAR_7);
  return VAR_2;
 }


 VAR_17 = VAR_5 >> VAR_12;
 VAR_9 = (VAR_5 & FUNC_0(VAR_4).blockmask);
 VAR_18 = FUNC_0(VAR_4).capacity >> (VAR_13 + VAR_12);

 VAR_19 = VAR_3;
 VAR_11 = 0;
 VAR_16 = ((void*)0);

 while (VAR_6 > 0) {

  unsigned int VAR_20 = FUNC_5(VAR_6, VAR_14 - VAR_9);
  VAR_10 = VAR_20 << VAR_13;


  if (VAR_17 >= VAR_18) {
   FUNC_7(VAR_4, "Requested lba %u exceeds maximum %u\n",
         VAR_17, VAR_18);
   VAR_19 = VAR_2;
   break;
  }


  FUNC_6(VAR_7, VAR_10, VAR_4->srb,
    &VAR_16, &VAR_11, VAR_0);

  VAR_19 = FUNC_1(VAR_4, VAR_17, VAR_9, VAR_20, VAR_7,
   VAR_8);
  if (VAR_19 != VAR_3)
   break;

  VAR_9 = 0;
  VAR_17++;
  VAR_6 -= VAR_20;
 }

 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_19;
}

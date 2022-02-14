
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct scatterlist {int dummy; } ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct scatterlist*) ;
 unsigned int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static __le32 *FUNC_4(__le32 *VAR_8, struct scatterlist *VAR_9,
          unsigned int VAR_10, u32 VAR_11,
          unsigned int VAR_12, unsigned int VAR_13,
          unsigned int VAR_14, unsigned int VAR_15, bool VAR_16)
{
 struct scatterlist *VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20;

 if (VAR_16) {
  (*VAR_8++) = FUNC_0(VAR_4);
  (*VAR_8++) = 0;
 }


 if (VAR_11 != VAR_0)
  *(VAR_8++) = FUNC_0(VAR_5 | VAR_11);


 VAR_17 = VAR_9;
 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  while (VAR_10 && VAR_10 >= FUNC_2(VAR_17)) {
   VAR_10 -= FUNC_2(VAR_17);
   VAR_17 = FUNC_3(VAR_17);
  }
  if (VAR_15 && VAR_18 > 0 && !(VAR_18 % VAR_15))
   VAR_20 = VAR_6 | VAR_3 | VAR_1;
  else
   VAR_20 = VAR_6;
  if (VAR_12 <= FUNC_2(VAR_17) - VAR_10) {

   *(VAR_8++) = FUNC_0(VAR_7 | VAR_20 |
           VAR_2 | VAR_12);
   *(VAR_8++) = FUNC_0(FUNC_1(VAR_17) + VAR_10);
   VAR_10 += VAR_12;
  } else {

   VAR_19 = VAR_12;
   *(VAR_8++) = FUNC_0(VAR_7 | VAR_20 |
           (FUNC_2(VAR_17) - VAR_10));
   *(VAR_8++) = FUNC_0(FUNC_1(VAR_17) + VAR_10);
   VAR_19 -= (FUNC_2(VAR_17) - VAR_10);
   VAR_10 = 0;
   VAR_17 = FUNC_3(VAR_17);
   while (VAR_19 > FUNC_2(VAR_17)) {
    *(VAR_8++) = FUNC_0(VAR_7 |
            FUNC_2(VAR_17));
    *(VAR_8++) = FUNC_0(FUNC_1(VAR_17));
    VAR_19 -= FUNC_2(VAR_17);
    VAR_17 = FUNC_3(VAR_17);
   }
   *(VAR_8++) = FUNC_0(VAR_7 | VAR_2 | VAR_19);
   *(VAR_8++) = FUNC_0(FUNC_1(VAR_17));
   VAR_10 += VAR_19;
  }
  VAR_10 += VAR_13;
 }

 return VAR_8;
}

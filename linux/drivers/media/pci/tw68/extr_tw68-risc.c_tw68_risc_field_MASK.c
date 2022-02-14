
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct scatterlist*) ;
 unsigned int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static __le32 *FUNC_4(__le32 *VAR_5, struct scatterlist *VAR_6,
       unsigned int VAR_7, u32 VAR_8,
       unsigned int VAR_9, unsigned int VAR_10,
       unsigned int VAR_11, bool VAR_12)
{
 struct scatterlist *VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;

 if (VAR_12) {
  *(VAR_5++) = FUNC_0(VAR_1);
  *(VAR_5++) = 0;
 }


 if (VAR_8 == 1)
  *(VAR_5++) = FUNC_0(VAR_4);
 else
  *(VAR_5++) = FUNC_0(VAR_3);
 *(VAR_5++) = 0;


 VAR_13 = VAR_6;
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {

  while (VAR_7 && VAR_7 >= FUNC_2(VAR_13)) {
   VAR_7 -= FUNC_2(VAR_13);
   VAR_13 = FUNC_3(VAR_13);
  }
  if (VAR_9 <= FUNC_2(VAR_13) - VAR_7) {

   *(VAR_5++) = FUNC_0(VAR_2 |
                                VAR_9);
   *(VAR_5++) = FUNC_0(FUNC_1(VAR_13) + VAR_7);
   VAR_7 += VAR_9;
  } else {






   VAR_15 = VAR_9;

   VAR_16 = (FUNC_2(VAR_13) - VAR_7);
   *(VAR_5++) = FUNC_0(VAR_2 |
      (7 << 24) |
      VAR_16);
   *(VAR_5++) = FUNC_0(FUNC_1(VAR_13) + VAR_7);
   VAR_15 -= VAR_16;
   VAR_13 = FUNC_3(VAR_13);

   while (VAR_15 > FUNC_2(VAR_13)) {
    *(VAR_5++) = FUNC_0(VAR_0 |
      (VAR_16 << 12) |
      FUNC_2(VAR_13));
    *(VAR_5++) = FUNC_0(FUNC_1(VAR_13));
    VAR_15 -= FUNC_2(VAR_13);
    VAR_13 = FUNC_3(VAR_13);
    VAR_16 += FUNC_2(VAR_13);
   }
   if (VAR_15) {

    *(VAR_5++) = FUNC_0(VAR_0 |
       (VAR_16 << 12) |
       VAR_15);
    *(VAR_5++) = FUNC_0(FUNC_1(VAR_13));
   }
   VAR_7 = VAR_15;
  }
  VAR_7 += VAR_10;
 }

 return VAR_5;
}

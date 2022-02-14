
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
 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct scatterlist*) ;
 unsigned int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static __le32 *FUNC_4(__le32 * VAR_6, struct scatterlist *VAR_7,
      unsigned int VAR_8, u32 VAR_9,
      unsigned int VAR_10, unsigned int VAR_11,
      unsigned int VAR_12, bool VAR_13)
{
 struct scatterlist *VAR_14;
 unsigned int VAR_15, VAR_16;

 if (VAR_13) {
  *(VAR_6++) = FUNC_0(VAR_2);
  *(VAR_6++) = FUNC_0(0);
  *(VAR_6++) = FUNC_0(0);
 }


 if (VAR_9 != VAR_0)
  *(VAR_6++) = FUNC_0(VAR_3 | VAR_9);


 VAR_14 = VAR_7;
 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  while (VAR_8 && VAR_8 >= FUNC_2(VAR_14)) {
   VAR_8 -= FUNC_2(VAR_14);
   VAR_14 = FUNC_3(VAR_14);
  }
  if (VAR_10 <= FUNC_2(VAR_14) - VAR_8) {

   *(VAR_6++) = FUNC_0(VAR_5 | VAR_4 | VAR_1 |
     VAR_10);
   *(VAR_6++) = FUNC_0(FUNC_1(VAR_14) + VAR_8);
   *(VAR_6++) = FUNC_0(0);
   VAR_8 += VAR_10;
  } else {

   VAR_16 = VAR_10;
   *(VAR_6++) = FUNC_0(VAR_5 | VAR_4 |
     (FUNC_2(VAR_14) - VAR_8));
   *(VAR_6++) = FUNC_0(FUNC_1(VAR_14) + VAR_8);
   *(VAR_6++) = FUNC_0(0);
   VAR_16 -= (FUNC_2(VAR_14) - VAR_8);
   VAR_8 = 0;
   VAR_14 = FUNC_3(VAR_14);
   while (VAR_16 > FUNC_2(VAR_14)) {
    *(VAR_6++) = FUNC_0(VAR_5 |
      FUNC_2(VAR_14));
    *(VAR_6++) = FUNC_0(FUNC_1(VAR_14));
    *(VAR_6++) = FUNC_0(0);
    VAR_16 -= FUNC_2(VAR_14);
    VAR_14 = FUNC_3(VAR_14);
   }
   *(VAR_6++) = FUNC_0(VAR_5 | VAR_1 | VAR_16);
   *(VAR_6++) = FUNC_0(FUNC_1(VAR_14));
   *(VAR_6++) = FUNC_0(0);
   VAR_8 += VAR_16;
  }

  VAR_8 += VAR_11;
 }

 return VAR_6;
}

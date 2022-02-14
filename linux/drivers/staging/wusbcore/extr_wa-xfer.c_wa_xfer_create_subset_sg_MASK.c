
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; scalar_t__ offset; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct scatterlist* FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int const) ;
 int FUNC_3 (struct scatterlist*,unsigned int) ;
 int FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,int ,unsigned int,scalar_t__) ;

__attribute__((used)) static struct scatterlist *FUNC_8(struct scatterlist *VAR_2,
 const unsigned int VAR_3,
 const unsigned int VAR_4, int *VAR_5)
{
 struct scatterlist *VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0,
  VAR_9;
 struct scatterlist *VAR_10 = VAR_2;
 struct scatterlist *VAR_11, *VAR_12;


 while ((VAR_10) &&
   (VAR_7 < VAR_3)) {
  VAR_7 += VAR_10->length;



  if (VAR_7 <= VAR_3)
   VAR_10 = FUNC_5(VAR_10);
 }



 if (VAR_7 > VAR_3) {
  VAR_8 = VAR_10->length -
   (VAR_7 - VAR_3);
 }


 VAR_9 = FUNC_0((VAR_4 +
  VAR_8 +
  VAR_10->offset),
  VAR_1);

 VAR_6 = FUNC_1((sizeof(struct scatterlist) * VAR_9), VAR_0);
 if (VAR_6) {
  FUNC_3(VAR_6, VAR_9);



  VAR_12 = VAR_11 = VAR_6;
  VAR_7 = 0;



  VAR_9 = 0;
  while ((VAR_7 < VAR_4) &&
    VAR_11 && VAR_10) {
   unsigned int VAR_13 = FUNC_2((VAR_10->length -
    VAR_8),
    (VAR_4 - VAR_7));

   FUNC_7(VAR_11, FUNC_6(VAR_10),
    VAR_13,
    VAR_10->offset +
    VAR_8);

   VAR_7 += VAR_13;

   VAR_12 = VAR_11;
   VAR_11 = FUNC_5(VAR_11);
   VAR_10 = FUNC_5(VAR_10);


   VAR_8 = 0;
   VAR_9++;
  }



  FUNC_4(VAR_12);
  *VAR_5 = VAR_9;
 }

 return VAR_6;
}

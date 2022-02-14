
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {size_t length; scalar_t__ offset; } ;


 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*,int ,size_t,scalar_t__) ;

__attribute__((used)) static size_t FUNC_6(struct scatterlist *VAR_0,
 struct scatterlist *VAR_1, int VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;

 while (VAR_3 > 0) {
  if (VAR_3 >= VAR_0->length) {
   if (FUNC_1(VAR_0))
    return 0;

   VAR_3 -= VAR_0->length;
   VAR_0 = FUNC_3(VAR_0);
   continue;
  }

  VAR_5 = FUNC_0(VAR_4, VAR_0->length - VAR_3);
  FUNC_5(VAR_1, FUNC_4(VAR_0),
   VAR_5, VAR_0->offset + VAR_3);

  VAR_4 -= VAR_5;
  VAR_3 = 0;

  if (FUNC_1(VAR_0) || !VAR_4)
   goto out;

  VAR_1 = FUNC_3(VAR_1);
  VAR_2--;
  VAR_0 = FUNC_3(VAR_0);
 }

 while (VAR_4 > VAR_0->length && VAR_2--) {
  VAR_4 -= VAR_0->length;
  VAR_5 += VAR_0->length;

  FUNC_5(VAR_1, FUNC_4(VAR_0),
    VAR_0->length, VAR_0->offset);

  if (FUNC_1(VAR_0) || !VAR_4)
   goto out;

  VAR_0 = FUNC_3(VAR_0);
  VAR_1 = FUNC_3(VAR_1);
 }

 if (VAR_4 && VAR_2) {
  FUNC_5(VAR_1, FUNC_4(VAR_0), VAR_4, VAR_0->offset);
  VAR_5 += VAR_4;
 }
out:
 FUNC_2(VAR_1);
 return VAR_5;
}
